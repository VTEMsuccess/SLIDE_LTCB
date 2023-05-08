#include<stdio.h>
int n;
int a[100];
int Tong=0;
int main()
{	int k;
    printf("Nhap so phan tu n : ");
    scanf("%d",&n);
    for( k=0;k<n;k++)
    {
        printf("\nPhan tu thu %d = ",k+1);
        scanf("%d",&a[k]);
        
        Tong=Tong+a[k];
    }
    printf("\nTrung binh cong : %3.2f",(float)Tong/n);
    return 0;
}
