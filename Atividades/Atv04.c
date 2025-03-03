#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
   
    int no[5], cont=0;
   
    for (int i=0; i<5; i++){
        printf("Digite um número: ");
        scanf("%d", &no[i]);
       
        if(no[i]>0 && no[i]<100){
           
            cont = cont + 1;
        }
       
    }
   
    printf ("\nTem %d números entre 0 e 100", cont);
    return 0;
}