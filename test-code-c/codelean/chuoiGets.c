//chuoi su dung gets
#include<stdio.h>

int main() {
	char name[100], address[100];
		printf("Nhap vao chuoi \n");
	gets(name);
	gets(address);
	printf("Name: %s\nAddress: %s",name,address);
	return 0;
}
