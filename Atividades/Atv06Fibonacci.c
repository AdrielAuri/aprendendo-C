#include <stdio.h>
#include <stdlib.h>
// 0 1 1 2 3 5 8 11 13
// A sequência começa realmente a partir do '2'

/*0               1          1      2 3 5 8 11 13
2°termo        1°termo     atual



0   1             1         2       3 5 8 11 13
  2°termo      1°termo    atual




0 1      1          2        3        5 8 11 13
        1°termo    2°termo    atual



0 1 1    2           3        5        8 11 13
        1°termo   2°termo    atual
 */

int main()
{
    int primeirotermo, segundotermo, termoatual;
    int n;

    primeirotermo = 1;
    segundotermo = 0;

    do
    {
        printf("Qual o enesimo termo desejado?: ");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("Favor escolher um termo maior ou igual a zero!");
            printf("\nAperte ENTER!");
            getchar();
            getchar();
            system("clear");
        }
    } while (n < 0);
    printf("0 1 ");

    for (int i = 0; i < n; i++)
    {
        termoatual = primeirotermo + segundotermo;
        printf("%d ", termoatual);
        segundotermo = primeirotermo;
        primeirotermo = termoatual;
    }

    return 0;
}
