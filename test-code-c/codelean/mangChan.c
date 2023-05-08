//in ra cac so chan trong mang

#include<stdio.h>

int main() {
    int n,i,a[100];
    printf("nhap vao n so luong phan tu cua mang ");
    scanf("%d",&n);
    for( i=0; i<n; i++){
    	printf("nhap vao phan tu thu: %d\n",i+1);
        scanf("%d",&a[i]);
    }
    for( i=0; i<n; i++){
        if( a[i] % 2 == 0 ){
            printf(" mang so chan lan luot la %d \n",a[i]);
        }
    }
    return 0;
}
