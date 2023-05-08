//tinh tong mang
#include<stdio.h>

int main() {
    int a[10],sum=0,i;
    for (i=0; i<10; i++){
    	printf("nhap vao phan tu thu: %d\n",i+1);
    	scanf("%d",&a[i]);
	}
    
    for( i=0; i<10; i++){
    	
         sum = sum+a[i];
    }
   printf("tong = %d",sum);

    return 0;
}
