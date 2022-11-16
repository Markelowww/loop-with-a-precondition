#include <inttypes.h>
#include <stdio.h> 
void CycleWithPrecondition(int64_t& i64, const int64_t& n64, int64_t& k64, double& n1, double& x1, double x, double& rez)
{
    while (i64 <= n64)
    {
        k64++;
        n1 = (float)k64 * n1;
        x1 = -1 * x * x * x1;
        rez = rez + x1 / n1;
        ++i64;
    }
    printf("Result:%lf ", rez);
}