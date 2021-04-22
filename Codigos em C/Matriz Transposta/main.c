#include <stdio.h>
#include <stdlib.h>
#include<stdlib.h>
#include <time.h>

int main(){
    int linhas, colunas;
    printf("digite quantas linhas voce deseja: ");
    scanf("%d", &linhas);
    printf("digite quantas colunas voce deseja: ");
    scanf("%d", &colunas);

    int vet[linhas][colunas];
    int vetTrans[colunas][linhas];

    printf("Digite sua matriz de %d  x  %d  \n ", linhas, colunas);
    for(int i=0; i<linhas; i++){
    for(int j=0; j<colunas; j++){
            printf("linha %d\t coluna %d\t ", i, j);
            scanf("%d", &vet[i][j]);
    }
    printf("\n");
    }

    for(int i=0; i<linhas; i++){
    for(int j=0; j<colunas; j++){
    vetTrans[j][i] = vet[i][j];
    }
    }

    printf("Sua matriz transposta eh: \n ");
    for(int i=0; i<colunas; i++){
    for(int j=0; j<linhas; j++){
            vetTrans[j][i] = vet[i][j];
            printf("%d\t", vetTrans[i][j]);

    }
    printf("\n");
    }

    return 0;
}
