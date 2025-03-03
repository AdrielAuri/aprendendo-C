#include <stdio.h>
#include <string.h>

int main()
{
    int qtd; // Quantidade de pessoas
   
    printf("Quantas pessoas vão cobrar: ");
    scanf("%d", &qtd);
   
    char cliente[qtd][100]; // Array para armazenar nomes dos clientes
    float preco[qtd]; // Array para armazenar os gastos de cada cliente
    float maiorgasto = 0;
    float segundogasto = 0;
    float terceirogasto = 0;
   
    char comprador1[100], comprador2[100], comprador3[100];
   
    for(int i = 0; i < qtd; i++) {
        printf("Nome do cliente: ");
        scanf("%s", cliente[i]);
       
        printf("Quanto %s gastou: ", cliente[i]);
        scanf("%f", &preco[i]);
       
        printf("\n");
    }
   
    for(int i = 0; i < qtd; i++) {
        if(preco[i] > maiorgasto) {
            terceirogasto = segundogasto;
            segundogasto = maiorgasto;
            maiorgasto = preco[i];
            strcpy(comprador3, comprador2);
            strcpy(comprador2, comprador1);
            strcpy(comprador1, cliente[i]);
        }
        else if(preco[i] > segundogasto) {
            terceirogasto = segundogasto;
            segundogasto = preco[i];
            strcpy(comprador3, comprador2);
            strcpy(comprador2, cliente[i]);
        }
        else if(preco[i] > terceirogasto) {
            terceirogasto = preco[i];
            strcpy(comprador3, cliente[i]);
        }
    }
   
    printf("Cliente %s: Maior valor gasto: %.2f\nCliente %s: Segundo maior valor gasto: %.2f\nCliente %s: Terceiro maior valor gasto: %.2f\n", comprador1, maiorgasto, comprador2, segundogasto, comprador3, terceirogasto);
    return 0;
}