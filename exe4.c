//
//  main.c
//  exe4
//
//  Created by mahdi on 5/3/2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Quotient: %d\n", a / b);
    printf("Remainder: %d\n", a % b);

    return 0;
}
