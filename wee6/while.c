#include <stdio.h>

int main(void) {
	// for�� ����� �� sum = sum+sum ������
	//while�� ��ﶧ sum= sum* sum �ҰԿ�
	int sum1 = 0; //ù��° �õ�
	int sum2 = 1; // �ι�° �õ�
	int sum3 = 53;


	int count = 1;

	while (count <= 50) {
		printf("sum(%d) * count(%d) =", sum3, count);
		sum3 = sum3 * count;
		printf(" % d\n", sum3);

		count++;
	}
	printf("\nTotal: count = %d, sum = %d", count, sum3);

	getch();

	return 0;
}