#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void erro(){
        printf("\nInforme uma opção válida\n");
        printf("\nAperte ENTER para limpar a tela e prosseguir");
        getchar();
        getchar();
        system("clear");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
   
    int roupa, quant, tamanho;
    float valor, valor2=0;
    char repetir;
   
    do{
    do{
    printf("===================================\n");
    printf(" SEJA BEM-VINDO AO OUTLET TUCANOS\n");
    printf("===================================\n");
    printf("\nEscolha de 1 a 3 uma das opções a seguir:\n");
    printf("\n1 - CAMISA  |  2 - CALÇA  |  3 - CASACO\n");
    scanf("%d", &roupa);
    system("clear");
   
    if(roupa>=4 || roupa<=0){
      erro();
  }
}
    while(roupa>=4 || roupa<=0);
   
    switch(roupa){
        case 1:
        do{
        printf("Informe de 1 a 3 o tamanho da camisa:");
        printf("\n=====================================\n");
        printf("\n1-P | 2-M | 3-G:\n");
        scanf ("%d", &tamanho);
       
        if(tamanho>=4 || tamanho<=0){
          erro();
    }
}
        while(tamanho>=4 || tamanho<=0);
       
        if(tamanho == 1){
            do{
            printf("\nInforme quantas unidades deseja comprar: ");
            scanf ("%d", &quant);
            system("clear");
           
            if(quant<0){
               erro();
    }
}
            while(quant<0);
           
            valor = 30 * quant;
            printf("Produto escolhido: Camisa\nUnidade do produto no tamanho P: R$30,00");
            printf("\nQuantidade escolhida: %d", quant);
            printf("\nPreço total dos itens solicitados: R$%.2f", valor);
}
        else if(tamanho == 2){
            do{
            printf("\nInforme quantas unidades deseja comprar: ");
            scanf ("%d", &quant);
            system("clear");
           
            if(quant<0){
               erro();
            }
        }
            while(quant<0);
           
            valor = 35 * quant;
            printf("Produto escolhido: Camisa\nUnidade do produto no tamanho M: R$35,00");
            printf("\nQuantidade escolhida: %d", quant);
            printf("\nPreço total dos itens solicitados: R$%.2f", valor);
        }
        else if(tamanho == 3){
            do{
            printf("\nInforme quantas unidades deseja comprar: ");
            scanf ("%d", &quant);
            system("clear");
           
            if(quant<0){
               erro();
            }
        }
            while(quant<0);
           
            valor = 40 * quant;
            printf("Produto escolhido: Camisa\nUnidade do produto no tamanho G: R$40,00");
            printf("\nQuantidade escolhida: %d", quant);
            printf("\nPreço total dos itens solicitados: R$%.2f", valor);
       }
        break;
       
        case 2:
       do{
        printf("Informe de 1 a 3 o tamanho da calça: ");
        printf("\n====================================");
        printf("\n1-P | 2-M | 3-G:\n");
        scanf ("%d", &tamanho);
       
        if(tamanho>=4 || tamanho<=0){
          erro();
    }
}
        while(tamanho>=4 || tamanho<=0);
       
        if(tamanho == 1){
            do{
            printf("\nInforme quantas unidades deseja comprar: ");
            scanf ("%d", &quant);
            system("clear");
           
            if(quant<0){
               erro();
    }
}
            while(quant<0);
           
            valor = 90 * quant;
            printf("Produto escolhido: Calça\nUnidade do produto no tamanho P: R$90,00");
            printf("\nQuantidade escolhida: %d", quant);
            printf("\nPreço total dos itens solicitados: R$%.2f", valor);
}
        else if(tamanho == 2){
            do{
            printf("\nInforme quantas unidades deseja comprar: ");
            scanf ("%d", &quant);
            system("clear");
           
            if(quant<0){
               erro();
            }
        }
            while(quant<0);
           
            valor = 100 * quant;
            printf("Produto escolhido: Calça\nUnidade do produto no tamanho M: R$100,00");
            printf("\nQuantidade escolhida: %d", quant);
            printf("\nPreço total dos itens solicitados: R$%.2f", valor);
        }
        else if(tamanho == 3){
            do{
            printf("\nInforme quantas unidades deseja comprar: ");
            scanf ("%d", &quant);
            system("clear");
           
            if(quant<0){
               erro();
            }
        }
            while(quant<0);
           
            valor = 110 * quant;
            printf("Produto escolhido: Calça\nUnidade do produto no tamanho G: R$110,00");
            printf("\nQuantidade escolhida: %d", quant);
            printf("\nPreço total dos itens solicitados: R$%.2f", valor);
       }
        break;
       
        case 3:
        do{
        printf("Informe de 1 a 3 o tamanho do casaco: ");
        printf("\n=====================================");
        printf("\n1-P | 2-M | 3-G:\n");
        scanf ("%d", &tamanho);
       
        if(tamanho>=4 || tamanho<=0){
          erro();
    }
}
        while(tamanho>=4 || tamanho<=0);
       
        if(tamanho == 1){
            do{
            printf("\nInforme quantas unidades deseja comprar: ");
            scanf ("%d", &quant);
            system("clear");
           
            if(quant<0){
               erro();
    }
}
            while(quant<0);
           
            valor = 70 * quant;
            printf("Produto escolhido: Casaco\nUnidade do produto no tamanho P: R$70,00");
            printf("\nQuantidade escolhida: %d", quant);
            printf("\nPreço total dos itens solicitados: R$%.2f", valor);
}
           
        else if(tamanho == 2){
            do{
            printf("\nInforme quantas unidades deseja comprar: ");
            scanf ("%d", &quant);
            system("clear");
           
            if(quant<0){
               erro();
            }
        }
            while(quant<0);
           
            valor = 80 * quant;
            printf("Produto escolhido: Casaco\nUnidade do produto no tamanho M: R$80,00");
            printf("\nQuantidade escolhida: %d", quant);
            printf("\nPreço total dos itens solicitados: R$%.2f", valor);
        }
        else if(tamanho == 3){
            do{
            printf("\nInforme quantas unidades deseja comprar: ");
            scanf ("%d", &quant);
            system("clear");
           
            if(quant<0){
               erro();
            }
        }
            while(quant<0);
           
            valor = 90 * quant;
            printf("Produto escolhido: Casaco\nUnidade do produto no tamanho G: R$90,00");
            printf("\nQuantidade escolhida: %d", quant);
            printf("\nPreço total dos itens solicitados: R$%.2f", valor);
       }
        break;
    }
   
    printf("\n\nDeseja comprar mais algum item?\n\nDigite S para retornar ao lobby ou N para finalizar a compra: ");
    scanf(" %c", &repetir);
    system("clear");
   
    valor2 = valor + valor2;
    }
   
    while(repetir == 's' || repetir == 'S');
    printf("\n=============================================");
    printf("\n Preço final dos itens solicitados: R$%.2f", valor2);
    printf("\n=============================================");
   
   
      return 0;
}