//in chuoi thuong thanh Hoa khong dung ham

#include<stdio.h>
#include<string.h>

int main() {
	char s[100];
	int i;
	scanf("%s",&s);
	for(i=0; i<strlen(s); i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] -= 32; //	chuoi thuong thanh Hoa
		}
	}
	printf("%s",s);
	return 0;
}
