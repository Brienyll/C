//cs 539, HW2, Francell Angeles

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void outputRange( unsigned lo, unsigned hi );    // [lo, hi)
unsigned addRange( unsigned lo, unsigned hi );    // [lo, hi)
unsigned factorial( unsigned n   );    // factorial(4) returns 24
unsigned fib( unsigned n );    // fibonacci function of 6   is    8 
int prime( unsigned n );    // returns 1   if   n   is 2, 3, 5, 7, ...
unsigned gcd( unsigned a, unsigned b   );    // greatest common divisor
void multiplicationTable( unsigned max );    // output multiplication table

int main () {
  outputRange (3, 7);
  addRange (3, 7);
  factorial (5);
  fib (6);
  prime (998);
  gcd (300, 110);
  multiplicationTable (12);
}

void outputRange( unsigned lo, unsigned hi ) {
  for ( ; lo < hi; lo++)
    printf("%u\n", lo);
}

unsigned addRange( unsigned lo, unsigned hi ) {
  unsigned sum;
  for (;lo < hi ; ++lo) 
    sum += lo;
  printf ("%u\n", sum - hi );
}

unsigned factorial( unsigned n   ) {
  unsigned factor = n;
  for(int i=1; i < n; i++)
    factor *= i;
  printf("Factorial of %u is %u\n", n, factor);
}

unsigned fib( unsigned n ) {
  int i, t1 = 0, t2 = 1, nextTerm;
  for (i = 1; i <= n; ++i)  {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
    printf("%d\n", t1);
}

int prime( unsigned n ) {
  int i, bin = 0;
  for(i=2; i<=n/2; ++i) {
    if(n%i==0) {
      bin=1;
      break;
    }
  }
  if (bin==0)
    printf("%d is a prime number.",n);
  else
    printf("%d is not a prime number.\n",n);
}

unsigned gcd (unsigned a, unsigned b) {
  while(a!=b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    printf("GCD = %d",a);
}

void multiplicationTable ( unsigned max) {
  for (int i = 1; i < max + 1; ++i)    
    printf ("%#3d   ", i);    
  printf ("\n");    

  for (int i = 1; i < 64; ++i)    
    printf ("-");    
  printf ("\n");    

  for (int i = 1; i < max + 1; ++i){    
    printf ("%#2d |", i);    
    for (int j = 1; j < 11; ++j)    
      printf ("%#3d   ", i * j);    
    printf ("\n");    
  } 
}
