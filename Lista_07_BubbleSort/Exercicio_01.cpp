/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 01
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetor[9] = {3, 4, 8, 9, 7, 5, 2, 6, 1};
    int auxiliar = 0;

    printf("Vetor Original\n");
    for (int i = 0; i < 9; i++)
    {
        printf("| %d ", vetor[i]);
    }
    printf("|\n");

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }

    printf("\nVetor Ordenado\n");
    for (int i = 0; i < 9; i++)
    {
        printf("| %d ", vetor[i]);
    }
    printf("|\n");
}
