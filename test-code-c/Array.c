//mang xuat nhap va tim vi tri
#include <stdio.h>
const int MAX = 100;
void Nhap(int a[], int n){
	int i;
	for( i=0; i<n ; i++){
		printf("\nphan tu mang thu a[%d] = ",i);
		scanf("%d",&a[i]);
	}	
}
void In(int a[], int n){
	int i;
	for(i=0;i<n;i++)
	printf("\nphan tu thu a[%d] = %d",i,a[i]);
}
int Tim(int a[], int n, int index){
	int i;
	for(i=0; i<n; i++){
		if(a[i] == index){
			return i;
		}		
	}
	return -1;	
}
int Dem(int a[], int n, int x){
	int i,c=0;
	for (i=0; i<n; i++){
		if( a[i] == x){
		c++;
	}	
	}
	return c;
}

int main(){
	int n, a[MAX],index;
	printf("\nNhap vao so luong phan tu n = ");
	do{
		scanf("%d",&n);
		if( n<=0 || n>MAX){
			printf("\nNhap sai! Nhap lai so luong phan tu mang! \n");
		}	
	}while (n<=0 || n>MAX);
	printf("\n------------------*--NHAP MANG--*------------------\n");
	Nhap(a,n);
	printf("\n------------------*--IN MANG--*------------------\n");
	In(a,n);
	printf("\n------------------*--TIM MANG--*------------------\n");
	printf("\n nhap vao gia tri x can tim \n");
	scanf("%d",&index);
	printf("\nTim thay so %d tai chi so %d!" ,index, Tim(a,n,index));
	int x;
	printf("\n------------------*--NHAP SO CAN DEM X = ");
	scanf("%d",&x);
	printf("\nSo lan xuat hien cua %d la %d lan\n",x,Dem(a,n,x));
	
	return 0;
}
