#include <stdio.h>
#include <stdlib.h>

void show(const double a[], unsigned els);
void f(double * min, double * avPos, const double a[], unsigned els);

int main() {
  double a[] = {0, 1, 2, -3, 4, 5};
  show(a, 6);
  double mi, av;
  f(&mi, &av, a, 6);
  printf("min is %f, ave is %f\n", mi, av);
}
void show(const double a[], unsigned els){
    for (unsigned i = 0; i < els; i++) {
      printf("%f%s", a[i], i != els -1 ? " , " : " \n");
    }
}

void f(double * min, double * avPos, const double a[], unsigned els){
  *min = a[0];
  unsigned poss = 0;
  *avPos = 0;
  for(unsigned i = 0; i < els; i++){
    if(*min > a[i]){
      *min = a[i];
    if(a[i] > 0){
      poss++;
      *avPos += a[i];
      }
    }
    *avPos /= poss;
    }
  }
