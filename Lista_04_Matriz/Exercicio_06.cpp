/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Matrizes
 * EXERCICIO 06
 */

#include <stdio.h>

int main()
{
    int matrizA[10][10];
    int soma = 0;
    int somaLinha = 0;
    int vetorZ = 0;

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
    printf("Soma das Colunas\n");
    for (int i = 0; i < 10; i++)
    {
        printf("| C %2.0d ", i + 1);
    }
    printf("|\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            soma += matrizA[j][i];
        }
        printf("| %4.0d ", soma);
        soma = 0;
    }
    printf("|\n\n");

    printf("Soma das Linhas\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            somaLinha += matrizA[i][j];
        }
        printf("Linha %2.0d | %4.0d ", i + 1, somaLinha);
        printf("|\n");
        somaLinha = 0;
    }

    printf("\n");
    printf("Imprime Diagonal Principal\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                printf("| %4.0d ", matrizA[i][j]);
            }
            else
            {
                printf("| %4.0d ", vetorZ);
            }
        }
        printf("|\n");
    }

    printf("\n");
    printf("Imprime Diagonal Secundaria\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (9 - i == j)
            {
                printf("| %4.0d ", matrizA[i][j]);
            }
            else
            {
                printf("| %4.0d ", vetorZ);
            }
        }
        printf("|\n");
    }

    printf("\n");
}