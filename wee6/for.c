#include <stdio.h>
#include <string.h> //strlen() �Լ�����ϱ�

int main(void) {
	char* string = "Hanbat National University";

	for (int i = 0; i < strlen(string); i++) {
		//a�� ASCII �ڵ�� 65
		//A�� ASCII �ڵ�� 97
		if (string[i] == 'a') {
			
			char upper = string[i] - 32;
			printf("Index %d: %c\n", i, upper);
		}
		else if (string[i]) {
			continue;
		}
		else {
			printf("Index %d: %c\n", i, string[i]);
		}
		printf("Index %d: %c\n",i,string[i]);
	}

	getch(); 

	return 0;
}