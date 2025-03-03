#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
   
    int salario, prest, valor;
   
    printf("Digite seu salário: ");
    scanf("%d", &salario);
   
    printf("\nDigite o valor das prestação: ");
    scanf ("%d", &prest);
   
    valor = salario*0.2;
   
    if (prest > valor){
        printf("\nEmprestimo não concedido");
    }
    else {
        printf("\nEmprestimo concedido");
    }
 
    return 0;
}