/*
Takes 3 variables (a, b, c) as input.
Checks:
If all 3 are equal
If a & b are equal
If b & c are equal
If a & c are equal
Finds which is the biggest number among them.
*/

#include <stdio.h>

int main() {
    int a, b, c;
    
    // Input values
    printf("Enter the number a: ");
    scanf("%d", &a);
     printf("Enter the number b: ");
    scanf("%d", &b);
     printf("Enter the number c: ");
    scanf("%d", &c);

    // Check equality
    if (a == b && b == c) {
        printf("All three are equal.\n");
    } else {
        if (a == b) printf("a and b are equal.\n");
        if (b == c) printf("b and c are equal.\n");
        if (a == c) printf("a and c are equal.\n");
    }

    // Find biggest
    if (a >= b && a >= c) {
        printf("a is the biggest: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("b is the biggest: %d\n", b);
    } else {
        printf("c is the biggest: %d\n", c);
    }

    return 0;
}
