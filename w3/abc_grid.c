#include<stdio.h>
#include<stdlib.h>


int main(){
    int row;
    int col;
    char letter;
    int x;
    int y;
    printf("How many rows: ");
    scanf(" %d", &row);
    printf("How many columns: ");
    scanf(" %d", &col);
    printf("Please choose starting letter: ");
    scanf(" %c", &letter);
    printf("Please enter starting coordinates: ");
    scanf(" %d %d", &x, &y);

    char start_letter = letter>96?'a':'A';
    char print;

    for (int i = 0; i < row; i++)
    { 
        for (int j = 0; j < col; j++){
            int distance = abs(x-i)+abs(y-j);
            int print = (letter - start_letter + distance)%26 + start_letter;
            printf("%c", print);
        }
        
        printf("\n");

        
    }
    
    return 0;
}