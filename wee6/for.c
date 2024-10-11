#include <stdio.h>
#include <string.h> //strlen() 함수사용하기

int main(void) {
	char* string = "Hanbat National University";

	for (int i = 0; i < strlen(string); i++) {
		//a의 ASCII 코드는 65
		//A의 ASCII 코드는 97
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