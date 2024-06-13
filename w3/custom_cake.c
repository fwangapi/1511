#include <stdio.h>

int main(){
    int layer;
    char pattern;
    printf("How many layers: ");
    scanf(" %d", &layer);
    printf("Please enter layers: ");
    
    for (int i = 0; i < layer; i++)
    {
        scanf(" %c",&pattern);
        for (int j = 0; j < layer; j++){
            printf("%c", pattern);
            
        }
        printf("\n");        
    }
    
 

    return 0;
}