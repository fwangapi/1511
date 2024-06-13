//5549054
#include <stdio.h>

int main(){

    int int1, int2, int3, small, medium, large;
    printf("Enter integer: ");
    scanf(" %d", &int1);
    printf("Enter integer: ");
    scanf(" %d", &int2);
    printf("Enter integer: ");
    scanf(" %d", &int3);

    if (int1 >= int2 ){
        if (int1 >= int3){
            large = int1;
            if (int2 >= int3)
            {
                medium = int2;
                small = int3;
            }else{
                medium = int3;
                small = int2;
            }
        } else{
            large = int3;
            medium = int1;
            small= int2;
        }
    }else{
            if (int1 <= int3){
            small = int1;
            if (int2 >= int3)
            {
                large = int2;
                medium = int3;
            }else{
                large = int3;
                medium = int2;
            }
        } else{
            large = int2;
            medium = int1;
            small= int3;
        }
    }
    
    

    printf("The integers in order are: %d %d %d\n", small, medium, large);
    return 0;
}