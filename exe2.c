//
//  main.c
//  exe2
//
//  Created by mahdi on 5/3/2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int integerVar = 10;
    float floatVar = 3.14;
    char charVar = 'A';
    double doubleVar = 9.82;
    _Bool boolVar = 0; // 0 for false, non-zero for true

    printf("Integer variable: %d\n", integerVar);
    printf("Float variable: %.2f\n", floatVar);
    printf("Char variable: %c\n", charVar);
    printf("Double variable: %.2f\n", doubleVar);
    printf("Bool variable: %d\n", boolVar); // Printed as 0 (false) or 1 (true)

        return 0;
}
