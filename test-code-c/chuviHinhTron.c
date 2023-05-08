//tinh chu vi hinh tron
#include <stdio.h>

double circumference(double r) {
	return 2*r*3.14;
}

int main() {
	double r;
	printf("nhap vao ban kinh hinh tron");
	scanf("%lf", &r);
	printf("chu vi = %f", circumference(r));
	return 0;
}
