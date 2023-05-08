#include<stdio.h> 
#include<math.h>
int main(){
	int M1,M2,M3;
	int avg;
	printf("nhap vao diem 3 mon hoc \n");
	printf("\nDiem M1 ");
	scanf("%d",&M1);
	printf("\nDiem M2 ");
	scanf("%d",&M2);
	printf("\nDiem M3 ");
	scanf("%d",&M3);
	avg = ((M1 + M2 + M3)/3);
	if(avg >= 90)
		printf("\nE+ voi avg la %d ",avg);
	

	 if(avg == 80 && avg < 90)
		printf("\nE voi avg la %d ",avg);
	
	
	
 	if(avg == 70 && avg < 80)
			printf("\nA+ voi avg la %d ",avg);
		


	if(avg == 60 && avg < 70)
		printf("\nA+ voi avg la %d ",avg);
	
	
	
	if(avg == 50 && avg < 60)
			printf("\nB+ voi avg la %d ",avg);
			
	

	if(avg <50)
			printf("\nTruot");
			
	
	return 0;
}
