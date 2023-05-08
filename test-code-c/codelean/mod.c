//in ra cac so chia het cho 3 va 5 tu a <= b
#include<stdio.h>

int main() {
	int a,b;
	scanf("%d,%d",&a,&b);
	while(a<=b){
		if( a%3==0 && a%5==0){
			printf("%d ",a);
		}
		a++;
	}
	return 0;
}
