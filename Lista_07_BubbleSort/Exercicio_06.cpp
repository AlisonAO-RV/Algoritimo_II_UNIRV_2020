/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 06
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[9] = {3, 4, 8, 9, 7, 5, 2, 6, 1};
    int vetorB[18] = {7, 13, 3, 4, 20, 5, 8, 9, 12, 10, 8, 7, 5, 2, 2, 3, 6, 1};
    int vetorC[13] = {20, 18, 14, 13, 12, 10, 9, 8, 7, 4, 3, 2, 1};
    int vetorD[13] = {1, 2, 3, 4, 7, 8, 9, 10, 12, 13, 15, 18, 20};
    int auxiliar = 0;
    int contadorTroca = 0;
    int contadorComparacao = 0;

    printf("Vetor A Original\n");
    for (int i = 0; i < 9; i++)
    {
        printf("| %d ", vetorA[i]);
    }
    printf("|\n");

    auxiliar = 0;
    for (int i = 1; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (vetorA[j] > vetorA[j + 1])
            {
                auxiliar = vetorA[j];
                vetorA[j] = vetorA[j + 1];
                vetorA[j + 1] = auxiliar;
                contadorTroca++;
            }
            contadorComparacao++;
        }
    }

    printf("Vetor A Ordenado\n");
    for (int i = 0; i < 9; i++)
    {
        printf("| %d ", vetorA[i]);
    }
    printf("|\n");

    printf("Comparação: %d \n", contadorComparacao);
    printf("Troca: %d \n", contadorTroca);
    if (contadorComparacao < 72)
    {
        printf("A mudança foi Eficaz!\n");
    }
    else {
        printf("A mudança Não foi Eficaz!\n");
    }
    


    //---------------------------------------------

    printf("\n\nVetor B Original\n");
    for (int i = 0; i < 18; i++)
    {
        printf("| %d ", vetorB[i]);
    }
    printf("|\n");

    contadorTroca = 0;
    contadorComparacao = 0;
    auxiliar = 0;
    for (int i = 1; i < 18; i++)
    {
        for (int j = 0; j < 18 - i; j++)
        {
            if (vetorB[j] > vetorB[j + 1])
            {
                auxiliar = vetorB[j];
                vetorB[j] = vetorB[j + 1];
                vetorB[j + 1] = auxiliar;
                contadorTroca++;
            }
            contadorComparacao++;
        }
    }

    printf("Vetor B Ordenado\n");
    for (int i = 0; i < 18; i++)
    {
        printf("| %d ", vetorB[i]);
    }
    printf("|\n");

    printf("Comparação: %d \n", contadorComparacao);
    printf("Troca: %d \n", contadorTroca);
    if (contadorComparacao < 306)
    {
        printf("A mudança foi Eficaz!\n");
    }
    else {
        printf("A mudança Não foi Eficaz!\n");
    }

    //---------------------------------------------

    printf("\n\nVetor C Original\n");
    for (int i = 0; i < 13; i++)
    {
        printf("| %d ", vetorC[i]);
    }
    printf("|\n");

    contadorTroca = 0;
    contadorComparacao = 0;
    auxiliar = 0;
    for (int i = 1; i < 13; i++)
    {
        for (int j = 0; j < 13 - i; j++)
        {
            if (vetorC[j] > vetorC[j + 1])
            {
                auxiliar = vetorC[j];
                vetorC[j] = vetorC[j + 1];
                vetorC[j + 1] = auxiliar;
                contadorTroca++;
            }
            contadorComparacao++;
        }
    }

    printf("Vetor C Ordenado\n");
    for (int i = 0; i < 13; i++)
    {
        printf("| %d ", vetorC[i]);
    }
    printf("|\n");

    printf("Comparação: %d \n", contadorComparacao);
    printf("Troca: %d \n", contadorTroca);
    if (contadorComparacao < 156)
    {
        printf("A mudança foi Eficaz!\n");
    }
    else {
        printf("A mudança Não foi Eficaz!\n");
    }

    //---------------------------------------------

    printf("\n\nVetor D Original\n");
    for (int i = 0; i < 13; i++)
    {
        printf("| %d ", vetorD[i]);
    }
    printf("|\n");

    contadorTroca = 0;
    contadorComparacao = 0;
    auxiliar = 0;
    for (int i = 1; i < 13; i++)
    {
        for (int j = 0; j < 13 - i; j++)
        {
            if (vetorD[j] > vetorD[j + 1])
            {
                auxiliar = vetorD[j];
                vetorD[j] = vetorD[j + 1];
                vetorD[j + 1] = auxiliar;
                contadorTroca++;
            }
            contadorComparacao++;
        }
    }

    printf("Vetor D Ordenado\n");
    for (int i = 0; i < 13; i++)
    {
        printf("| %d ", vetorD[i]);
    }
    printf("|\n");

    printf("Comparação: %d \n", contadorComparacao);
    printf("Troca: %d \n", contadorTroca);
    if (contadorComparacao < 156)
    {
        printf("A mudança foi Eficaz!\n");
    }
    else {
        printf("A mudança Não foi Eficaz!\n");
    }
}
