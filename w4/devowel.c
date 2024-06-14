#include <stdio.h>
 


char isVowel(char ch){
    if (ch == 'a')
    {
        return '\0';
    }
    return ch;
}


int main(){

    char ch;

    while (scanf("%c", &ch) != EOF)     
    {   
        printf("%c",isVowel(ch));
    }
    

    printf("\n");
    return 0;
}