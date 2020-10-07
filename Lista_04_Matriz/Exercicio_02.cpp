/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Matrizes
 * EXERCICIO 02
 */

#include <stdio.h>

int main()
{
    int matrizN3[3][3];
    int primeiraLinha = 0;
    int terceiraColuna = 0;
    int diagonalPrincipal = 0;
    int diagonalSecundaria = 0;
    int somaTotal = 0;

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            matrizN3[i - 1][j - 1] = i * j;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("| %d ", matrizN3[i][j]);

            if (i == 0)
                primeiraLinha += matrizN3[i][j];

            if (j == 2)
                terceiraColuna += matrizN3[i][j];

            if (j == i)
                diagonalPrincipal += matrizN3[i][j];

            if ((2-i) == j)
                diagonalSecundaria += matrizN3[i][j];
            
            somaTotal += matrizN3[i][j];
        }
        printf("|\n");
    }

    printf("\nSoma da Primeira Linha: %d", primeiraLinha);
    printf("\nSoma da Terceira Coluna: %d", terceiraColuna);
    printf("\nSoma da Diagonal Principal: %d", diagonalPrincipal);
    printf("\nSoma da Diagonal Secundaria: %d", diagonalSecundaria);
    printf("\nSoma de Todos os Elementos: %d", somaTotal);
    printf("\n\n");
}