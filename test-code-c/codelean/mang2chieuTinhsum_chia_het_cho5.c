//mang tong 2 chieu tinh tong cac so a[i][j] chia het cho 5
//trong do n la so dong (row) con m la so cot (column)
#include<stdio.h>

int main() {
    int a[10][20], i,j,n,m,sum=0;
    printf("nhap vao n va m so luong phan tu cua mang 2 chieu \n");
    scanf("%d%d",&n,&m);

    for(i=0; i<n; i++){
        for( j=0; j<m; j++){
        //	printf("nhap vao phan tu thu: %d\n",i+1);
            scanf("%d",&a[i][j]);
        }
    }

     for(i=0; i<n; i++){
        for( j=0; j<m; j++){
            if(a[i][j] % 5 == 0){
                sum = sum+ a[i][j];
            }
        }
    }
    printf("tong chia het cho 5 = %d",sum);
    
    return 0;
}

