/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Matrizes Lista 2
 * EXERCICIO 06
 */

#include <stdio.h>

int main()
{

    int matrizA[7][5];
    int matrizB[6][6];

    printf("\n| MATRIZ A\n");
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i == 0) || (i == 6))
            {
                matrizA[i][j] = 1;
                printf("|\33[0;36m %d \33[0m", matrizA[i][j]);
            }
            else if ((j == 0) || (j == 4))
            {
                matrizA[i][j] = 1;
                printf("|\33[0;36m %d \33[0m", matrizA[i][j]);
            }
            else
            {
                matrizA[i][j] = 2;
                printf("|\33[0;33m %d \33[0m", matrizA[i][j]);
            }

            // printf("| \33[0;33m%d\33[0m ", matrizA[i][j]);
            // printf("| %d ", matrizA[i][j]);
        }
        printf("|\n");
    }

    printf("\n| MATRIZ B\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == j)
            {
                matrizB[i][j] = 1;
                printf("|\33[0;33m %d \33[0m", matrizB[i][j]);
            }
            else if (i == (5 - j))
            {
                matrizB[i][j] = 2;
                printf("|\33[0;36m %d \33[0m", matrizB[i][j]);
            }
            else
            {
                matrizB[i][j] = 3;
                printf("|\033[0;32m %d \033[0m", matrizB[i][j]);
            }

            // printf("| %d ", matrizB[i][j]);
        }
        printf("|\n");
    }
}