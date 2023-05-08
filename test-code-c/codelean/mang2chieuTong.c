//tinh tong mang 2 chieu trong a[i][j];
// trong do n la dong (row)
// con m la cot (column)

#include<stdio.h>

int main() {
    int a[10][20],i,j,n,m;
    
    printf("nhap vao n va m so luong phan tu cua mang 2 chieu ");
    scanf("%d%d",&n,&m);
    
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
        	printf("nhap vao phan tu thu: %d\n",i+1);
             scanf("%d",&a[i][j]);

        }
       
    }
    int sum=0;
    for (i=0; i<n; i++){
        for(j=0; j<m; j++){
            sum = sum + a[i][j];
        }
    }
    printf(" tong = %d",sum);
    return 0;
}

