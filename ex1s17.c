/******************************************************************************

Fa ̧ca um programa que leia uma string e fa ̧ca com que a
primeira letra de cada palavra fique em mai ́uscula. Para
isso, basta subtrair 32 do elemento que deseja alterar
para mai ́usculo
chrNome[0] = chrNome[0] – 32;
Ex. Entrada: lab. de linguagem de programacao
Ex. Sa ́ıda : Lab. De Linguagem De Programacao

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    
    printf("Digite a frase: ");
    fgets(str, sizeof(str), stdin);
    
    printf("\nString de entrada: %s",str);
    
    for(int i=0; str[i]!='\0'; i++){
        if (isalpha(str[i]) && (i == 0 || str[i - 1] == ' ')) {
            str[i] = toupper(str[i]);
    }}
    
    printf("\nString de saida: %s",str);
    
    return 0;
}
