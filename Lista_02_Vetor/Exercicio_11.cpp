/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 11
 */

#include <stdio.h>

int main()
{
    int vetorK[10];
    int vetorN[10];
    int vetorM[10];

    printf("| Digite valores do VetorK\n");

    for (int i = 0; i < 10; i++)
    {
        printf("| %d/10: ", (i + 1));
        scanf("%d", &vetorK[i]);
    }

    printf("| Digite valores do VetorN\n");

    for (int i = 0; i < 10; i++)
    {
        printf("| %d/10: ", (i + 1));
        scanf("%d", &vetorN[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        vetorM[i] = vetorK[i] - vetorN[i];
        printf("| %02d:  %02d x %02d  =  %03d\n", (i + 1), vetorK[i], vetorN[i], vetorM[i]);
    }
}
