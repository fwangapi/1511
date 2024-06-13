#include <stdio.h>
#include<stdlib.h>

int main() {
    int n;

    printf("Enter an odd integer: ");
    scanf("%d", &n);

    // Check if input is odd (positive or negative)
    if (n % 2 != 0) {
        int center_row = n / 2;

        // Print pattern
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // Print center row with asterisksccomp1511
                if (i == center_row) {
                    printf("*");
                } else {
                    // Calculate absolute distance from center row
                    int dist = abs(i - center_row);

                    // Print asterisk for even distance, dash for odd distance
                    printf((dist % 2 == 0) ? "*" : "-");
                }
            }
            printf("\n");
        }
    } else {
        printf("Error: Please enter an odd integer.\n");
    }

    return 0;
}





// int main() {
//     int n = 25; // You can change this to any odd number

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (j == i || j == n - 1 - i || (((j - i) % 4 == 0 )&& (j<n/2)) ){
//             //if (j == i || j == n - 1 - i ) {
//                 printf("*");
//             //} else if ((i!=0 && i%4==0 )||(j!=0 && j%4==0)){
//                 printf("*");
//             } 
//             else {
//                 printf("-");
//             }
//         }
//         printf("\n");
//     }


//     return 0;
// }
