//tinh tong cac so nguyen duong le nho hon n
#include <stdio.h>
int main(){
	int i,n;
	int sum = 0;

	do{
		printf("\nNhap vao so n nguyen duong\n ");
		scanf("%d",&n);
		if( n <= 0){
			printf("\nBan nhap sai! moi ban nhap lai!\n");
		}
	}while(n <= 0);
	for (i=1; i<n; i +=2){
		sum = sum + i;
	}
		printf("\n sum = %d",sum);
	
	return 0;
}
