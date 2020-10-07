/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 02
 */

#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <time.h>

clock_t tInicio, tFim;

double BubbleSort(int valor[], int tamanho)
{
    int AUX = 0;
    // BUBBLE SORT
    tInicio = clock();
    for (long int i = 0; i < tamanho - 1; i++)
    {
        for (long int j = i + 1; j < tamanho; j++)
        {
            if (valor[i] > valor[j])
            {
                AUX = valor[i];
                valor[i] = valor[j];
                valor[j] = AUX;
            }
        }
    }
    tFim = clock();

    return (1000 * (double)(tFim - tInicio) / (double)(CLOCKS_PER_SEC));
}

double SelectionSort(int valor[], int tamanho)
{
    int AUX = 0;
    long int minimo = 0;

    // SELECTION SORT
    tInicio = clock();
    for (long int i = 0; i < tamanho - 1; i++)
    {
        minimo = i;
        for (long int j = i + 1; j < tamanho; j++)
        {
            if (valor[minimo] > valor[j])
            {
                minimo = j;
            }
        }
        if (i != minimo)
        {
            AUX = valor[i];
            valor[i] = valor[minimo];
            valor[minimo] = AUX;
        }
    }
    tFim = clock();

    return (1000 * (double)(tFim - tInicio) / (double)(CLOCKS_PER_SEC));
}

double InsertionSort(int valor[], int tamanho)
{
    int AUX = 0;
    long int x = 0;

    // INSERTION SORT
    tInicio = clock();
    for (long int i = 1; i < tamanho; i++)
    {
        AUX = valor[i];
        x = i - 1;
        while ((x >= 0) && (valor[x] > AUX))
        {
            valor[x + 1] = valor[x];
            x = x - 1;
        }
        valor[x + 1] = AUX;
    }
    tFim = clock();

    return (1000 * (double)(tFim - tInicio) / (double)(CLOCKS_PER_SEC));
}

void ranking(double Bubble, double Selection, double Insertion)
{

    int posicao[3] = {1, 2, 3};
    double tempo[3] = {Bubble, Selection, Insertion};
    int AuxP = 0;
    double AuxT = 0;
    double ms = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (tempo[i] > tempo[j])
            {
                AuxP = posicao[i];
                AuxT = tempo[i];
                posicao[i] = posicao[j];
                tempo[i] = tempo[j];
                posicao[j] = AuxP;
                tempo[j] = AuxT;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        switch (posicao[i])
        {
        case 1:
            printf("%d° Bubble:    \33[0;32m%10.4f ms\33[0m ou %7.4f seg\n", (i + 1), tempo[i], (tempo[i] / 1000));
            break;
        case 2:
            printf("%d° Selection: \33[0;32m%10.4f ms\33[0m ou %7.4f seg\n", (i + 1), tempo[i], (tempo[i] / 1000));
            break;
        case 3:
            printf("%d° Insertion: \33[0;32m%10.4f ms\33[0m ou %7.4f seg\n", (i + 1), tempo[i], (tempo[i] / 1000));
            break;
        }
    }
}

void Aleatorio(int valor1[], int valor2[], int valor3[], int tamanho)
{
    srand((int)time(0));

    for (long int i = 0; i < tamanho; i++)
    {
        valor1[i] = (rand() % 1000) + 1;
        valor2[i] = valor1[i];
        valor3[i] = valor1[i];
    }
}

void Ordenado(int valor[], int tamanho)
{
    for (long int i = 0; i < tamanho; i++)
    {
        valor[i] = i + 1;
    }
}

void Desordenado(int valor[], int tamanho)
{
    for (long int i = 0; i < tamanho; i++)
    {
        valor[i] = tamanho - i;
    }
}

int main()
{
    long int tamanhoGrande = 100000;
    int vetorG_Aleatorio1[tamanhoGrande];
    int vetorG_Aleatorio2[tamanhoGrande];
    int vetorG_Aleatorio3[tamanhoGrande];
    int vetorG_Ordenado[tamanhoGrande];
    int vetorG_Desordenado[tamanhoGrande];

    int tamanhoPequeno = 350;
    int vetorP_Aleatorio1[tamanhoPequeno];
    int vetorP_Aleatorio2[tamanhoPequeno];
    int vetorP_Aleatorio3[tamanhoPequeno];
    int vetorP_Ordenado[tamanhoPequeno];
    int vetorP_Desordenado[tamanhoPequeno];

    printf("\n\33[0;31m-- ---------------------------------------\33[0m\n");

    printf("\n");
    printf("  \33[0;36m Vetor Grande Aleatorio \33[0m\n");
    Aleatorio(vetorG_Aleatorio1, vetorG_Aleatorio2, vetorG_Aleatorio3, tamanhoGrande);

    double vAG1 = BubbleSort(vetorG_Aleatorio1, tamanhoGrande);
    double vAG2 = SelectionSort(vetorG_Aleatorio2, tamanhoGrande);
    double vAG3 = InsertionSort(vetorG_Aleatorio3, tamanhoGrande);
    ranking(vAG1, vAG2, vAG3);

    printf("\n");
    printf("  \33[0;36m Vetor Grande Ordenado \33[0m\n");

    Ordenado(vetorG_Ordenado, tamanhoGrande);
    double vOG1 = BubbleSort(vetorG_Ordenado, tamanhoGrande);

    Ordenado(vetorG_Ordenado, tamanhoGrande);
    double vOG2 = SelectionSort(vetorG_Ordenado, tamanhoGrande);

    Ordenado(vetorG_Ordenado, tamanhoGrande);
    double vOG3 = InsertionSort(vetorG_Ordenado, tamanhoGrande);
    ranking(vOG1, vOG2, vOG3);

    printf("\n");
    printf("  \33[0;36m Vetor Grande Desordenado \33[0m\n");

    Desordenado(vetorG_Desordenado, tamanhoGrande);
    double vDG1 = BubbleSort(vetorG_Desordenado, tamanhoGrande);

    Desordenado(vetorG_Desordenado, tamanhoGrande);
    double vDG2 = SelectionSort(vetorG_Desordenado, tamanhoGrande);

    Desordenado(vetorG_Desordenado, tamanhoGrande);
    double vDG3 = InsertionSort(vetorG_Desordenado, tamanhoGrande);
    ranking(vDG1, vDG2, vDG3);

    printf("\n\33[0;31m-- ---------------------------------------\33[0m\n");

    printf("\n");
    printf("  \33[0;36m Vetor Pequeno Aleatorio \33[0m\n");
    Aleatorio(vetorP_Aleatorio1, vetorP_Aleatorio2, vetorP_Aleatorio3, tamanhoPequeno);

    double vAP1 = BubbleSort(vetorP_Aleatorio1, tamanhoPequeno);
    double vAP2 = SelectionSort(vetorP_Aleatorio2, tamanhoPequeno);
    double vAP3 = InsertionSort(vetorP_Aleatorio3, tamanhoPequeno);
    ranking(vAP1, vAP2, vAP3);

    printf("\n");
    printf("  \33[0;36m Vetor Pequeno Ordenado \33[0m\n");

    Ordenado(vetorP_Ordenado, tamanhoPequeno);
    double vOP1 = BubbleSort(vetorP_Ordenado, tamanhoPequeno);

    Ordenado(vetorP_Ordenado, tamanhoPequeno);
    double vOP2 = SelectionSort(vetorP_Ordenado, tamanhoPequeno);

    Ordenado(vetorP_Ordenado, tamanhoPequeno);
    double vOP3 = InsertionSort(vetorP_Ordenado, tamanhoPequeno);
    ranking(vOP1, vOP2, vOP3);

    printf("\n");
    printf("  \33[0;36m Vetor Pequeno Desordenado \33[0m\n");

    Desordenado(vetorP_Desordenado, tamanhoPequeno);
    double vDP1 = BubbleSort(vetorP_Desordenado, tamanhoPequeno);

    Desordenado(vetorP_Desordenado, tamanhoPequeno);
    double vDP2 = SelectionSort(vetorP_Desordenado, tamanhoPequeno);

    Desordenado(vetorP_Desordenado, tamanhoPequeno);
    double vDP3 = InsertionSort(vetorP_Desordenado, tamanhoPequeno);
    ranking(vDP1, vDP2, vDP3);

    printf("\n\33[0;31m-- ---------------------------------------\33[0m\n");
}
