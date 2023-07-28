/*****************************************************************************

Faça um programa que leia um número indeterminado de valores, correspondentes 
a notas, encerrando a entrada de dados quando for informado um valor igual a 
-1 (que não deve ser armazenado). Após esta entrada de dados, faça:
Mostre a quantidade de valores que foram lidos;
Exiba todos os valores na ordem em que foram informados, um ao lado do outro;
Exiba todos os valores na ordem inversa à que foram informados, um abaixo do 
outro;
Calcule e mostre a soma dos valores;
Calcule e mostre a média dos valores;
Calcule e mostre a quantidade de valores acima da média calculada;
Calcule e mostre a quantidade de valores abaixo de sete;
Encerre o programa com uma mensagem;

*******************************************************************************/

#include <stdio.h>

int main()
{
    float notas[100], x, soma=0, media;
    int i=0, j=0, k=0, l=0;
    
    while (x != -1){
        printf("Digite a nota: ");
        scanf("%f", &x);
        
        if (x != -1){
            soma = soma + x;
            notas[j] = x;
            j++;}
    }
        
    printf("\n\n");    
    
    printf("Soma: %f", soma);
    
    printf("\n\n"); 
    
    media = soma/(j+1);
    printf("Media: %f", media);
        
    for(i=0; i<j; i++){
        if(notas[i] > media){
            k++;}
    }
    
    printf("\n\n"); 
    printf("%d notas acima da media.", k);
    
    printf("\n\n"); 
    
        for(i=0; i<j; i++){
        if(notas[i] < 7){
            l++;}}
        
    printf("%d notas abaixo de 7", l);
    
    printf("\n\n");
    printf("FIM");
    
    return 0;
}
