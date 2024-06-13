#include <stdio.h>
#include <stdlib.h>

int main(){
    char start, target;

    printf("Please enter starting letter: ");
    scanf(" %c", &start);
    printf("Please enter target letter: ");
    scanf(" %c", &target);
   
    int diff = abs(target - start);
    char first_letter = 'a';
    char last_letter = 'z';
    
    if (start < 97) // handle uppercase      
    {
         first_letter -= 32;
         last_letter -= 32;
    }
    
        if (diff <= 13 && target >= start)  // print alphabet order      
        {   
            for (char c = start; c <= target; c++)
            {
                 printf("%c", c);
            }
        }
        else if ( diff > 13 && target >= start){ //b->w
            for (char c = start; c >= first_letter; c--){
                    printf("%c", c);
                }
            for (char c= last_letter; c>= target; c--){
                    printf("%c", c);
                }
            }
        else if (diff < 13 && target < start)  // c->a
            {
            for (char c = start; c >= target; c--){
                    printf("%c",c);
                }
            }
        else {                                      //w->b
            for (char c = start; c <= last_letter; c++)
            {
                printf("%c", c);
            }
            for (char c = first_letter; c <= target; c++){
                printf("%c",c);
            }
            
            }
        printf("\n");
        return 0;
        }
        