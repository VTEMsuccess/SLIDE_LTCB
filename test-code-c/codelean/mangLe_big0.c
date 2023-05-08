//tinh tong cac so nguyen le > 0 trong mang

#include<stdio.h>

int main() {
    int a[100], i, n, sum=0;
    printf("nhap vao n so luong phan tu cua mang ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
    	printf("nhap vao phan tu thu: %d\n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i] % 2 != 0 && a[i] > 0){
            sum = sum+a[i];
        }
    }
    printf(" tong le bigger khong = %d",sum);
    return 0;
}

