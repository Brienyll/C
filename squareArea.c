#include <stdio.h>
#include <stdlib.h>

int die (const char * msg);
double areaFromSide(double side);

int main() {
  double s = 99;
  //printf("side: ");
 // if(scanf("%lf", &s) != 1) die("input failure");
  if(s <= 0 || s > 100) die("input out of range");
  printf("area= %f\n", areaFromSide(s));
}

int die(const char * msg){
  printf("Fatal Error: %s\n", msg);
  exit(EXIT_FAILURE);
}

double areaFromSide(double side){
  return 2*(1+sqrt(2))*side*side;}
