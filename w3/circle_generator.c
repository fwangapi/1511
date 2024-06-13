#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>


int main(){
    double n = 15;
    printf("Please enter a radius: ");
    scanf("%lf", &n);
    //center coordinates
    double x= n;
    double y = n;
    bool star = 1;

    for (int i = 0; i < 2*n+1; i++)
    {
        for (int j = 0; j < 2*n+1; j++)
        {
            if (sqrt(abs(i-x)*abs(i-x) + abs(j-y)*abs(j-y)) > n+1)
            {
                printf(".");
            }
            else if(  (int)sqrt(abs(i-x)*abs(i-x)+abs(j-y)*abs(j-y)) > n-1 && (int)sqrt(abs(i-x)*abs(i-x)+abs(j-y)*abs(j-y)) < n+1  ){
                printf("#");
            }
            else {
                if (star == true)
                {
                    printf("*");
                    
                }else{
                    printf(".");
                }
                
            }
        }
        printf("\n");
        
    }
    
    return 0;
}