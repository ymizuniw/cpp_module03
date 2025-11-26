#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main(void)
{
    uint32_t n1;
    uint32_t n2;
    uint64_t ui;

    n1 =n2 = UINT_MAX;
    ui = n1*(n2);
    printf("multi : %llu\n", ui);
    ui = n1 + n2;
    printf("sum : %llu\n", ui);
    return (0);
}
