// CS 539, HW 1A, Francell Angeles

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double hypotenuse (double side0, double side1);
int die(const char * msg);

int main() {
	double side0, side1;
	printf("leg: ");
	scanf("%lf%lf", &side0, &side1);
	if (side0 < 0 || side1 < 0) die("input failure");
	double pytha;
	pytha = hypotenuse(side0, side1);
	printf("The hypotenuse is %f\n", pytha);
}

double hypotenuse(double side0, double side1) {
	return sqrt(side0 * side0 + side1 *side1);
}

int die(const char * msg) {
	printf("Fatal error: %s\n", msg);
	exit(EXIT_FAILURE);
}
