/*
 * Adrian Peñalver Fernandez
 * PEC_3
 * 24/10/2022
 * Matrices, vectores e if...else
*/

#include <stdio.h>

int main()
{
    int size;
    int resultado;
    
    printf("INPUT\n");
	printf("SIZE (2-3)?\n");
    scanf ("%i",&size);
    
    if (size==2){
        int matriz[2][2];
        
        printf("POSITION(0,0)?\n");
        scanf ("%d",&matriz[0][0]);
        
        printf("POSITION(0,1)?\n");
        scanf ("%d",&matriz[0][1]);
        
        printf("POSITION(1,0)?\n");
        scanf ("%d",&matriz[1][0]);
        
        
        printf("POSITION(1,1)?\n");
        scanf ("%d",&matriz[1][1]);
        
        resultado= (matriz[0][0]*matriz[1][1])-(matriz[0][1]*matriz[1][0]);
        
        printf("OUTPUT\n");
        printf("RESULT: %d\n", resultado);
        
    } else {
        if(size==3){
            int matriz[3][3];
        
        printf("POSITION(0,0)?\n");
        scanf ("%d",&matriz[0][0]);
        
        printf("POSITION(0,1)?\n");
        scanf ("%d",&matriz[0][1]);
        
        printf("POSITION(0,2)?\n");
        scanf ("%d",&matriz[0][2]);
        
        printf("POSITION(1,0)?\n");
        scanf ("%d",&matriz[1][0]);
        
        printf("POSITION(1,1)?\n");
        scanf ("%d",&matriz[1][1]);
        
        printf("POSITION(1,2)?\n");
        scanf ("%d",&matriz[1][2]);
        
        printf("POSITION(2,0)?\n");
        scanf ("%d",&matriz[2][0]);
        
        printf("POSITION(2,1)?\n");
        scanf ("%d",&matriz[2][1]);
        
        printf("POSITION(2,2)?\n");
        scanf ("%d",&matriz[2][2]);
        
        resultado= (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]) +- (matriz[0][2] * matriz[1][1] * matriz[2][0])-(matriz[0][0] * matriz[1][2] * matriz[2][1])-(matriz[0][1] * matriz[1][0] * matriz[2][2]); 
        printf("OUTPUT\n");
        printf("RESULT: %d\n", resultado);
        } else {
            printf("INVALID VALUE\n");
        }
    }
	return 0;
}
