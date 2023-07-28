/*****************************************************************************

Faça um programa que receba a temperatura média de cada mês do ano e armazene-as
em uma lista. Após isto, calcule a média anual das temperaturas e mostre todas 
as temperaturas acima da média anual, e em que mês elas ocorreram (mostrar o mês
por extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).

*******************************************************************************/

#include <stdio.h>

int main()
{
    float t[12];
    float media, soma=0;
    int i, x=0;
    
    for(i=0; i<12; i++){
        printf("Digite a temperatura do mes %i: ",i+1);
        scanf(" %f", &t[i]);
        }
        
    printf("\n\n");    
    
        
    for(i=0; i<12; i++){
        soma = soma + t[i];
        media = soma/12;
    }
    
    for(i=0; i<12; i++){
       if(t[i]>media){
        printf("O mes %i teve temperatura acima da media.\n", i+1);}
    }  
        
    return 0;
}
