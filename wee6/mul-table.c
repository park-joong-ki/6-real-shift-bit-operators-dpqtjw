#include <stdio.h>

int main(void) {
	int i, j;

	//�� ���� �� 1~9 ���
	printf("    "); //ù ���� ����
	for (i = 1; i <= 9; i++) {
		printf("%4d", i); //%4d = ���� 4�� ���
	}
	printf("\n");

	// ���ʿ��� ������ �� ����ϱ�
	printf("   -------------------------------------\n");

	//������ ���̺� ����ϱ�
	for (i = 1; i <= 9; i++) {
		printf("%2d |", i); //�� ���� ���
		for (j = 1; j <= 9; j++) {
			printf("%4d", i * j);
		}
		printf("\n");
	}

	getch();

	return 0;
}