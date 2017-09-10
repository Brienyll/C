// CS 539, HW 1E, Francell Angeles

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

unsigned chickens(unsigned heads, unsigned legs);
unsigned goats(unsigned heads, unsigned legs);
int die(const char * msg);

int main() {
	unsigned heads, legs, chickenT, goatsT;
	printf("heads legs: ");
	scanf("%u%u", &heads, &legs);
	if ((legs%2 == 1) || (heads * 2 > legs ) || (heads * 4 < legs )) die("anotomically impossible");
	chickenT = chickens(heads, legs);
	goatsT = goats( heads, legs);
	printf("That's %u chickens and %u goats\n", chickenT, goatsT);
}

unsigned chickens(unsigned heads, unsigned legs) {
	unsigned chickens = (heads * 2) - (legs / 2);
	unsigned goats = (legs / 2) - heads;
	heads = chickens + goats;
	legs = (chickens * 2) + (goats * 2);
	return chickens;
}

unsigned goats(unsigned heads, unsigned legs) {
  unsigned chickens = (heads * 2) - (legs / 2);
	unsigned goats = (legs / 2) - heads;
	heads = chickens + goats;
	legs = (chickens * 2) + (goats * 2);
	return goats;
}

int die(const char * msg) {
	printf("Fatal error: %s\n", msg);
	exit(EXIT_FAILURE);
}
