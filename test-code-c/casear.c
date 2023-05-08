#include <stdio.h>

int encrypt( int ch, int shifted){
	if (ch >= 'a' && ch <= 'z'){
		return 'a' + ((ch-'a'+shifted) % 26);
	}
	else if (ch >= 'A' && ch <= 'Z'){
		return 'A' + ((ch-'A'+shifted) % 26);
	}
	else {
		return ch;
	}
}
int main(int agrc, char *agr[]){
	int character, n;
	int key = 1;
	printf("nhap vao ky tu can ma hoa\n");

	if(agrc == 2){
		key = atoi(agr[2]);
	}
	while((character == getchar()) != EOF){
		printf("%c",encrypt(character, key));
	}
	
	return 0;
}
