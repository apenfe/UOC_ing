/*
 * Adrian Peñalver Fernandez
 * PEC_4
 * 01/11/2022
 * for y while
*/

#include <stdio.h>
#include <stdbool.h>

#define MIN_CINEMAS 1 //Min. number of cinemas
#define MAX_CINEMAS 10 //Max. number of cinemas
#define SCREENS_3 3 //3 screens
#define SCREENS_6 6 //6 screens
#define POINTS_LE_3_SCREENS 2.0 // Points less/equals 3 screens
#define POINTS_LE_6_SCREENS 3.0 // Points less/equals 6 screens
#define POINTS_GT_6_SCREENS 4.0 // Points greater than 6 screens
#define PARKING_POINTS_INCREASE 1.5 // Points increase if has parking

typedef enum {PREMIERE, RERELEASE, INDIE, OTHER} tCinemaType;

int main(int argc, char **argv)
{
    
    int cinemaIdVector[MAX_CINEMAS];
    tCinemaType cinemaTypeVector[MAX_CINEMAS];
    int numScreensVector[MAX_CINEMAS];
    bool hasParkingVector[MAX_CINEMAS];
    float totalPointsVector[MAX_CINEMAS];
    int numCinemas;
    int bestCinema;
    int intToBool;
    float maxPoint;

// Exercise 2.1
// Data input

    printf("INPUT DATA\n");
    printf("NUMBER OF CINEMAS (1-10)? >>\n");
    scanf("%d",&numCinemas);

// Data validation

    while (MIN_CINEMAS > numCinemas || numCinemas > MAX_CINEMAS){
        printf("INVALID DATA, TRY AGAIN!\n");
        printf("NUMBER OF CINEMAS (1-10)? >>\n");
        scanf("%d",&numCinemas);
    }

// Exercise 2.2

    maxPoint= 0;

    for (int i=0; i<numCinemas; i++){
// Data input
        printf("CINEMA #%d\n",i+1);

        printf("ID (AN INTEGER)? >>\n");
        scanf("%d",&cinemaIdVector[i]);

        printf("TYPE (1-PREMIERE, 2-RERELEASE, 3-INDIE, 4-OTHER)? >>\n");
        scanf("%u",&cinemaTypeVector[i]);

        printf("SCREENS (1-10)? >>\n");
        scanf("%d",&numScreensVector[i]);

        printf("HAS PARKING (0-FALSE, 1-TRUE)? >>\n");
        scanf("%d",&intToBool);
        hasParkingVector[i] = (bool)intToBool;

// Data processing

        if (numScreensVector[i] <= SCREENS_3 ){
            totalPointsVector[i]= POINTS_LE_3_SCREENS;
        }else{
            if (SCREENS_3 < numScreensVector[i] && numScreensVector[i] <= SCREENS_6){
                totalPointsVector[i]= POINTS_LE_6_SCREENS;
            }else{
                totalPointsVector[i]= POINTS_GT_6_SCREENS;
                }
            }

        if (hasParkingVector[i]){
            totalPointsVector[i]= totalPointsVector[i]* PARKING_POINTS_INCREASE;
        }

        if (totalPointsVector[i] > maxPoint){
        maxPoint= totalPointsVector[i];
        bestCinema= i;
        }
    }

// Data output
// Exercise 2.3

    printf("RESULTS\n");
    printf("BEST CINEMA [ID]: %d\n",cinemaIdVector[bestCinema]);

    printf("TOTAL POINTS: %2.2f\n",totalPointsVector[bestCinema]);

    printf("SCREENS: %d\n",numScreensVector[bestCinema]);

    printf("TYPE (1-PREMIERE, 2-RERELEASE, 3-INDIE, 4-OTHER): %u\n",cinemaTypeVector[bestCinema]);

    printf("HAS PARKING (0-FALSE, 1-TRUE): %d\n",hasParkingVector[bestCinema]);

	return 0;
}
