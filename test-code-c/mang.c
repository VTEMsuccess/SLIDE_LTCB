//nhap xuat mang don gian
#include <stdio.h>
const int MAX=10;

void NhapArray(int a[],int n){
	int i;
	for( i=0; i<n; i++){
		printf("\nnhap phan tu a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void XuatArray(int a[], int n){
	int i;
	for( i=0; i<n; i++){
		printf("\nphan tu thu a[%d] = %d ",i,a[i]);
	}
}
int search(int a[], int n, int v){
	int i;
	for(i=0; i<n; i++){
		if(a[i]==v){
				return i;
		}
	}
	return -1;
}
int main(){
	int a[MAX];
	int n;
	printf("\nNhap so luong phan tu: ");
	do{
		
		scanf("%d",&n);
		if(n<=0 || n>MAX){
			printf("\nNhap lai sl phan tu ");
		}
	}while(n<=0 ||n>MAX);
	printf("\n======NHAP MANG======\n");
	NhapArray(a,n);
	printf("\n======XUAT MANG======\n");
	XuatArray(a,n);
	printf("\n======TIM MANG======\n");
	int v;
	printf("\nnhap vao gia tri x can tim: ");
	scanf("%d",&v);
	printf("\nTim thay so %d tai chi so %d!" ,v, search(a,n,v));
	return 0;
}


