#include <stdio.h>

int main(void) {
	int num = 8;

	//���� ����Ʈ �����ڸ� ����ϸ� ���ϱ�
	int mulBay2 = num << 1;//num *2
	int mulBay4 = num << 2;//num * 4
	int mulBay8 = num << 3;//num *8

	//������ ����Ʈ �����ڸ� ����ϸ� ������
	int divBay2 = num >> 1;//num/2
	int divBay4 = num >> 2;
	int divBay8 = num >> 3;

	//��� ����ϱ�
	printf("Original: %d\n", num);
	printf("num * 2 (num << 1): %d\n", mulBay2);
	printf("num * 4 (num << 2): %d\n", mulBay4);
	printf("num * 8 (num << 3): %d\n", mulBay8);
	printf("num / 2 (num >> 1): %d\n", divBay2);
	printf("num / 4 (num >> 2): %d\n", divBay4);
	printf("num / 8 (num >> 3): %d\n", divBay8);
	

	return 0;
}