/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 07
 */

#include <stdio.h>

int main()
{
    int vetorD[60];
    int auxiliar = 0;

    for (int i = 0; i < 60; i++)
    {
        printf("Digite a valor %d/60: ", (i + 1));
        scanf("%d", &vetorD[i]);
    }

    for (int j = 0; j < 30; j++)
    {
        auxiliar = vetorD[j];
        vetorD[j] = vetorD[j + 30];
        vetorD[j + 30] = auxiliar;
    }

    for (int k = 0; k < 60; k++)
    {
        printf("Posição %d: %d\n", (k + 1), vetorD[k]);
    }
}
