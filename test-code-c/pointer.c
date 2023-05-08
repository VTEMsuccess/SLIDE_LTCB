//con tro pointer

#include <stdio.h>
void fun(int* p){
	*p = 30;
}
int main(){
	int n = 20;
	fun(&n);
	printf("%d",n);
	return 0;
}
