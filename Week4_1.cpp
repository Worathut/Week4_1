#define _crt_secure_no_warnings 1
#include<stdio.h>
#include<math.h>
double a, b, c, s, area;
int main() {
	printf("Enter sides of a triangle : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		printf("Area of the triangle = %.4lf", area);
	}
	else
	{
		printf("0");
	}
	return 0;
}