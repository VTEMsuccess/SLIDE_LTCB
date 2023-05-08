/* co mot con oc sen muon bo len dinh cua mot cay cao V (m) tinh tu mat dat. Trong mot ngay no co the bo duoc A (m) len tren.
	tuy nhien moi dem khi ngu , no lai bi tuot xuong B (m). nhiem vu cua ban la viet chuong trinh tinh xem so ngay con oc bo len dinh cay

Dieu Kien  (1 <= B < A <= 10^9, 1 <= V <= 10^9)

*/


#include <stdio.h>
int main(){
	int A,B,V;
	printf("nhap vao ba so A B V \n");
	scanf("%d %d %d" ,&A,&B,&V);
	if(A==V){
		printf("1 ngay");
	}
	else{
		if((V-B)%(A-B)==0)
		printf("so ngay de con oc sen bo ken dinh la %d ",(V-B)/(A-B));
		else 
		printf("so ngay de con oc sen bo len dinh la %d",(V-B)/(A-B)+1);
		}
		return 0;
}
	

	
