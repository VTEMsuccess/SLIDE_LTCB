//sap xep mang tang dan co ban

#include<stdio.h>

int main() {
	int j,i,n,a[100];
	printf("nhap vao n so luong phan tu cua mang ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("nhap vao phan tu thu: %d\n",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
			for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i =0 ; i<n; i++){
		//mang sau khi sap xep
		printf("%d ",a[i]);
	}
	
	return 0;
}

