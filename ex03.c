/******************************************************************************

Fa ̧ca um programa para detectar se um dado eletrˆonico  ́e viciado
1 Forne ̧ca quantas vezes o dado ser ́a lan ̧cado, por exemplo: 1000
2 A quantidade de ocorrˆencias de cada face deve ser armazenada
3 Retorne para o usu ́ario a n ́umero de ocorrˆencias e o percentual de cada face
Utilize a Fun ̧c ̃ao rand() (Ex.: rand() % 6 + 1 – gera um n ́umero aleat ́orio entre 1 e 6)

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    float y,a=0,b=0,c=0,d=0,e=0,f=0;
    int x,i;
    
    printf("Quantas vezes o dados sera lancado? ");
    scanf("%d",&x);
    
    float vet[x];
    
    for(i=0;i<x;i++){
        float y = (rand() % 6) + 1;
        vet[i]=y;
        
        if(y==1){
            a++;
        }
        else if(y==2){
            b++;
        }
        else if(y==3){
            c++;
        }
        else if(y==4){
            d++;
        }
        else if(y==5){
            e++;
        }
        else if(y==6){
            f++;
        }
    }
    
    a=a/x;
    b=b/x;
    c=c/x;
    d=d/x;
    e=e/x;
    f=f/x;
    
    
    for(i=0;i<x;i++){
    printf("%f\n",vet[i]);}
    
    printf("\n\n");
    
    printf("Frequencia do numero 1: %f \n",a);
    printf("Frequencia do numero 1: %f \n",b);
    printf("Frequencia do numero 1: %f \n",c);
    printf("Frequencia do numero 1: %f \n",d);
    printf("Frequencia do numero 1: %f \n",e);
    printf("Frequencia do numero 1: %f \n",f);

    return 0;
}
