//CS 539, Week 3 lab, Francell Angeles

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void f(double *root2, double *root3, double *root4, double x);

int main() {
	double root2, root3, root4, x;
	printf("Input your favorite number: ");
	scanf_s("%lf", &x);
	f(&root2, &root3, &root4, x);
	printf("The square root of your favorite number is: %lf \n", root2);
	printf("The cube root of your favorite number is: %lf\n", root3);
	printf("The fourth root of your favorite number is: %lf\n", root4);
}

void f(double *root2, double *root3, double *root4, double x) {
	*root2 = sqrt(x);
	*root3 = cbrt(x);
	*root4 = sqrt(sqrt(x));
}
