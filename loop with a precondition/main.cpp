#include <stdio.h> 
#include <inttypes.h>
#include "main.h"
int main()
{
    double x;
    printf("Enter x:");
    scanf("%lf", &x);
    int64_t n64;
    printf("Enter N:");
    scanf("%" SCNd64, &n64);
    double x1 = 1, n1 = 1, rez = 1.0;
    int64_t k64 = 0, i64 = 2;
    CycleWithPrecondition(i64, n64, k64, n1, x1, x, rez);
    return 0;
}