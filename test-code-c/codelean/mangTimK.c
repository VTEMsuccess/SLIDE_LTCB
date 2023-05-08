// in ra man hinh so luong phan tu bang k trong mang

#include<stdio.h>

int main() {
    int n,k,i,a[100];
    printf("nhap vao n so luong phan tu cua mang ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
    	printf("nhap vao phan tu thu: %d\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("nhap vao k can tim ");
    scanf("%d",&k);
    int count=0;
    for (i=0; i<n; i++){
        if(a[i]==k){
            count++;
        }
    }
    printf(" so luong tim thay trong mang = %d",count);
    return 0;
}
