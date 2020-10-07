/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 01
 */

#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <time.h>

int main()
{
    int vetorBubbleSort[] = {3, 4, 9, 2, 5, 8, 2, 1, 7, 4, 6, 2, 9, 8, 5, 1};
    int SelectionSort[] = {3, 4, 9, 2, 5, 8, 2, 1, 7, 4, 6, 2, 9, 8, 5, 1};
    int InsertionSort[] = {3, 4, 9, 2, 5, 8, 2, 1, 7, 4, 6, 2, 9, 8, 5, 1};
    int auxiliar = 0;
    int minimo = 0;
    int x = 0;
    printf("\n\n");

    printf("| ORIGINAL\n");
    for (int i = 0; i < 16; i++)
    {
        printf("| %d ", vetorBubbleSort[i]);
    }
    printf("|\n\n");

    printf("|\33[0;33m Bubble Sort\33[0m\n");
    for (long int i = 0; i < 16 - 1; i++)
    {
        for (long int j = i + 1; j < 16; j++)
        {
            if (vetorBubbleSort[i] > vetorBubbleSort[j])
            {
                auxiliar = vetorBubbleSort[i];
                vetorBubbleSort[i] = vetorBubbleSort[j];
                vetorBubbleSort[j] = auxiliar;
            }
        }
    }
    for (int i = 0; i < 16; i++)
    {
        printf("|\33[0;33m %d \33[0m", vetorBubbleSort[i]);
    }
    printf("|\n\n");

    auxiliar = 0;

    printf("|\33[0;34m Selection Sort\33[0m\n");
    for (int i = 0; i < 16 - 1; i++)
    {
        minimo = i;
        for (int j = i + 1; j < 16; j++)
        {
            if (SelectionSort[minimo] > SelectionSort[j])
            {
                minimo = j;
            }
        }
        if (i != minimo)
        {
            auxiliar = SelectionSort[i];
            SelectionSort[i] = SelectionSort[minimo];
            SelectionSort[minimo] = auxiliar;
        }
    }
    for (int i = 0; i < 16; i++)
    {
        printf("|\33[0;34m %d \33[0m", SelectionSort[i]);
    }
    printf("|\n\n");

    auxiliar = 0;

    printf("|\33[0;35m Insertion Sort\33[0m\n");
    for (int i = 1; i < 16; i++)
    {
        auxiliar = InsertionSort[i];
        x = i - 1;
        while ((x >= 0) && (InsertionSort[x] > auxiliar))
        {
            InsertionSort[x + 1] = InsertionSort[x];
            x = x - 1;
        }
        InsertionSort[x + 1] = auxiliar;
    }
    for (int i = 0; i < 16; i++)
    {
        printf("|\33[0;35m %d \33[0m", InsertionSort[i]);
    }
    printf("|\n\n");
}