#include <stdio.h>

int main()
{
    float no1, no2, res;
    int operacao;

    printf("CALCULADORA BASICA \n");

    printf("\nEscolha uma das opcões: \n");
    printf("\n1-SOMA \n2-SUBTRACAO \n3-MULTIPLICACAO \n4-DIVISAO \n");
    printf("\nInforme aqui: ");
    scanf("%d", &operacao);
    system("clear");

    printf("digite o n1: ");
    scanf("%f", &no1);

    printf("digite o n2: ");
    scanf("%f", &no2);

    if (operacao == 1)
    {
        res = no1 + no2;
        printf("o resultado final entre %.2f e %.2f eh = %.2f", no1, no2, res);
    }

    else if (operacao == 2)
    {
        res = no1 - no2;
        printf("o resultado final entre %.2f e %.2f eh = %.2f", no1, no2, res);
    }

    else if (operacao == 3)
    {
        res = no1 * no2;
        printf("o resultado final entre %.2f e %.2f eh = %.2f", no1, no2, res);
    }

    else if (operacao == 4)
    {
        res = no1 / no2;
        printf("o resultado final entre %.2f e %.2f eh = %.2f", no1, no2, res);
    }
    else
    {
        printf("erro");
    }
    return 0;
}