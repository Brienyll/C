Francell bBrix Angeles

#include "stdio.h"

void binaryAdd(int sum[], int *cBit, const int bin1[], const int bin2[]);
void decbinary(int bin[], int num);
void show (int show[], int els);

int main() {
  int sum[8] = { 0, 0, 0, 0, 0, 0, 0, 0}, bin1[8], bin2[8], c = 0, a,b;
  printf("Num 1: ");
  scanf("%i", &a);
  printf("Num 2: ");
  scanf("%i", &b);
  decbinary(bin1, a);
  show(bin1, 8);
  decbinary(bin2, b);
  show(bin2, 8);
  binaryAdd(sum, &c, bin1, bin2);
  printf("%s", c == 1 ? "1" : "");
  show(sum, 8);
  scanf("%i", &bin1);
  return 0;
}

void decbinary(int bin[], int num) {
  for (int x =0; x <8; x++) {
    bin[7-x] = num % 2;
    num /=2;
  }
}


void binaryAdd(int sum[], int *cBit, const int bin1[], const int bin2[]) {
  for (int i=7; i >= 0; i--) {
    if(bin1[i] == bin2[i]) {
      if (bin[i] == 1) {
        if (*cbit == 1) {
          sum[i] =1;
        }
        else {
          *cbit = 1;
          sum[i] = 0;
        }
      }
      else{
        if (*cbit == 1) {
          sum[i] =1;
          *cbit =0;
        }
        else {
          sum [i] =0;
        }
      }
    else {
      if (*cbit == 1) {
        sum[i] =0;
      }
      else {
        sum[i] = 1;
        *cbit = 0;
      }
    }
  }
}


void show (int show[], int els) {
  for (int i = 0; i < els; i++) {
    printf("%i", show[i]);
  printf("\n")
  }
}
