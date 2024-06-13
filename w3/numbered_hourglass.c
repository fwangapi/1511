#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){

    int n;
    printf("Please enter a size: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i>0 && j>0 && i<n-1 && j<n-1 && abs(j-n/2) <= abs(n/2-i))  
            {
                if (i < n/2){
                printf("%2d",i);
                }
                else{
                    printf("%2d",n-1-i);
                }
            } else{
                printf("%2c", '-');
            }
            
        }
        printf("\n");
    }
    

    return 0;
}