/*
 * ADRIAN PEÑALVER FERNANDEZ
 * PEC_6
 * 15/11/2022
 * ACCIONES Y FUNCIONES
 */
 
#include <stdio.h>
#include <string.h>

#define NUM_CINEMAS 3
#define MIN_SCREENS 1
#define MAX_SCREENS 5
#define MAX_LETRAS 25
#define MIN_VECTOR 0

typedef struct {
int screenId;
int capacity;
} tScreen;

typedef struct {
char name[MAX_LETRAS];
tScreen screenVector[MAX_SCREENS];
int nScreens;
} tCinema;

void writeCinema(tCinema cinema);
int getTotalCapacity(tCinema cinema);
void readCinema(tCinema *cinema);

//--------------------------------------------
int main(int argc, char **argv)
{
    
    tCinema cinemaVector[NUM_CINEMAS];
    tCinema bestCinema;

    printf("INPUT DATA\n");
    
    for (int i=0; i<= (NUM_CINEMAS-1); i++){
        readCinema(&cinemaVector[i]);
    }
    
    bestCinema = cinemaVector[MIN_VECTOR]; //revisar
    
    for(int j=0; j <=(NUM_CINEMAS-1); j++){
            if(getTotalCapacity(bestCinema) < getTotalCapacity(cinemaVector[j])){
                bestCinema = cinemaVector[j]; //revisar
            }
    }
    
    printf("BEST CINEMA\n");
    writeCinema(bestCinema);
    
    printf("MAX CAPACITY: ");
    printf("%i",getTotalCapacity(bestCinema));

	return 0;
}

//-----------------------------------------

void writeCinema(tCinema cinema){
    printf("NAME: %s\n",cinema.name);
    printf("SCREENS: %i\n",cinema.nScreens);
    
    for(int i=0; i<=(cinema.nScreens)-1; i++){
        printf("ID: %i\n",cinema.screenVector[i].screenId);
        printf("CAPACITY: %i\n",cinema.screenVector[i].capacity);
        
    }
}

int getTotalCapacity(tCinema cinema){
    
    int sum=0;
    
    for(int i=0; i<=cinema.nScreens; i++){          //puede ser la condicion logica?
        sum = sum + cinema.screenVector[i].capacity;
    }
    
    return sum;
}

void readCinema(tCinema *cinema){
    
    printf("NAME (25 CHAR MAX, NO SPACES)? >>\n");
    scanf("%s",(*cinema).name);
    printf("NUMBER OF SCREENS (1-5)? >>\n");
    scanf("%i",&cinema->nScreens);
    
    while(cinema->nScreens > MAX_SCREENS || cinema->nScreens < MIN_SCREENS){
        printf("INVALID DATA, TRY AGAIN!\n");
        printf("NUMBER OF SCREENS (1-5)? >>\n");
        scanf("%i",&cinema->nScreens);
    }
    
    for(int i=0; i<=(cinema->nScreens)-1; i++){
        printf("ID (AN INTEGER)? >>\n");
        scanf("%i",&cinema->screenVector[i].screenId);
        printf("CAPACITY (25-50)? >>\n");
        scanf("%i",&cinema->screenVector[i].capacity);
    }
}