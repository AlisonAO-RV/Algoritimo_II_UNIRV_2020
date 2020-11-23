/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 05 - funcao
 */

#include <bits/stdc++.h>
using namespace std;

void FunPrint(int vet2[], int n)
{
    for (int i = 0; i < n; i++)
        printf("| %2d ", vet2[i]);
    printf("|\n");
}

void FunCarregaVetorRandon(int vet[], int n)
{
    for (int i = 0; i < n; i++)
        vet[i] = (rand() % 15) + 1;
}

void FunOrdenacao(int vet[], int n)
{
    int auxiliar = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                auxiliar = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = auxiliar;
            }
        }
    }
}

void FunIntercadado(int vetA[], int vetB[], int vetC[], int n, int m)
{

    int cont1 = 0;
    int contN = 0;
    int contM = 0;

    while (cont1 < n + m)
    {
        if (contN < n)
        {
            if (vetA[contN] <= vetB[contM])
            {
                vetC[cont1] = vetA[contN];
                contN++;
                cont1++;
            }
            else if (contM == m)
            {
                vetC[cont1] = vetA[contN];
                contN++;
                cont1++;
            }
        }

        if (contM < m)
        {
            if (vetA[contN] >= vetB[contM])
            {
                vetC[cont1] = vetB[contM];
                contM++;
                cont1++;
            }
            else if (contN == n)
            {
                vetC[cont1] = vetB[contM];
                contM++;
                cont1++;
            }
        }
    }
}

int main()
{
    srand((int)time(0));

    int N = (rand() % 10) + 1;
    int M = (rand() % 10) + 1;

    int vetorA[N];
    int vetorB[M];
    int vetorC[N + M];

    FunCarregaVetorRandon(vetorA, N);
    FunCarregaVetorRandon(vetorB, M);

    printf("VetorA com %d elementos\n", N);
    FunPrint(vetorA, N);
    printf("VetorB com %d elementos\n", M);
    FunPrint(vetorB, M);

    FunOrdenacao(vetorA, N);
    FunOrdenacao(vetorB, M);

    printf("\n");
    printf("VetorA Ordenado\n");
    FunPrint(vetorA, N);
    printf("VetorB Ordenado\n");
    FunPrint(vetorB, M);

    FunIntercadado(vetorA, vetorB, vetorC, N, M);

    printf("\n");
    printf("VetorC Intercalado\n");
    FunPrint(vetorC, (N + M));
}
