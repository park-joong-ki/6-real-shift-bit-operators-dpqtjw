#include <stdio.h>

int main(void) {
	// for문 배웠을 때 sum = sum+sum 했지만
	//while문 배울때 sum= sum* sum 할게요
	int sum1 = 0; //첫번째 시도
	int sum2 = 1; // 두번째 시도
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