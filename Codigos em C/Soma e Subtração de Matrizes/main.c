#include <stdio.h>
#include <stdlib.h>

 //MATRIZ EM SOMA E SUBTRAÇÃO DE ORDEM N//
int main(){

    int ordem;
    printf("Digite qual a ordem da matriz desejada \n");
    scanf("%d", &ordem);

    int matrizA[ordem][ordem];
    int matrizB[ordem][ordem];
    int matrizC[ordem][ordem];
    int matrizD[ordem][ordem];

    // obtendo os dados da matriz NxN//
    printf("Digite as entradas da matriz A \n");

    for(int i=0; i<ordem; i++){
    for(int j=0; j<ordem; j++){
    printf("linha %d coluna %d\t",i+1, j+1);
    scanf("%d", &matrizA[i][j]);
                    }
    printf("\n");
    }
    printf("Digite as entradas da matriz B \n");
    for(int i=0; i<ordem; i++){
    for(int j=0; j<ordem; j++){
    printf("linha %d coluna %d\t",i+1, j+1);
    scanf("%d", &matrizB[i][j]);
                    }
    printf("\n");
    }

    //fazendo a soma de matrizes

    for(int i=0; i<ordem; i++){
    for(int j=0; j<ordem; j++){
    matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
                }
    printf("\n");
    }
    //fazendo a subtração
    for(int i=0; i<ordem; i++){
    for(int j=0; j<ordem; j++){
    matrizD[i][j] = matrizA[i][j] - matrizB[i][j];
                }
    printf("\n");
    }

    printf("Sua matriz A somada com a matriz B eh igual a: \n ");
    for(int i=0; i<ordem; i++){
    for(int j=0; j<ordem; j++){
    printf("%d\t", matrizC[i][j]);
                    }
    printf("\n");
    }

    printf(" E sua matriz A subtraida com a matriz B eh igual a: \n ");
    for(int i=0; i<ordem; i++){
    for(int j=0; j<ordem; j++){
    printf("%d\t", matrizD[i][j]);
                    }
    printf("\n");
    }


    return 0;

    }




