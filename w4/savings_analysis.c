// Savings Analysis
// savings_analysis.c
//
// This program was written by YOUR-NAME-HERE (z5555555)
// on INSERT-DATE-HERE
//
// A program to do analysis on a savings account.

#include <stdio.h>

#define NUM_MONTHS 12

// Do not edit this struct definition
struct transaction {
    int deposits;
    int spending;
};

// TODO: Write function prototypes

//////////////// vvv DO NOT EDIT MAIN vvv //////////////////
// main funciton initalises transactions array and prints results
int main(void) {
    // array initalisation
    int starting_balance;
    int saving_goal;
    struct transaction transactions[NUM_MONTHS]; 
    printf("Please enter starting balance: ");
    scanf("%d", &starting_balance);
    printf("Please enter monthly saving goal: ");
    scanf("%d", &saving_goal);
    printf("Please enter monthly deposits: ");
    int i = 0;
    while (i < NUM_MONTHS) {
        scanf("%d", &transactions[i].deposits);
        i++;
    }
    printf("Please enter monthly spending: ");
    i = 0;
    while (i < NUM_MONTHS) {
        scanf("%d", &transactions[i].spending);
        i++;
    }

    // Calls to the functions that you need to implement
    int yearly_deposits = calc_yearly_deposits(transactions);
    int yearly_spending = calc_yearly_spending(transactions);
    int ending_balance = calc_ending_balance(starting_balance, transactions);
    int num_months = calc_months_saving_goal_met(saving_goal, transactions);

    // print out analysis
    printf("\n");
    printf("Yearly deposits = $%d\n", yearly_deposits);
    printf("Yearly spending = $%d\n", yearly_spending);
    printf("Ending balance  = $%d\n", ending_balance);
    printf("You met the monthly saving goal %d times!\n", num_months);
    return 0;
}
//////////////// ^^^ DO NOT EDIT MAIN ^^^ //////////////////


// TODO: Define and implement the function called `calc_yearly_deposits`
// which calculates and returns the total amount of money deposited
// Remember to use the format:
// return_type calc_yearly_deposits(parameters) {...}

// TODO: Define and implement the function called `calc_yearly_spending`
// which calculates and returns the total amount of money spent
// Remember to use the format:
// return_type calc_yearly_spending(parameters) {...}


// TODO: Define and implement the function called `calc_ending_balance`
// which calculates and returns the ending balance of an account
// Remember to use the format:
// return_type calc_ending_balance(parameters) {...}

// TODO: Define and implement the function called `calc_months_saving_goal_met`
// which returns the the number of months the saving goal was met
// Remember to use the format:
// return_type calc_months_saving_goal_met(parameters) {...}
