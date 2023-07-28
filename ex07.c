/*****************************************************************************

Ler uma matriz 8 x 8 e transformá-la em uma matriz triangular inferior,
atribuindo zero a todos os elementos acima da diagonal principal (ou
seja, dada uma matriz A, para qualquer i > j, A[i,j] = 0). Imprimir a
matriz no final.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int matriz[8][8], i, j;
    
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            printf("Insira o valor %d %d: ", i+1, j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    
    printf("\n\n");
    
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            if(i > j){
                matriz[i][j]=0;
            }
        }
    }
    
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            printf("[%d][%d] = %d\n",i+1,j+1,matriz[i][j]);
        }
    }
    
    return 0;
}
