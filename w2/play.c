#include<stdio.h>

int main(void){
int year;
printf("please enter a year: \n");
scanf("%d", &year);
if (year % 400 ==0)
{
    printf("it is a leap year!\n");
    return 0;
} else if(year % 4 == 0 && year % 100 != 0)
{
  printf("it is a leap year!\n");
  return 0;
}
printf("it is not a leap year.\n");

return 0;

}