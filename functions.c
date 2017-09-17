//CS 539, HW 3, Francell Angeles 
#include <stdio.h>
#include <math.h>
#include "stdlib.h"

char grade (double score); 
void sort( double *a, double *b, double *c );
int prime( unsigned n);
unsigned howManyPrimes( unsigned lo, unsigned hi);
int relPrime( unsigned a,unsigned b);
int leap( unsigned year);
void stats( double * min,double * average, double * max);
int die(const char * msg);

int main() {
    double score;
    char gradeF;
    printf("Enter Grade: ");
    scanf("%lf", &score);
    gradeF = grade(score);
}

char grade (double score) {
    if ((score < 0) || (score > 100)) die("wrong grade");
}

int die(const char * msg) {
	printf("Fatal error: %s\n", msg);
	exit(EXIT_FAILURE);
}