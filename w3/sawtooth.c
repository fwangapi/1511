#include <stdio.h>

int main(){

    int height = 8;
    int length = 45;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if ((i % height == j % height) || j % height ==0)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        //printf("\n");
        
    }
    


    return 0;
}