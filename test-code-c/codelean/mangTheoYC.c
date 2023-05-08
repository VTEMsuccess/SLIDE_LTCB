//in ra cac gia tri trong mang theo yeu cau 

#include<stdio.h>

int main() {
	int i,a[100],n;
	printf("nhap vao n so luong phan tu cua mang ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("nhap vao phan tu thu: %d\n",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
	//	if(a[i] >= 0 && a[i] <= 10){
	if( n % i ==0){

			printf("%d ",a[i]);
		}
	}
	return 0;
}

