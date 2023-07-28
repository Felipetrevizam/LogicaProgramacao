/******************************************************************************

Escreva um algoritmo que:
1 leia um conjunto de 128 n ́umeros em um vetor chamado de A
2 solicite um n ́umero chave K ao usu ́ario
3 verifique se a chave digitada est ́a entre os 128 n ́umeros.
Em caso positivo, retorne a posi ̧c ̃ao onde a chave foi
encontrada, caso contr ́ario, imprima que a chave n ̃ao est ́a no vetor

*******************************************************************************/

#include <stdio.h>

int main()
{
    int A[128], K, i;
    
    for(i=0;i<128;i++){
        
    printf("Digite o numero da posicao %i: ",i+1);
    scanf("%d",&A[i]);    
    }
    
    printf("\n\n");
    
    printf("Digite um numero a ser pesquisado: ");
    scanf("%d",&K);
    
    for(i=0;i<128;i++){
        if(K==A[i]){
            printf("O numero esta na posicao: %d do vetor.", i);
        }
    }
    
    return 0;
}
