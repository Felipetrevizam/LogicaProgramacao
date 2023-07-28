/******************************************************************************

Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro 
vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos 
intercalados dos dois outros vetores.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10], b[10], c[20], soma=0;
    int i, j=0, k=0;
    
    for(i=0; i<10; i++){
        printf("Digite o numero %i do vetor a: ",i+1);
        scanf(" %i", &a[i]);
        printf("Digite o numero %i do vetor b: ",i+1);
        scanf(" %i", &b[i]);
        }
        
    printf("\n\n");    
    
        
    for(i=0; i<20; i++){
        if(i%2==0){
            c[i]=a[j];
            j++;}
        else{
            c[i]=b[k];
            k++;
        }
    }
    
    for(i=0; i<20; i++){
        printf("Vetor c: %i\n", c[i]);}  
        
    return 0;
}
