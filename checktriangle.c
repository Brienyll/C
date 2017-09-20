#include <stdio.h>

int isTriangle(double a, double b, double c);

int main() {
    printf("Input 3 sides of triangle, many times, non-# to quit\n");
    for (double a, b, c; scanf("%lf%lf%lf", &a, &b, &c) == 3;)
        printf(isTriangle(a,b,c) ? "ok\n" : "bogus\n");
}

int isTriangle(double a, double b, double c) {
    return a <= b + c && b <= c + a && c <= a + b;
}
