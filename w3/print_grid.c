#include <stdio.h>

int main(){
    int size;

    printf("Enter size: ");
    scanf("%d", &size);

    //print grid size x size
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("(%d, %d) ", i, j);

        }
        printf("\n");
        
    }
    

    return 0;
}