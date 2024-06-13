// coffee_shop.c
//
// Written by YOUR-NAME (zID)
// on TODAYS-DATE 
//
// This program is a simple coffee shop used to demonstrate the use of 
// structs and enums in C. This program takes user input for a coffee order
// and outputs the cost of the order.

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_COST 4.5

// TODO: Define an enum `coffee_type` that stores the different types of coffees 
// the shop sells. These are: LATTEE, CAPPUCCINO, ESPRESSO, AMERICANO & MATCHA.

enum coffee_type{LATTEE, CAPPUCCINO, ESPRESSO, AMERICANO, MATCHA};
const double coffee_prices[] = {4.5, 5.0, 5.3, 5.8, 6.0};

// TODO: Define a struct `coffee` that stores 
// 1. the coffee type (an enum)
// 2. the number of sugars 
// 3. the size of a coffee 

struct coffee
{
    enum coffee_type type;
    int sugars;
    char coffee_size;
};

int main(void) {
    // TODO: Initalise a variable for the struct
    struct coffee order1;

   

    printf("Enter coffee type (0: LATTE, 1: CAPPUCCINO, 2: ESPRESSO, \
            3: AMERICANO, 4: MATCHA): ");
    
    // TODO: take user input
    scanf(" %d", (int*)&order1.type);

    printf("Enter number of sugars: ");
    // TODO: take user input
    scanf(" %d", &order1.sugars);

    printf("Enter size (L for Large, R for Regular): ");
    // TODO: take user input
    scanf(" %c", &order1.coffee_size);
    // TODO: Calculate cost of order

    double total_cost = coffee_prices[order1.type] + ADDED_COST * order1.sugars;

    if (order1.coffee_size == LARGE)
    {
        total_cost += 1.0;
    }
    
    
	printf("Total cost: %.2lf\n", total_cost);
	return 0;
}