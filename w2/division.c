//z5549054

#include<stdio.h>

int main(){
    int dividend;
    int divisor;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);
     
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0)
    {
        printf("Don't be silly!\n");
        return 0;
    }
    

    double quotient = (double)dividend / divisor;

    printf("%d divided by %d\n", dividend, divisor);
    printf("To the nearest integer: %d\n", dividend / divisor);
    printf("To 1 decimal place: %.1f\n", quotient);
    printf("To 5 decimal places: %.5f\n", quotient);
    printf("To 20 decimal places: %.20f\n", quotient);



    return 0;
}