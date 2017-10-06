// preprocessor directives

/*
#define SIZE 100

preprocessor:
    removes comments
    separates the program text into tokens
    processes escape chars in string & char lits
    joins consecutive string literals:
        "pine" "apple" = > "pineapple"
        process line continuation chars
        process preprocessor directives

        object-type macros
        #define SIZE 100

        function-type macros
        #define SIZEPLUS1 SIZE+1
        #define f(a,b) ...

        macro expansion:
            identify macro name (call it M), and, if function-like,
            the parens, commas, and args.
        process the replacement list:

        conditional compilation
        #if preproc expr w preproc vars, literals, operators
        ...
        #elif preproc expr
        ...
        #elif preproc expr
        ...
        #else
        ...
        #endif

        preproc expr can include defined(SIZE)


*/

//stringify without first expanding arg
#define STR(s) #s
// expand argand stringify the result
#define XSTR(s) STR(s)
//token pasting ##
#define PASTE(x,y) x##y

#define SIZE 10
#define JUNK ] = i * i;
//#define SIZEPLUS1 SIZE
#define SIZEPLUS1 (SIZE+1)
//#define OUT(f, ex) printf((f), (ex);
#define XPASTE(x,y) PASTE(x,y);


#define SWAP(x,y) {x = x + y; \
y = x - y; \
   x = x - y;} 
#define ORDER(c) {if (arr[c-1] > arr[c]) \
SWAP(arr[c-1],arr[c]);} 

#define BLATHER1 printf("sdadafdavewcdcssdkcnkdsl" \
"adaslkdsalkdklasklas" \
"asdlkajslkdladasda';" \
"asdlaskdnlkasndklan[=0nkdas");
#define BLATHER2 printf("sdadafdavewcdcssdkcnkdsl"/* 
*/"adaslkdsalkdklasklas"/* 
*/"asdlkajslkdladasda';"/* 
*/"asdlaskdnlkasndklan[=0nkdas");


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int ma\
in () {
  BLATHER1
  BLATHER2
    int arr[SIZE];
   for (unsigned i = 0; i < SIZE; i++)
        arr[i] = rand(); 
    for (unsigned p = SIZE-1; p> 0; p--)
        for (unsigned c = 1; c <= p; c++)
        ORDER(c)
         // if (arr[c-1] > arr[c]) SWAP(arr[c-1],arr[c]);
    //SWAP (x,y)

    for (unsigned i = 0; i < SIZE; i++)
        printf(" %i", arr[i]);
    printf("\n");



}
