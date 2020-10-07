/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Matrizes
 * EXERCICIO 03
 */

#include <stdio.h>

int main()
{

    int matrizA[10][10];
    int matrizB[10][10];

    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            matrizA[i - 1][j - 1] = i * j;
            printf("| %3.0d ", matrizA[i - 1][j - 1]);
        }
        printf("|\n");
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (matrizA[i][j] % 2 == 0)
            {
                matrizB[i][j] = 0;
            }
            else
            {
                matrizB[i][j] = 1;
            }

            printf("|   %d ", matrizB[i][j]);
        }
        printf("|\n");
    }
}
