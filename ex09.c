/******************************************************************************

Faça um Programa que leia um vetor A com 10 números inteiros, calcule e mostre 
a soma dos quadrados dos elementos do vetor.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10], soma=0;
    int i;
    
    for(i=0; i<5; i++){
        printf("Digite o numero %i: ",i+1);
        scanf(" %i", &a[i]);
        }
        
    printf("\n\n");    
    
        
    for(i=0; i<5; i++){
        soma = soma + (a[i]*a[i]);
    }
        
    printf("Soma dos quadrados: %i", soma);    
        
    return 0;
}
