// CS 539, HW 1D, Francell Angeles

#include <stdio.h>

double mass(double joules);

int main () {
  // e exponents g general f float
  double joules;
	printf("joules of energy: ");
	scanf("%lf", &joules);
	double kilograms = mass(joules);
  printf("That's equivalent to %g\n", kilograms);
}

double mass (double joules) {
  double C = 299792458;
  return joules / (C * C)-`;
}

