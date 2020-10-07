/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 01
 */

#include <stdio.h>

int main()
{
    int A[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor da posição %d:", (i + 1) );
        scanf("%d", &A[i]);
    }

    printf("\n Resultado do Vetor \n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Posição %d: %d \n", (i + 1), A[i]);
    }
}
