/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Matrizes
 * EXERCICIO 05
 */

#include <stdio.h>

int main()
{
    int matrizA[10][10];
    int soma = 0;

    printf("Matriz A\n");
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            matrizA[i - 1][j - 1] = i * j;
            printf("| %4.0d ", matrizA[i - 1][j - 1]);
        }
        printf("|\n");
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            soma += matrizA[j][i];
        }
        printf("| %4.0d ", soma);
        soma = 0;
    }
    printf("|\n");
}
