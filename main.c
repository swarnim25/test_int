#include <stdio.h>
#include "math_operations.h"

int main() {
    int a = 5;
    int b = 3;
    int sum = add(a, b);
    int diff = subtract(a, b);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);

    return 0;
}
