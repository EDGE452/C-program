#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, k;

    // 1D Array
    float revenue[7];
    float totalRevenue = 0, averageRevenue;

    printf("Weekly Revenue\n");

    for(i = 0; i < 7; i++) {
        printf("Enter revenue for Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        totalRevenue=totalRevenue+ revenue[i];
    }

    averageRevenue = totalRevenue/7;

    printf("Total Weekly Revenue: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n", averageRevenue);

    //2D Array

    int occupancy[5][10];
    int occupied, vacant;

    srand(time(NULL));

    printf("Random Room Occupancy at One Branch \n");

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;
        }
    }
    //per floor
    for(i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for(j = 0; j < 10; j++) {
            if(occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d: Occupied =%d, Vacant =%d\n",
               i + 1, occupied, vacant);
    }

    //3D Arrays

    int chain[3][5][10];
    int totalOccupied = 0;

    printf("At All Hotel Branches \n");

    // Input random occupancy
    for(k = 0; k < 3; k++) {
        for(i = 0; i < 5; i++) {
            for(j = 0; j < 10; j++) {
                chain[k][i][j] = rand() % 2;

                if(chain[k][i][j] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total Occupied Rooms on All Branches: %d\n",
           totalOccupied);

    return 0;
}