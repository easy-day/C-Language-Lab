//
// Created by 박지훈 on 2021/08/09.
//
#include <stdio.h>
#include <stdint.h>
int main()
{
    int8_t num1 = INT8_MIN;
    uint16_t num2 = UINT16_MAX;
    uint32_t num3 = 0;
    int64_t num4 = INT64_MAX;

    printf("%d %u %u %lld\n", num1, num2, num3, num4);

    return 0;
}
