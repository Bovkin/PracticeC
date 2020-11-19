#include <stdio.h>
#include <stdlib.h>
#include "geometricas.h"
#include "menu.h"

int main (int argc, char *argv[]){
    double n = 0;
    FILE *arqSaida;
    

    n = atoi(argv[1]);

    int op = menu();
    if(op == 1){
        double peri = 0;
        peri = perimetroQuadrado(n);
        arqSaida = fopen("perimetroQuadrado.txt", "a+");
        fprintf(arqSaida, "Perimetro Quadrado: %2.f\n", peri);
        fclose(arqSaida);
    }else if(op == 2){
        double peri = 0;
        peri = perimetroCirculo(n);
        arqSaida = fopen("perimetroCirculo.txt", "a+");
        fprintf(arqSaida, "Perimetro Circulo: %2.f\n", peri);
        fclose(arqSaida);
    }else if(op == 3){
        double area = 0;
        area = areaQuadrado(n);
        arqSaida = fopen("areaQuadrado.txt", "a+");
        fprintf(arqSaida, "Area Quadrado: %2.f\n", area);
        fclose(arqSaida);
    }else if(op == 4){
        double area = 0;
        area = areaCirculo(n);
        arqSaida = fopen("areaCirculo.txt", "a+");
        fprintf(arqSaida, "Area Circulo: %2.f\n", area);
        fclose(arqSaida);
    }else if(op == 5){
        double volume = 0;
        volume = volumeCubo(n);
        arqSaida = fopen("volumeCubo.txt", "a+");
        fprintf(arqSaida, "Volume Cubo: %2.f\n", volume);
        fclose(arqSaida);
    }else if(op == 6){
        double volume = 0;
        volume = volumeEsfera(n);
        arqSaida = fopen("volumeEsfera.txt", "a+");
        fprintf(arqSaida, "Volume Esfera: %2.f\n", volume);
        fclose(arqSaida);
    }
}