//chuong trinh dao chuoi trong c dung ham strrev()
#include <stdio.h>
#include <string.h>
int main(){
	char n[100];
	printf("nhap vao chuoi n ky tu: \n");
	scanf("%s",&n);
	printf("chuoi truoc khi dao la: %s \n",n);
	printf("chuoi sau khi dao la: %s",strrev(n));
	return 0;
}
