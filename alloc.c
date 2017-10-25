/* void * malloc (# bytes)
   void * realloc (&ptr, #bytes)
   void * calloc (# els, #byes per el)
   void free(void *)


   for each allocation:
    check for memory allocation failure, c&d
    when we're done, free the memory (uless we c&d)
    when allocation is done in a function:
        sometimes the deallocation is done int he function
        sometimes the deallocation is done elsewehere (e.g, caller)
*/

// 

#include <stdio.h>
#include <stdlib.h>

    // awc(assume without checking) els > 0
    // identity(4) returns array containing {0, 1, 2, 3}
double * identity(unsigned els);

    // awc > 0
double * apply (const double * x, unsigned els, double f(double x));
double square (double x);
double cube(double x);

    //awc contains atleast one negative # & and at least one positive #
    void negPos(double * * neg, unsigned * negEls, double * *pos, unsigned * posEls, double * a, unsigned els);

    //allocate all the memory we can without deallocating
void pig();
void show(const double * p);
int die (const char * msg);

int main(){
    //write a main that calls other functions
    pig();
    double * p = identity(10);
    show(p, 10);
    free(p);
    double x[] = {1.1, 2, 3, 4};
    double * y = apply(x, 4, square);
    show(y, 4);
    free(y);
    y = apply(x, 4, cube);
    show(y, 4);
    free(y);
    printf("bye\n");
}
    double * identity(unsigned els)
        double * ret = malloc(else * sizeof(*ret));
        if (ret == NULL) die ("identity: allocation failure"); //if(!ret)...
        for (unsigned i = 0; i < els; i++) {
            ret[i] = i;
        return ret;    
        }

    double * apply (const double * x, unsigned els, double f(double x)) {
        // param: double f(double x) or double(*f)(double x)
        double * ret = malloc(els * sizeof(*ret));
        if(!ret) die()"apply: allocation failure");
        for (unsigned i =0; i < els; i++)
            ret[i] = f(x[i]);
        return ret;
    }

    void negPos(double * * neg, unsigned * negEls, double * *pos, unsigned * posEls, double * a, unsigned els) {
        unsigned ns = 0, ps = 0; // # of negatives, # of positives
        for (unsigned i = 0; i < els; i++) {
            if(a[i] < 0)
                ns++;
            else if (a[i] > 0)
                ps++;
        }
        double * nPtr = malloc(ns * sizeof(*nPtr));
        if(!nPtr) die ("allocation failure");
        double * pPtr = malloc(ns * sizeof(*pPtr));
        if(!pPtr) die ("allocation failure");
    }

    double square (double x) { return x * x; }
    double cube(double x) { return x*x*x; }
    
    void pig () {
        for(unsigned bytesPerChunk = 1U << 29; 
                     bytesPerChunk != 0; 
                     bytesPerChunk >>= 1) //bytesPerChunk /= 2
            {   
                while(malloc(bytesPerChunk)) { printf("?"); }
                printf("%u", bytesPerChunk);
            }
        }
    }

    void show(const double * p, unsigned else){
        for (unsigned = 0; i < els; i++) {
            printf(" %g", p[els]); //*p[else]
        printf("\n")
    }
}
    int die (const char * msg) {
        printf("Fatal error: %s\n", msg);
        exit(EXIT_FAILURE);
    }
    
