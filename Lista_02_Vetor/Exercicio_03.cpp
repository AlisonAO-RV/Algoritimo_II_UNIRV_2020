/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 03
 */

#include <stdio.h>

int main()
{
    int A[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d° Número: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\nResultado e Posições Menores que 10\n\n");

    for (int i = 0; i < 10; i++)
    {
        if (A[i] <= 10)
        {
            printf("| Posição %d: |  Valor: %d |\n", (i + 1), A[i]);
        }
    }
}
