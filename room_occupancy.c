/*
Name:Robin mutharimi
Reg No:CT101/g/2655/25
Description:A program for room occupancy
Date:30/10/2025
*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLOORS 5
#define ROOMS 10

int main() {
    int occupancy[FLOORS][ROOMS];
    int floor, room;

    
    srand(time(NULL));

    
    for (floor = 0; floor < FLOORS; floor++) {
        for (room = 0; room < ROOMS; room++) {
            occupancy[floor][room] = rand() % 2;
        }
    }

    
    printf("Room Occupancy Report:\n");
    for (floor = 0; floor < FLOORS; floor++) {
        int occupied = 0, vacant = 0;
        for (room = 0; room < ROOMS; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}
