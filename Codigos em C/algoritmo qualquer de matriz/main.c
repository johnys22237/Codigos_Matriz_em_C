#include <stdio.h>
#include <stdlib.h>

int main()
{
 int l,c;
 int i,j;

 scanf("%d",&l);
 scanf("%d",&c);
int matriz[l][c];

printf("DIGITE AQUI SUA MATRIZ DESEJADA DE %d linhas E %d COLUNAS \n \n \n ", l,c);
 for(i=0;i<l;i++){
 for(j=0;j<c;j++){
scanf("%d", &matriz[i][j]);
 }

 }

 printf("SUA MATRIZ DE %d LINHAS E %d COLUNAS EH: \n ", l,c);

    for(i=0;i<l;i++){
    for(j=0;j<c;j++){
    printf("%d \n", matriz[i][j]);
     }
 }

 return 0;
}
