/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 10
 */

#include <stdio.h>

int main()
{
    int vetorF[20];
    int vetorG[20];

    printf("| Digite valores do VetorF\n");

    for (int i = 0; i < 20; i++)
    {
        printf("| %d/20: ", (i + 1));
        scanf("%d", &vetorF[i]);
    }

    printf("| Digite valores do VetorG\n");

    for (int i = 0; i < 20; i++)
    {
        printf("| %d/20: ", (i + 1));
        scanf("%d", &vetorG[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        printf("| %02d:  %02d x %02d  =  %03d\n", (i + 1), vetorF[i], vetorG[i], (vetorF[i] * vetorG[i]));
    }
}
