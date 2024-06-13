// Name of Exercise
// file_name.c
//
// This program was written by YOUR-NAME-HERE (z5555555)
// on INSERT-DATE-HERE
//
// One line summary of what this exercise does.

#include <stdio.h>

#define MAX_HEALTH 50.0
#define MAX_ATTACK 10

// Provided fighter struct
struct fighter {
    int attack;
    double health;
    char attack_command;
};

int main(void) {
    
    printf("Welcome to Street Fighter!\n");
    ////////////////////////////////////////////////////////////////////////////
    ///////////////////////// Fighter 1 Creation ///////////////////////////////
    ////////////////////////////////////////////////////////////////////////////
    printf("\n");
    struct fighter fighter1;

    // TODO: prompt and scan for fighter1's attack power and command. 
    //       Initialise fighter1's health to MAX_HEALTH
    printf("Enter Fighter 1's attack power(1-10): ");
    scanf(" %d", &fighter1.attack);
    
    printf("Enter an ascii character for Fighter 1's attack command: ");
    scanf(" %c", &fighter1.attack_command);
    fighter1.health = MAX_HEALTH;
    printf("\n");

    ////////////////////////////////////////////////////////////////////////////
    ///////////////////////// Fighter 2 Creation ///////////////////////////////
    ////////////////////////////////////////////////////////////////////////////

    // TODO: declare fighter2's struct and repeat the above for fighter2
    struct fighter fighter2;
    printf("Enter Fighter2's attack power (1-10): ");
    scanf(" %d", &fighter2.attack);
    printf("Enter an ascii character for Fighter 2's attack command: ");
    scanf(" %c", &fighter2.attack_command);
    fighter2.health = MAX_HEALTH;
    printf("\n");

    ////////////////////////////////////////////////////////////////////////////
    //////////////////////////////// Fight Loop ////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////

    // TODO: create a loop until one of the fighters loses all their health
    //       prompt the fighter to attack and print remaining health after 
    //       each round
    char one, two;
    printf("FIGHT!\n");
    printf("\n");
    while (fighter1.health > 0 && fighter2.health > 0)
    {
        

        printf("Fighter 1, press %c to attack: ",fighter1.attack_command);
        scanf(" %c",&one);
        printf("Fighter 1 attacks!\n");
        printf("Fighter 2, press %c to attack: ", fighter2.attack_command);
        scanf(" %c",&two);
        printf("Fighter 2 attacks!\n");
        printf("\n");
        
        //fighter2.health = fighter2.health - fighter1.attack;
        //fighter1.health = fighter1.health - fighter2.attack;
        
        if(fighter1.health  < MAX_HEALTH/2)
        {
             fighter1.health = fighter1.health - 0.5*fighter2.attack;
      }
        
        if (fighter2.health  < MAX_HEALTH/2 ) 
        {
            fighter2.health = fighter2.health - 0.5*fighter1.attack;
             
        } 

        printf("Fighter 1's health: %.1lf\n", fighter1.health);
        printf("Fighter 2's health: %.1lf\n", fighter2.health);
        //printf("\n");
    
    
    if (fighter1.health > 0 && fighter2.health <= 0){
        printf("Fighter 1 wins!\n");
    } else if(fighter2.health > 0 && fighter1.health <= 0){
        printf("Fighter 2 wins!\n");
    } else if (fighter1.health <=0 && fighter2.health <= 0){
        printf("It's a draw!\n");
    }

    ////////////////////////////////////////////////////////////////////////////
    ////////////////////////////// Fight Results ///////////////////////////////
    ////////////////////////////////////////////////////////////////////////////

    //  TODO: Print the results of the fight
        // printf("Fighter 1's health: %.1lf\n", fighter1.health);
        // printf("Fighter 2's health: %.1lf\n", fighter2.health);
    }
    printf("GAME OVER\n");
    return 0;
}