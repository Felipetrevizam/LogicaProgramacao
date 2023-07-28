/******************************************************************************

Dados dois vetores R[1 : 10] e S[1 : 10], escreva um algoritmo que:
leia os valores de R e S a partir do teclado e:
1 Ćalcule a soma total dos valores armazenados em R e S
2 Gere o vetor X correspondente a unĩao dos vetores R e S
3 Gere o vetor Y tal que Y [i] = R[i] ∗ S[i]

*******************************************************************************/

#include <stdio.h>

int main()
{
    int R[10], S[10], X[20], Y[10], soma=0, i;
    
    for(i=0; i<10; i++){
        
    printf("Digite o valor %i do vetor 1: ",i+1);
    scanf("%d", &R[i]);
    soma=soma+R[i];
    printf("Digite o valor %i do vetor 2: ",i+1);
    scanf("%d", &S[i]);
    soma=soma+S[i];
    }
    
    printf("A soma dos valores dos vetores e: %d",soma);
    printf("\n\n");
    
    for(i=0; i<10;i++){
        X[i]=R[i];
    }
    
    for(i=10;i<20;i++){
        X[i]=S[i-10];
    }
    
    printf("X[i]= ");
    for(i=0;i<20;i++){
        printf("%d, ", X[i]);
    }
    
    printf("\n\n");
    
    printf("Y[i]= ");
    for(i=0;i<10;i++){
        Y[i]=R[i]*S[i];
        printf("%d, ",Y[i]);
    }
    
    return 0;
}
