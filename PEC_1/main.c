
/*
 * Adrian Peñalver Fernandez
 * PEC_1
 * 10/10/2022
 * Cambio de tipos, entradas y salidas
*/

#include <stdio.h>

const int VOLUMEN_CAMION = 3500;

int main()
{
    int flow;
    float tiempo;
    
	printf("INPUT\n");
    printf("FLOW?\n");
    
    scanf("%d", &flow);
    
    tiempo=(VOLUMEN_CAMION / (float)flow);
    
    printf("OUTPUT\n");
    printf("WORKING TIME: ");
    printf("%2.2f", tiempo);
    
	return 0;
}

/*
 * La salida debe ser:
 * INPUT
 * FLOW?
 * 150
 * OUTPUT
 * WORKING TIME: 23.33
*/

