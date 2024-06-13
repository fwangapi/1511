#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter size: ");
    scanf(" %d", &size);
    //printf("\n");
    int row = size;
    int col = size;
    int k = (size - 1)%4 == 0? 0:2;
     

    for (int i = 0; i < row; i++)
    {
        
        for (int j = 0; j < col; j++)
        {
           
            if ((((i <= col/2 && j <= row/2 )|| (i >= col/2 && j >= row/2 )) ))
            {
            
            if(i==j || abs(j-i)%4==0)
            {
                printf("*");
            }
             else{
                printf("-");
            }
            }

            if ((i > col/2 && j < row/2 )||( i < col/2 && j > row/2 ))
            {
             
             if(i+j==size-1 || (i+j+k)%4==0  )
            {
                printf("*");
            }
             else{
                printf("-");
            }
            }
             
            
        }
        //k--;
         
        printf("\n");
        
    }
    

    // int i = 0; // row index
    // while (i < row/2) {
    //     int j = 0; // column index
    //     while (j < col/2) {
    //         // Calculate positions based on the row pattern
    //         if ((i % 4 == 0 && j % 4 == 0 )||  
    //             (i % 4 == 1 && j % 4 == 1 )||  
    //             (i % 4 == 2 && j % 4 == 2 ) ||
    //             (i % 4 == 3 && j % 4 == 3 ))
    //             {
    //             printf("*");
    //         } else {
    //             printf("-");
    //         }
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    // }

    return 0;
}


 /*
 
 *---*-----*---*
-*---*---*---*-
--*---*-*---*--
---*---*---*---
*---*-----*---*
-*---*---*---*-
--*---*-*---*--
---*---*---*---
--*---*-*---*--
-*---*---*---*-
*---*-----*---*
---*---*---*---
--*---*-*---*--
-*---*---*---*-
*---*-----*---*
 
 */


 