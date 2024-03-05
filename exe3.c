//
//  main.c
//  exe3
//
//  Created by mahdi on 5/3/2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char name[100]; // Array of chars (string) to hold the name
    int age;

    printf("Enter your name: ");
    fgets(name, 100, stdin); // Read string input, including spaces
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello, %s! You are %d years old.\n", name, age);

    return 0;
}
