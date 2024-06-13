// Program that takes in an array of heights and outputs the maximum volume
// that can be held in one region between these heights.
//
// Written by YOUR-NAME (YOUR-ZID), DD-MM-YYYY

#include <stdio.h>

#define MAX_HEIGHT 200

int max_pool_volume(int length, int heights[length]);

int main(void) {
    int height;

    int heights[MAX_HEIGHT];
    int n_heights = 0;
    printf("Please enter heights: ");
    while (n_heights < MAX_HEIGHT && scanf("%d", &height) == 1) {
        heights[n_heights] = height;
        n_heights++;
    }

    printf(
        "Maximum volume of pools: %d\n",
        max_pool_volume(n_heights, heights)
    );

    return 0;
}

// Given an array `heights` of length `length`, returns the volume of the
// largest possible pool that can be formed between the heights.
int max_pool_volume(int length, int heights[length]) {
    // TODO: Complete this function
    return 42;
}