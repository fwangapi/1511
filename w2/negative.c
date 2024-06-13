//Week 2 Problem Set "Don't be so negative"
//Author: Feifei Wang, 
//Student ID: z5549054
//Date: 4 June 2024


#include <stdio.h>

int main(void){

    //int num;
    int input = 0;

   // while (1) {
    
    //printf("Please enter an integer: \n");
    scanf("%d" ,&input);
        
    
    if ( input == 0){
        printf("You have entered zero.\n");
    }
    else if (input > 0){
        printf("You have entered a positive number.\n");
    }
    else {
        printf("Don\'t be so negative!\n");
    }
 //   }
    return 0;
}