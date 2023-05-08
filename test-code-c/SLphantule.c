// ham tra ve so luong phan tu le trong mang
#include<stdio.h>

int countOddNumberInArray(int arr[], int n) {
	int i, count=0;
	for (i=0; i<n; i++){
		if(arr[i]%2!=0){
			count ++;
		}
	}
	return count;
}

int main() {
	int n,i;
	int arr[1000];
		printf("Nhap n phan tu: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
			printf("Nhap n phan tu thu %d = ",i+1);
		scanf("%d", &arr[i]);
	}
	printf("%d", countOddNumberInArray(arr, n));
	return 0;
}
