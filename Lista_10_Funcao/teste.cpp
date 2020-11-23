#include <stdio.h>

void FunPrint(int vet[], int n)
{
    printf("\nVetor Ordenado\n");
    for (int i = 0; i < n; i++)
    {
        printf("| %d ", vet[i]);
    }
    printf("|\n");
}

void Ordenar(int vetor[], int n)
{
    int auxiliar = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }
}

int main()
{

    int N = 5;
    int M = 5;

    int VetorA[5] = {5, 9, 4, 8, 1};
    int VetorB[5] = {8, 2, 9, 4, 6};

    Ordenar(VetorA, N);
    Ordenar(VetorB, M);

    FunPrint(VetorA, N);
    FunPrint(VetorB, M);
}