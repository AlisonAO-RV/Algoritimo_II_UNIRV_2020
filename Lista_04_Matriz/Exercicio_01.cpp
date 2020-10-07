/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Matrizes
 * EXERCICIO 01
 */

#include <stdio.h>

int main()
{
    int ordenN = 0;

    printf("Informe Valor de n: ");
    scanf("%d", &ordenN);

    int matriz[ordenN][ordenN];

    printf("|\n");

    for (int i = 0; i < ordenN; i++)
    {
        for (int j = 0; j < ordenN; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < ordenN; i++)
    {
        for (int j = 0; j < ordenN; j++)
        {
            printf("| %d ", matriz[i][j]);
        }
        printf("|\n");
    }
}
