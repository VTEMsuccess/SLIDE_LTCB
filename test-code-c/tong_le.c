#include <stdio.h>//tinh tong cac so nguyen le
int main(){
	int i,n,s = 0;
	printf("nhap vao so nguyen n ");
	scanf("%d",&n);
	for( i=0; i<=n ; i++){
		if( i%3 == 0){
			s=s+i;
		}
	}
	printf("tong cac so le den %d = %d ",n,s);
	
	return 0;
}
