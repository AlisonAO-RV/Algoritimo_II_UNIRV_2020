/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 03 - Insertion Sort
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetor[6] = {31, 41, 59, 26, 41, 58};
    int aux = 0;
    int X = 0;

    printf("Vetor Original\n");
    for (int i = 0; i < 6; i++)
    {
        printf("| %d ", vetor[i]);
    }
    printf("|\n");

    for (int i = 1; i < 6; i++)
    {
        aux = vetor[i];
        X = i - 1;
        while ((X >= 0) && (vetor[X] < aux))
        {
            vetor[X + 1] = vetor[X];
            X = X - 1;
        }
        vetor[X + 1] = aux;
    }

    printf("\nVetor Ordenado\n");
    for (int i = 0; i < 6; i++)
    {
        printf("| %d ", vetor[i]);
    }
    printf("|\n");
}
