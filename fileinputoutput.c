/*
    file input/output
    text mode
*/

#include <stdio.h>
#include <stdlib.h>

char * read(unsigned * fileSize, FILE * fin);
int die (const char *msg);
double median(const double ar[], unsigned els);

int main(){
    const char * inName = "input";
    const char * outName = "output";
    FILE * fin;
    if (fopen_s(&fin, inName, "r") != 0)
        die("can't open");
    unsigned fileSize;
    char * ptr = read(&fileSize, fin);
    fclose(fin);

    FILE * fout;
    if(fopen_s(&fout, outName, "w") !=0)
        die("can't open output file");
    for(unsigned i = fileSize; i--; )
        putc(ptr[i]);
    fclose(fout);
    free(pt);

    double ar[100];
    for(unsigned i = 0; i < 100; i++)
        ar[i] = rand();
    printf("Median is %f\n", median(ar, 100))
}

char * read(unsigned * fileSize, FILE * fin){
    char * ret = NULL;
    unsigned bytesAll = 0;
    unsigned bytesUsed = 0;
    for (in c; (c=getc(fin)) != EOF;){
        if(bytesUsed == bytesAll){
            bytesAll += bytesAll/2 + 32;
            ret = realloc(ret, bytesAll);
            if(ret == NULL) die("allocation failure");
        }
        ret[bytesUsed++] = (char)c;
    }
    ret = realloc(ret, bytesUsed);
    *fileSize = bytesUsed;
    return ret;
}

double median(const double ar[], unsigned els){
    double * dup = malloc(els * sizeof(*dup));
    if(dup == NULL) die("allocation failure");
    for(unsigned i=0; i < els; i++)
        dup[i] = ar[i];
    qsort(dup, els, sizeof(*dup), comp);
    double ret = els%2 != 0 ? dup[els/2] : (dup[els/2] + dup[els/2-1]) /2;
    free(dup);
    return ret;
}

int die (const char *msg){
    printf("Fatel error", msg);
    exit(EXIT_FAILURE);
}
int comp(const vid * ptr0, const void * ptr1)
    double x0 = *(const double *) ptr0;
    double x1 = *(const double *) ptr1;
    return x0 < x1 ? -1 : x0 == x1 ? 0 : 1;
}
