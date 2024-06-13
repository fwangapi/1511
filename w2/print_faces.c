#include <stdio.h>
//z5549054

int main(){
    //1st scanf variable eye1
    //wnd scanf variable nose, but could be eye2

    char eye1;
    char eye2;
    int temp;
    //char free;
    char nose;
    char mouth;
 


    printf("How do you want to build a face?: ");
    scanf("%c%c%c",&eye1,&nose,&mouth);

    if (nose > 'd'){ // it is not a nose, but eye2

        if (eye1 == 'a'){
                
            printf("_ _\n");
            
            } else if (eye1 == 'b'){
                printf("~ ~");
            } else if (eye1 == 'c'){
                printf("\\ \\\n");
            } else {
                printf("/ /\n");
            }
        printf("O O\n");
    }
    else{
            
        scanf("%c", &eye2);
        temp = nose;
        nose = mouth;
        mouth = eye2;
        eye2 = temp;

        
        if (eye1 == 'a'){
            
            printf("_");
           
        } else if (eye1 == 'b'){
            printf("~");
        } else if (eye1 == 'c'){
            printf("\\");
        } else {
            printf("/");
        }

        if (eye2 == 'a'){
            
            printf(" _\n");
           
        } else if (eye2 == 'b'){
            printf(" ~\n");
        } else if (eye2 == 'c'){
            printf(" \\\n");
        } else {
            printf(" /\n");
        }
         
        printf("O O\n");
        
    }
 

        if (nose == 'e'){
            printf(" ^ ");
        }
            else {
                printf(" ~ ");
            }
        


        printf("\n");

        if (mouth == 'g'){
            printf("\\_/\n");
        }
            else if (mouth == 'h'){
                printf("/-\\\n");
            }
            else {
                printf(" o\n");
            }
        return 0;
    
    }
    
