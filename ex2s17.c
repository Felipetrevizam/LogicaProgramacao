/******************************************************************************

Fa ̧ca um programa que receba 2 strings (A e B) e retorne
uma terceira string (C) formada pelos caracteres de A e B
intercalados. Ex.: Se A=’Quarta’ e B=’Segunda’, a
resposta deve ser ’QSueagrutnada’.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char A[100], B[100], C[200];
    int m=1,n=0;
    
    printf("Digite a frase A: ");
    fgets(A, sizeof(A), stdin);
    
    printf("\nDigite a frase B: ");
    fgets(B, sizeof(B), stdin);
    
    for(int i=1;i<(strlen(A)+strlen(B));i++){
        C[0]=A[0];
        if(i%2==0){
            C[i]=A[m];
            m++;
        }
        else
        {
            C[i]=B[n];
            n++;
        }
    }
    
    printf("\nString C: %s",C);
    
    return 0;
}
