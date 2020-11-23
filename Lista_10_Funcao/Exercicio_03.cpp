/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 03 - funcao
 */

#include <bits/stdc++.h>
using namespace std;

int vetorA[10];
int vetorB[10];

void FunPrint(int vet[]) {
    for (int i = 0; i < 10; i++)
        printf("| %4d ", vet[i]);
    printf("|\n");
}

void FunCarregaVetorRandon(int vet[]) {
    for (int i = 0; i < 10; i++)
        vet[i] = (rand() % 7) + 1;
}

void FunFatoriaVetor(int vetA[], int vetB[]) {
    int Fat = 0;
    for (int i = 0; i < 10; i++)
    {
        Fat = vetA[i];
        for (int j = Fat - 1; j > 0; j--)
            Fat = Fat * j;
        vetB[i] = Fat;
    }
}

int main()
{
    srand((int)time(0));

    FunCarregaVetorRandon(vetorA);

    cout << "Vetor A Numero Inteiro \n";
    FunPrint( vetorA );

    FunFatoriaVetor(vetorA, vetorB);

    cout << "Vetor B Fatoração de vetor A \n";
    FunPrint( vetorB ); 
    
}
