/*****************************************************************************

Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine 
quantos alunos com mais de 13 anos possuem altura inferior à média de altura 
desses alunos.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int id[30];
    float a[30], media, soma=0;
    int i, x=0;
    
    for(i=0; i<30; i++){
        printf("Digite a idade do aluno %i: ",i+1);
        scanf(" %i", &id[i]);
        printf("Digite a altura %i: ",i+1);
        scanf(" %f", &a[i]);
        printf("________________________\n");
        }
        
    printf("\n\n");    
    
        
    for(i=0; i<30; i++){
        soma = soma + a[i];
        media = soma/30;
    }
    
    for(i=0; i<30; i++){
       if(id[i]>13 && a[i]<media){
        x++;}
    }  
        
    printf("%i alunos com mais de 13 anos possuem altura inferior à média de altura desses alunos.", x);
        
    return 0;
}
