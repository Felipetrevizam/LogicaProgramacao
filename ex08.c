/******************************************************************************

Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada 
informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa 
a ordem lida.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int id[5];
    float a[5];
    int i;
    
    for(i=0; i<5; i++){
        printf("Digite a idade da pessoa %i: ",i+1);
        scanf(" %i", &id[i]);
        printf("Digite a altura da pessoa %i: ",i+1);
        scanf("%f", &a[i]);
        }
        
    printf("\n\n");    
    
        
    for(i=4; i>-1; i--){
        printf("Pessoa %i, altura: %.2f, idade: %i \n",i+1, a[i], id[i]);}
        
    return 0;
}
