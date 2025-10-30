/*
Name:Robin Mutharimi
Reg NO:CT101/G/26555/25
Description:A hotel occupancy.3D
Date:30/10/2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10

int main() {
    int chain[BRANCHES][FLOORS][ROOMS];
    int branch, floor, room;
    int totalOccupied = 0;

    // Seed random number generator
    srand(time(NULL));

    // Step 1 & 2: Assign random occupancy (0 = vacant, 1 = occupied)
    for (branch = 0; branch < BRANCHES; branch++) {
        for (floor = 0; floor < FLOORS; floor++) {
            for (room = 0; room < ROOMS; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // Step 3: Display total occupied rooms
    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}
