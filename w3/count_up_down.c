#include <stdio.h>

int main(){
    int num;
    printf("Enter number: ");
    scanf(" %d", &num);
    // if (num == 0)
    // {
    //     printf("%d\n",num);
    //     return 0;
    // }
    if (num > 0)
    {
        for (int i = 0; i <= num; i++)
        {
            printf("%d\n",i);
        }
        
    } else {
        for (int i = 0; i >= num; i--)
        {
            printf("%d\n",i);
        }
        
    }
    

    return 0;
}