// debug_factorial.c
//
// Write a C program that takes a positive integer as input, calculates the
// factorial of that number and prints it out.
//
// This program was written by FEIFEI WANG (z5549054)
// on INSERT-DATE-HERE

#include <stdio.h>

int main (void) {
    int num = 0;
    int factorial = 1;

    printf("Enter a number: ");
    scanf(" %d", &num);

    if (num <= 1) {
        printf("The factorial of %d is 1\n", num);
    } else{

        int counter = 1;

        while (counter < num){
            counter++;
            factorial *= counter;
            
        }
        printf("The factorial of %d is %d\n", counter, factorial);
    }

    return 0;
}
