/******************************************************************************

Leitura de notas de 80 alunos, c ́alculo da m ́edia e impress ̃ao

in ́ıcio
real : media, soma;
tipo v = vetor[1:80] real;
v: notas;
inteiro : I;
soma = 0;
para I de 1 at ́e 80 fac ̧a
leia(notas[I]);
soma = soma + notas[I];
fimpara;
media = soma / 80;
para I de 1 at ́e 80 fac ̧a
imprima(notas[I], media);
fim.

Reescreva o algoritmo anterior utilizando enquanto no
lugar do para

*******************************************************************************/

#include <stdio.h>

int main()
{   
    float soma=0;
    float v[8];
    float media;
    
    
    for(int i=0;i<8;i++){
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%f",&v[i]);
        soma=soma+v[i];
    }
    
    media=soma/8;
    
    printf("\n\n");
    printf("Media da turma e: %.2f",media);
    
    return 0;
}
