// CS 539, HW 1C, Francell Angeles

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double areaTriangle(double a, double b, double c);
int die(const char * msg);

int main() {
	double a, b, c, area;
	printf("Input 3 sides of the triangle: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	if (c > b + a || b > a + c || a > b + c ) die("input failure");
	area = areaTriangle(a, b, c);
	printf("The area of the triangle is: %.01lf", area);
}

double areaTriangle(double a, double b, double c) {
	return (a+b+c)/ 2;
}

int die(const char * msg) {
	printf("Fatal error: %s\n", msg);
	exit(EXIT_FAILURE);
}
