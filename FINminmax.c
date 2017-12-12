#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void minAvMax(double * min, double * av, double * max, const double ar[], unsigned els);
void describe(const int * ptr0, const int * ptr1);
void larger(double * * pm, double * pa, double * pb);

int main () {
  double ar[]= {1, 2, 1};
  double min, av, max;
  minAvax(&min, &av, &max, ar, 3);
  printf("1 1.33333 2 == %f %f %f\n", min, av, max);
  int a[] = {1, 2, 1};
  
 void minAvMax(double * min, double * av, double * max, const double ar[], unsigned els) {
  *min = *max = *av = ar[0];
   double sum = 0;
   for (unsigned i = 0; i < els; i++){
    if(*min > ar[i]){
      *min = ar[i];
    }
   if (*max < ar[i]){
    *max = ar[i];
   }
   
   sum += ar[i];
   *av = sum / els;
   }
 }
