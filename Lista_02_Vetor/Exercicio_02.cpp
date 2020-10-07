/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 02
 */

#include <stdio.h>

int main()
{
    int V[6];
    int ContadorNegativo = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o %d° Número:", i + 1);
        scanf("%d", &V[i]);
        if (V[i] < 0)
        {
            ContadorNegativo += 1;
        }
    }

    printf("\nQuantidade de Números Negativos: %d \n", ContadorNegativo);

    for (int i = 0; i < 6; i++)
    {
        if (V[i] < 0)
        {
            printf("| Posição %d: |  Valor: %d |\n", i, V[i]);
        }
    }
}
