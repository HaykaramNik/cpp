#include <stdio.h>
#include "solution.h"

int main()
{
    char* str = "barev";
    int t = 10;
    int* count = &t;
    size_t multiplier = 10;

    printf("patasxan %d\n", stringStat(str, multiplier, count));

    return 0;
}
