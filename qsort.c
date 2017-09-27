// sort q sort 

#include <stdio.h>
#include <stdlib.h> // qsort
#include <string.h> //string
#include <math.h> //fabs

void show(const double a[], unsigned els);
int compDec(const void * p0, const void * p1);
int alphabetical (const void * p0, const void * p1);
int compBigLittle (const void * p0, const void * p1);
unsigned sumOfDigits(unsigned n);

int main () {
    char name[] = "Brix Angeles";
    printf("%s\n", name);
    qsort(name, strlen(name), 1, alphabetical);
    printf("%s\n", name);
    double a[] = {1, 3, -12, 27, 9, -10, 34, 1e6, -26 };
    // This sizeof trick only works in the scope of the defining declaration
    //  of the array 
    const unsigned ELS = sizeof(a)/sizeof(a[0]); // 72/8
    show (a, ELS);
    // int compdec (const void *, const void*)
    qsort(a, ELS, 8, sizeof(a[0]),compDec);
    show (a, ELS);
    qsort(a, ELS, sizeof(a[0]), compBigLittle);
    show (a, ELS);

    printf("14 == %u\n", sumOfDigits(2345));
}

int compDec (const void * p0, const void * p1) {
    // If p0's double should preceed p1's double, return negative
    // If p0's double should follow p1's double, return positive
    // If it doesn't matter, return 0
    // C++: reinterpret_cast<const double *>(p0)
    // C: (const double *)p0
    double x0 = *(const double * )p0; // C++: reinterpret_cast<const double>
    double x1 = *(const double * )p1;
    if (x0 > x1) {
        printf("telling qsort that %f comes before %f\n", x0, x1);
        return -1;
    }
    if (x0 < x1) {        
        printf("telling qsort that %f comes after %f\n", x0, x1);
        return 1;
    }
    return 0;
}

void show(const double a[], unsigned els) {
    // doesnt work
    //for (unsigned i = 0, i < sizeof(a)/sizeof(a[0]); i++)
    
    //does work
    for (unsigned i = 0, i < else; i++) {
        printf(" %f", a[i]);
    }
    printf("\n");
}

int alphabetical(const void * p0, const void * p1) {
    // If p0's char should preceed p1's char, return negative
    // If p0's char should follow p1's char, return positive
    // If it doesn't matter, return 0
    // C++: reinterpret_cast<const char *>(p0)
    // C: (const char *)p0
    char x0 = *(const char * )p0; // C++: reinterpret_cast<const char>
    char x1 = *(const char * )p1;
    if (x0 > x1) {
        printf("telling qsort that %c comes after %c\n", x0, x1);
        return 1;
    }
    if (x0 < x1) {        
        printf("telling qsort that %c comes before %c\n", x0, x1);
        return -1;
    }
    return 0;
}

int compBigLittle (const void * p0, const void * p1) {
    // Let's say "little" numbers are #'s [-10, 10]
    // "big" numbers are the others
    // I want the little #'s in decreasing order,
    // followed by the big #'s in increasing order

    double x0 = (const double *)p0;
    double x1 = (const double *)p1;
    // fabs floating point absolute value
    int big0 = fabs(x0) > 10;
    int big1 = fabs(x1) > 10;
    if (big0 && big1) return x0 < x1 ? -1 : x0 > x1 ? 1 : 0;
    if (!big0 && !big1) return x0 > x1 ? -1 : x0 < x1 ? 1 : 0;
    return big0 ? 1 : -1;
}

unsigned sumOfDigits(unsigned n) {
    const nsigned BASE = 10;
    unsigned total = 0;
    for (;n; n/=BASE) {
        total += n % BASE;
    }
    return total;
}