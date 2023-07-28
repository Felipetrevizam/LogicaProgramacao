/******************************************************************************

Fa ̧ca uma fun ̧c ̃ao que receba como entrada trˆes strings
(A, B e C) e retorne uma quarta string formada pela
substitui ̧c ̃ao de todas as ocorrˆencias da string B pela
string C dentro da string A
Ex.: Se A=’Abra a porta para entrar para poder
descansar calmamente’, B=’para’ e C=’e tente’, a
resposta deve ser: ’Abra a porta e tente entrar e tente
descansar calmamente’

*******************************************************************************/

#include <stdio.h>
#include <string.h>

void substituirPalavra(char *string, const char *palavraAlvo, const char *novaPalavra) {
    // Calcula o tamanho da palavra alvo e da nova palavra
    int tamanhoPalavraAlvo = strlen(palavraAlvo);
    int tamanhoNovaPalavra = strlen(novaPalavra);

    // Ponteiro para ocorrência da palavra alvo
    char *ocorrencia = strstr(string, palavraAlvo);

    while (ocorrencia) {
        // Calcula o deslocamento necessário
        int deslocamento = tamanhoNovaPalavra - tamanhoPalavraAlvo;

        // Move o restante da string para frente ou para trás
        memmove(ocorrencia + tamanhoNovaPalavra, ocorrencia + tamanhoPalavraAlvo, strlen(ocorrencia + tamanhoPalavraAlvo) + 1);

        // Copia a nova palavra na posição da ocorrência
        memcpy(ocorrencia, novaPalavra, tamanhoNovaPalavra);

        // Busca a próxima ocorrência
        ocorrencia = strstr(ocorrencia + tamanhoNovaPalavra, palavraAlvo);
    }
}

int main()
{
    char A[100], B[100], C[100];
    
    printf("Digite a String A: ");
    fgets(A, sizeof(A), stdin);
    
    printf("\nDigite a frase que sera substiuida: ");
    fgets(B, sizeof(B), stdin);
    B[strcspn(B, "\n")] = '\0';
    
    printf("\nDigite a frase que substituira: ");
    fgets(C, sizeof(C), stdin);
    C[strcspn(C, "\n")] = '\0';
    
    substituirPalavra(A, B, C);
    
    printf("\n%s",A);
    

    return 0;
}
