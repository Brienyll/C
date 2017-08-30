#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double areaFromSide(double s);
int die(const char * msg);


int main() {
	double side;
	printf("side: ");
	if (scanf_s("%lf", &side) != 1) die("input failure");
	double area;
	area = areaFromSide(side);
	printf("The area is %f\n", area);
}

double areaFromSide(double s) {
	return sqrt(3) / 4 * s * s;
}

int die(const char * msg) {
	printf("Fatal error: %s\n", msg);
	exit(EXIT_FAILURE);
}
