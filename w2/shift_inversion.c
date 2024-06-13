#include<stdio.h>

int main(){
    char letter;
    int shift;
    char inverse;

    printf("Please enter a character: ");
    scanf(" %c", &letter);
    printf("Would you like to invert the case? y or n: ");
    scanf(" %c", &inverse);
    printf("By how much would you like to shift the character? ");
    scanf(" %d", &shift);

    if (inverse == 'n'){
        if (letter >=65 && letter <=90 )
        {
            printf("The character is %c!\n", (letter-65+shift)%26 + 65);
        }
        
        if (letter >=97 && letter <=122 )
        {
            printf("The character is %c!\n", (letter-97+shift)%26 + 97);
        }
    }
    else{
        if (letter >=65 && letter <=90 )
        {
            printf("The character is %c!\n", (letter-65+shift)%26 + 65+32);
        }
        
        if (letter >=97 && letter <=122 )
        {
            printf("The character is %c!\n", (letter-97+shift)%26 + 97-32);
        }
    }
    
    return 0;
}