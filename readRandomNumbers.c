/* Dealing with files and parameters */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    int num, qtd;
    FILE *entrada;

    if(argc != 2){
        fprintf(stderr, "Modo de uso: ./readRandomNumbers arquivo.bin\n");
        return 0;
    }


    entrada = fopen(argv[1], "rb");

    if(entrada == NULL){
        fprintf(stderr, "Erro ao abrir o arquivo %s\n", argv[1]);
        return 0;
    }

    qtd = 0;
    fread(&num, sizeof(int), 1, entrada);
    while(!feof(entrada)){
        qtd++;
        printf("%d\n", num);
        fread(&num, sizeof(int), 1, entrada);
    }

    printf("%d total numbers\n", qtd);

    fclose(entrada);
}