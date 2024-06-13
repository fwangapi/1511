// Program which prints a letter depending on the user's request.
// by z5549054

#include <stdio.h>

int main(void) {

    char is_uppercase;
    printf("Uppercase: ");

    // TODO: scan is_uppercase
    scanf("%c", &is_uppercase);

    int index;
    printf("Index: ");

    // TODO: finish the program
    scanf("%d", &index);

    if (is_uppercase == 'y'){
        index += 65;
    } else
    {
        index += 97;
    }
    
    printf("The letter is %c\n", index);
    

    return 0;
}