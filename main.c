#include <stdio.h>

int main()
{
    int first = 15;
    int second = 30;
    int third = 45;

    int *ptrs[3] = {&first, &second, &third};

    printf("First value  = %d\n", *ptrs[0]);
    printf("Second value = %d\n", *ptrs[1]);
    printf("Third value  = %d\n", *ptrs[2]);

    return 0;
}
