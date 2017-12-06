#include<stdio.h>
#include<stdlib.h>
#define loop(a,b) for(int a = 0; a < b; a++)
// return max of a and b
int max(int a, int b) {
    if(a>b) return a;
    return b;
}
// return min of a and b
int min(int a, int b) {
    if(a<b) return a;
    return b;
}
// Explanation is in main function
double* getArrayA(unsigned int els, double value) {
    double *arr;
    arr = (double *) malloc((sizeof(double)) * els);
    loop(i,els) {
        arr[i] = value;
    }
    return arr;
}
// explanation is in main
double* getArrayB( double first, unsigned int els, double last) {
    double *arr;
    arr = (double *) malloc(els * (sizeof(double)) );
   
    double a = first;       // First term in AP
    double d = (last - first) / (els - 1); // Common Difference in AP
   
    loop(i,els) {
        arr[i] = a + (i * d); // tn = a+(n)d,   n >= 0    Nth term for AP
    }
    return arr;
}
// given start and ending characters return a string of continuous characters
// if c1 = 'A' c2 = 'F'    return ABCEEF\0    NULL CHARACTER AT THE END
char* getArrayC( char c1, char c2) {
    char *arr;
    int els = max(c1, c2) - min(c1, c2) + 2; // finding length of the string = bigger character - smaller character (ASCII values)
    arr = (char *) malloc((els) * (sizeof(char)) );

    int updateFactor = (c1>c2?-1:1); // determining whether we need to go up(+1) or down(-1) from c1 to c2
    loop(i,els-1) {
        arr[i] = c1;
        c1 = c1 + updateFactor;
    }
    arr[els-1] = '\0';
    return arr;
}
// given arr[1,2,3] return arr1[1,1,2,2,3,3]
int* getArrayD( int *arr, unsigned int els) {
    int *arr2;
    els = els + els; // size of new array = 2 * old array size
    arr2 = (int *) malloc((els) * (sizeof(int)) );
    for( int i = 0, j = 0; i < els-1; i+=2, j++ ){
        arr2[i] = arr[j]; // adding ith element to the arr2 for two times
        arr2[i+1] = arr[j];
    }
    return arr2;
}
/*
int* getArrayE( double **neg, unsigned int *negEls, double ** pos, unsigned int *posEls, const double ar[], unsigned els) {
    int *arr2;
    els = els + els;
    arr2 = (int *) malloc((els) * (sizeof(int)) );
    for( int i = 0, j = 0; i < els-1; i+=2, j++ ){
        arr2[i] = arr[j];
        arr2[i+1] = arr[j];
    }
    return arr2;
}
*/

/* It returns 1- if n is either multiple of 2 or 3 but not both
if n = 3, returns 1
if n = 2, returns 1
if n = 6, returns
*/
int interesting( unsigned int n) {
    return (n%2 > 0) != (n%3 > 0);
}

/*
This function returns an array of all interesting elements
*/
int* getArrayE1(unsigned int* retEls, const unsigned ar[], int els) {
    int interestingElements = 0;
    loop(i, els) {
        interestingElements += interesting(ar[i]); // counting the number of interesting elements
    }
   
    int *arr;
    arr = (int *) malloc((interestingElements) * (sizeof(int)) ); // creating the array
    int j = 0;
    loop(i,els){
        if(interesting(ar[i])) { // if ar[i] is interesting
            arr[j] = ar[i];  // adding it to the arr
            j++;
        }
    }
    *retEls = interestingElements; // assigning retEls with the number of interesting elements
    return arr;
}
int main(int argc, char ** argv) {
    // For Case 1
    // We should return an array of 7 elements in which, each value consists of value 2.2
    // Try this, getArrayA(10, 1.0) -> 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0 1.0
    double *arrayA;
    double value = 2.225d;
    arrayA = getArrayA(7, 2.2);
    printf("\nCase 1 :");
    loop(i,7) {
        printf(" %lf   ", arrayA[i]);
    }
    free(arrayA);
    arrayA = NULL;
   
    // For Case 2
    // We should return an array of 4 elements in which, each value i is the ith element of an AP
    // Try this, getArrayB(2, 10, 20) -> 2 4 6 8 10 12 14 16 18 20
    double *arrayB;
    arrayB = getArrayB(4.0, 5, 1.0);
    printf("\nCase 2 :");
    loop(i,5) {
        printf(" %lf   ", arrayB[i]);
    }
    free(arrayB);
    arrayB = NULL;
   
    // For Case 3
    char *arrayC;
    arrayC = getArrayC('C', 'G');
    printf("\nCase 3 :");
    printf(" %s", arrayC);
   
    free(arrayC);
    arrayC = NULL;
    // For Case 4
    int *arrayD;
    int arr[] = {3, 0, 2, 2, 1};
    arrayD = getArrayD(arr, 5);
    printf("\nCase 4 :");
    loop(i , 10) {
        printf(" %d   ", arrayD[i]);
    }
   
    free(arrayD);
    arrayD = NULL;
   
    /* For Case 5
  
    int *arrayE;
    int arr[] = {1.1, -2.2, 0, 3.3, -4.4, 0, 5.5};
    int **neg; // a pointer variable
    int *pos; // a pointer variable
    arrayE = getArrayE(neg, *neg, &pos, pos, arr, 7);
    printf("\nCase 5 :");
    loop(i , 10) {
        printf(" %d   ", arrayD[i]);
    }
   
    free(arrayE);
    arrayE = NULL;*/
   
    // For Case 6
    int *arrayE1;
    const int ar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int retEls;
    arrayE1 = getArrayE1(&retEls, ar, 12 );
    printf("\nCase 6 :");
    loop(i , retEls) {
        printf(" %d   ", arrayE1[i]);
    }
   
    free(arrayE1);
    arrayE1 = NULL;
}
