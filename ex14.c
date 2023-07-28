/*****************************************************************************

Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre 
um crime. As perguntas são:
"Telefonou para a vítima?"
"Esteve no local do crime?"
"Mora perto da vítima?"
"Devia para a vítima?"
"Já trabalhou com a vítima?" 
O programa deve no final emitir uma classificação sobre a participação da 
pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve ser 
classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino".
Caso contrário, ele será classificado como "Inocente".

*******************************************************************************/

#include <stdio.h>

int main()
{
    char t[5];
    int i, s=0;
    
    printf("Telefonou para a vítima? (s/n)\n");
    scanf(" %c", &t[0]);
    
    printf("Esteve no local do crime? (s/n)\n");
    scanf(" %c", &t[1]);
    
    printf("Mora perto da vítima? (s/n)\n");
    scanf(" %c", &t[2]);
    
    printf("Devia para a vítima? (s/n)\n");
    scanf(" %c", &t[3]);
    
    printf("Já trabalhou com a vítima? (s/n)\n");
    scanf(" %c", &t[4]);
        
    printf("\n\n");    
    
        
    for(i=0; i<5; i++){
        if(t[i]=='s'){
            s++;}
    }
    
    if (s==2){
        printf("Suspeito");}
    
    else if (s>=3 && s<=4){
        printf("Cumplice");}
        
    else if (s==5){
        printf("Assassino");}
        
    else{
        printf("Inocente");}
        
    return 0;
}
