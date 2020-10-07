/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Matrizes
 * EXERCICIO 04
 */

#include <stdio.h>

int main()
{
    int matrizA[5][10];
    int matrizB[10][5];
    int matrizC[5][5];
    int soma = 0;

    printf("\n");
    printf("Matriz A\n");
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            matrizA[i - 1][j - 1] = i * j;
            printf("| %3.0d ", matrizA[i - 1][j - 1]);
        }
        printf("|\n");
    }

    printf("\n");
    printf("Matriz B\n");
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            matrizB[i - 1][j - 1] = i * j;
            printf("| %3.0d ", matrizB[i - 1][j - 1]);
        }
        printf("|\n");
    }

    printf("\n");
    printf("Matriz C\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                soma += matrizA[i][k] * matrizB[k][j];
            }
            matrizC[j][i] = soma;
            printf("| %5.0d ", matrizC[j][i]);
            soma = 0;
        }
        printf("|\n");
    }
}
