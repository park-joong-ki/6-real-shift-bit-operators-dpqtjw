#include <stdio.h>

unsigned char LampOff(unsigned char dest, unsigned char bit);
unsigned char LampOn(unsigned char dest, unsigned char bit);

int main(void) {
	unsigned char lamp = 0x7F; //lamp가 켜짐
	printf("Lamp off\n");
	printf("%x ->", lamp);
	lamp = LampOff(lamp, 3); //lamp가 꺼짐
	printf("%x\n", lamp);

	printf("\nLamp on \n");
	printf("%x ->", lamp);//lamp가 이미 껐다
	lamp = LampOn(lamp, 3);//lamp가 켜짐
	printf("%x\n", lamp);

	getch();
	return 0;
}

unsigned char LampOff(unsigned char dest, unsigned char bit) {
	if (bit < 8) {
		dest = dest & ~(0x01 << bit); //AND 사용하면 0으로 설정
	}
	return dest;
}

unsigned char LampOn(unsigned char dest, unsigned char bit) {
	if (bit, 8) {
		dest = dest | (0x01 << bit); //OR 사용하면 1으로 설정
	}
	return dest;
}