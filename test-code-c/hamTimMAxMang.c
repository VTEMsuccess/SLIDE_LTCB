//nhap 2 mang tim max moi mang
#include <stdio.h>

int maxOfArray(int arr[], int n) {
	int i, maxvalue=arr[0];
	for(i=0; i<n; i++){
		if(arr[i] > maxvalue){
			maxvalue = arr[i];
		}
	}
	return maxvalue;
}

int main() {
	int i,n1, n2;
	int arr1[1000], arr2[1000];
	printf("Nhap n phan tu: ");
	scanf("%d", &n1);
	for ( i = 0; i < n1; i++) {
		printf("Phan tu thu %d = ",i+1);
		scanf("%d", &arr1[i]);
	}
	printf("Nhap n phan tu: ");
	scanf("%d", &n2);
	for ( i = 0; i < n2; i++) {
		printf("Phan tu thu %d = ",i+1);
		scanf("%d", &arr2[i]);
	}

	printf(" max cua mang n1 va n2 la %d %d", maxOfArray(arr1, n1), maxOfArray(arr2, n2));

	return 0;
}
