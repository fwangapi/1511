//z5549054

#include<stdio.h>

int main(){

    int year = 0;
    printf("Enter year: ");
    scanf("%d" , &year);
    if (year % 400 == 0 )   
    {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 4 == 0 && year % 100 != 0){
        printf("%d is a leap year.\n", year);
    } else{
        printf("%d is not a leap year.\n", year);
    }
    

    return 0;
}