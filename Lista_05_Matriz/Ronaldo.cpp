#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main()
{

    int posix, posiy;
    int maior = 0, menor = 0;
    int a[4][7];
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if ((i == 1) || (j == 1))
            {
                maior = a[i][j];
            }
            printf("Digite o número da linha", i, ":");
            printf("Da coluna", j, ": ");
            scanf("%d", &a[i][j]);

            if (maior < a[i][j])
            {
                maior = a[i][j];
                posix = i;
                posiy = j;
            }
        }
        printf("\n");
    }
    for (int j = 0; j < 7; j++)
    {
        if (j == 1)
        {
            menor = a[posix][j];
        }
        if (a[posix][j] < a[posix][j] + 1)
        {
            menor = a[posix][j];
        }

        printf("O MINMAX é %d %d", menor, j, ".");
    }
}