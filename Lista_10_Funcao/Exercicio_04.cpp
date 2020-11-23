/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 04 - funcao
 */

#include <bits/stdc++.h>
using namespace std;

int VetrorA[10];
int VetrorB[10];
int VetrorC[20];

void FunPrint(int vet2[], int n) {
    for (int i = 0; i < n; i++)
        printf("| %2d ", vet2[i]);
    printf("|\n");
}

void FunCarregaVetorRandon(int vet[], int n) {
    for (int i = 0; i < n; i++)
        vet[i] = (rand() % 50) + 1;
}

void FunUniao(int vetA[], int vetB[], int vetC[], int n) {
    for (int i = 0; i < n; i++)
        vetC[i] = vetA[i];

    for (int i = 0; i < n; i++)
        vetC[i + n] = vetB[i];
}

int main()
{
    srand((int)time(0));
    
    FunCarregaVetorRandon(VetrorA, 10);
    FunCarregaVetorRandon(VetrorB, 10);

    printf("VetorA\n");
    FunPrint(VetrorA, 10);
    printf("VetorB\n");
    FunPrint(VetrorB, 10);

    FunUniao(VetrorA, VetrorB, VetrorC, 10);
    printf("VetorC\n");
    FunPrint(VetrorC, 20);

}
