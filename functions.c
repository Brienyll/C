//CS 539, HW 3, Francell Angeles 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

char grade (double score); 
void sort( double *a, double *b, double *c );
int prime( unsigned n);
unsigned howManyPrimes( unsigned lo, unsigned hi);
int relPrime( unsigned a,unsigned b);
int leap( unsigned year);
void stats( double * min,double * average, double * max);
int die(const char * msg);

int main() {
    double score, a, b, c;
    char gradeF;
    unsigned n, primeF;
    printf("Enter Grade: ");
    scanf("%lf", &score);
    gradeF = grade(score);
    printf("Your grade is: %c\n", gradeF);
    printf("Enter 3 number to sort: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    sort(&a, &b, &c);
    printf("%.0lf %.0lf %.0lf\n", a, b, c);
    printf("Enter a number: ");
    scanf("%lf", &n);
    primeF = prime(&n);
    printf("prime? %d \n ", primeF);
}

char grade (double score) {
    if ((score < 0) || (score > 100)) die("wrong grade");
    if (score <= 100 && score >= 85 ) return 'A';
    if (score < 85 && score >= 75 ) return 'B';
    if (score < 75 && score >= 65 ) return 'C';
    if (score < 65 && score >= 50 ) return 'D';
    if (score < 50 && score >= 0 ) return 'F';
}

void sort( double *a, double *b, double *c ) {
  double temp;
  if (*a < *b) {
    temp = *a;
    *a = *b;
    *b = temp;
  }
  
  if (*a < *c) {
    temp = *a;
    *a = *c;
    *c = temp;
  }
  
  if (*b < *c) {
    temp = *b;
    *b = *c;
    *c = temp;
  }
}

int prime( unsigned n) {
  int i, tmp = 0;
  for(i=2; i<=n/2; ++i) {
    if(n%i==0) 
      return 1;
    if (tmp==0)
      return 0;
    }
}
int die(const char * msg) {
	printf("Fatal error: %s\n", msg);
	exit(EXIT_FAILURE);
}
