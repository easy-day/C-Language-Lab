//
// Created by 박지훈 on 2021/08/09.
//
#include <stdio.h>
#include <limits.h>
int main()
{
    char  num1 = CHAR_MIN;
    unsigned short num2 = 0;
    int num3 = INT_MIN;
    unsigned long num4 = 0;
    long long num5 = LLONG_MIN;

    printf("%d %u %d %lu %lld\n", num1, num2, num3, num4, num5);

    return 0;
}
