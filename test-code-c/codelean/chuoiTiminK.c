//X�u ban chat l� 1 mang c�c k� tu n�n ban c� the lay ra phan tu thu k trong x�u s bang s[k - 1];
#include<stdio.h>

int main() {
	char c[100];
	int k;
	printf("Nhap vao chuoi \n");
	scanf("%s",&c);
	printf("Nhap vao so nguyen k can tim \n");
	scanf("%d",&k);
	printf("%c",c[k-1]);
	printf("\n do dai chuoi %d",strlen(c));
	return 0;
}
