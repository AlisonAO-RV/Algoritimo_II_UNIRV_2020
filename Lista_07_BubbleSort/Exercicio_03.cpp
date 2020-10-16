/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 03
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bool ordenado = true;

    for (int j = 0; j < 9; j++)
    {
        if (vetor[j] > vetor[j + 1])
        {
            ordenado = false;
        }
    }

    if (ordenado)
    {
        printf("O Vetor Esta Ordenado!\n");
    }
    else
    {
        printf("O Vetor Esta Desordenado!\n");
    }
}
