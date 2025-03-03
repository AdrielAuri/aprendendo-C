#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
   
    char nome[5][200];
    int idade[5];
    int referencia=999999999;    
    char usuario[200];
   
    for (int i=0; i<5; i++){
        printf("Digite seu nome: ");
        scanf("%s", nome[i]);
       
        printf("Digite sua idade: ");
        scanf("%d", &idade[i]);
       
        if (idade[i]<referencia){
            referencia = idade[i];
           
            strcpy(usuario, nome[i]);
        }
    }
       
         printf("O mais novo é: %s", usuario);
   
    return 0;
}