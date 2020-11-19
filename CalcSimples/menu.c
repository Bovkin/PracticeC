#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int menu(){
    int op = 0;

    printf("\t SELECIONE UMA OPÇAO: \n");
    printf("\t ******************** \n");
    printf("\t 1 - PERIMETRO QUADRADO \n");
    printf("\t 2 - PERIMETRO CIRCULO \n");
    printf("\t 3 - AREA QUADRADO \n");
    printf("\t 4 - AREA CIRCULO \n");
    printf("\t 5 - VOLUME CUBO \n");
    printf("\t 6 - VOLUME ESFERA \n");
    printf("\t ******************** \n");
    
    do{
        scanf("%d", &op);
    }while(op == 0 || op > 6);

    return op;
}