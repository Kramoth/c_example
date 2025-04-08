#include <stdio.h>

int main()
{
    int var = 2;
    printf("Initial value: var = %d\n", var);

    var++;
    printf("After var++: var = %d\n", var);

    var--;
    printf("After var--: var = %d\n", var);

    var += 4;
    printf("After var += 4: var = %d\n", var);

    var -= 7;
    printf("After var -= 7: var = %d\n", var);

    var *= 5;
    printf("After var *= 5: var = %d\n", var);

    var /= 5;
    printf("After var /= 5: var = %d\n", var);

    var %= 2;
    printf("After var %%= 2: var = %d\n", var);

}
