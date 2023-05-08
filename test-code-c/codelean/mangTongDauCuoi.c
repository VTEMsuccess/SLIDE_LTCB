//tinh tong mang (phan tu dau a[0] va phan tu cuoi a[n-1] )
#include<stdio.h>

int main() {
    int i,n,a[100];
    printf("nhap vao n so luong phan tu cua mang ");
    scanf("%d",&n);
    for (i=0; i<n; i++){
    	printf("nhap vao phan tu thu: %d\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("Tong pt Star and End = %d",a[0]+a[n-1]);
    return 0;
}
