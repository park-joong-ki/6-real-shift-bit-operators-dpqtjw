#include <stdio.h>

unsigned char LampOff(unsigned char dest, unsigned char bit);
unsigned char LampOn(unsigned char dest, unsigned char bit);

int main(void) {
	unsigned char lamp = 0x7F; //lamp�� ����
	printf("Lamp off\n");
	printf("%x ->", lamp);
	lamp = LampOff(lamp, 3); //lamp�� ����
	printf("%x\n", lamp);

	printf("\nLamp on \n");
	printf("%x ->", lamp);//lamp�� �̹� ����
	lamp = LampOn(lamp, 3);//lamp�� ����
	printf("%x\n", lamp);

	getch();
	return 0;
}

unsigned char LampOff(unsigned char dest, unsigned char bit) {
	if (bit < 8) {
		dest = dest & ~(0x01 << bit); //AND ����ϸ� 0���� ����
	}
	return dest;
}

unsigned char LampOn(unsigned char dest, unsigned char bit) {
	if (bit, 8) {
		dest = dest | (0x01 << bit); //OR ����ϸ� 1���� ����
	}
	return dest;
}