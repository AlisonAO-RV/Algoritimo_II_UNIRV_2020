/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 02 B
 */

#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <time.h>

int main()
{
    srand((int)time(0));

    clock_t tInicio, tFim;

    int tamanhoGrande = 100000;
    int vetorG_Aleatorio1[tamanhoGrande];
    int vetorG_Ordenado[tamanhoGrande];
    int vetorG_Dedordenado[tamanhoGrande];

    int tamanhoPequeno = 350;
    int vetorP_Aleatorio1[tamanhoPequeno];
    int vetorP_Ordenado[tamanhoPequeno];
    int vetorP_Dedordenado[tamanhoPequeno];

    int tamanhoAuxiliar = 0;
    int vetorAuxiliar1[tamanhoGrande];
    int vetorAuxiliar2[tamanhoGrande];
    int vetorAuxiliar3[tamanhoGrande];
    int auxOrdenacao = 0;
    int auxMinimo = 0;
    int xInsertion = 0;

    int posicao[3];
    double ranking[3];
    int auxPosicao = 0;
    double auxRanking = 0;


    // CARREGA VETORES COM VALORES
    for (int i = 0; i < tamanhoGrande; i++)
    {
        vetorG_Aleatorio1[i] = (rand() % 1000) + 1;
        vetorG_Ordenado[i] = i + 1;
        vetorG_Dedordenado[i] = tamanhoGrande - i;
    }

    for (int i = 0; i < tamanhoPequeno; i++)
    {
        vetorP_Aleatorio1[i] = (rand() % 100) + 1;
        vetorP_Ordenado[i] = i + 1;
        vetorP_Dedordenado[i] = tamanhoPequeno - i;
    }

    // INICIAR REPETICAO PARA TODOS OS RESULTADO
    for (int i = 0; i < 6; i++)
    {

        // DEFINE TAMANHO DA UTILIZAÇÃO DO VETOR
        if (i < 3)
        {
            tamanhoAuxiliar = tamanhoGrande;
        }
        else
        {
            tamanhoAuxiliar = tamanhoPequeno;
        }

        // CARREGAS OS VETORES AUXILIARES UM DE CADA VEZ SEGUINDO O I DO PRIMEIRO FOR
        for (int j = 0; j < tamanhoAuxiliar; j++)
        {
            switch (i)
            {
            case 0:
                vetorAuxiliar1[j] = vetorG_Aleatorio1[j];
                vetorAuxiliar2[j] = vetorG_Aleatorio1[j];
                vetorAuxiliar3[j] = vetorG_Aleatorio1[j];
                break;
            case 1:
                vetorAuxiliar1[j] = vetorG_Ordenado[j];
                vetorAuxiliar2[j] = vetorG_Ordenado[j];
                vetorAuxiliar3[j] = vetorG_Ordenado[j];
                break;
            case 2:
                vetorAuxiliar1[j] = vetorG_Dedordenado[j];
                vetorAuxiliar2[j] = vetorG_Dedordenado[j];
                vetorAuxiliar3[j] = vetorG_Dedordenado[j];
                break;
            case 3:
                vetorAuxiliar1[j] = vetorP_Aleatorio1[j];
                vetorAuxiliar2[j] = vetorP_Aleatorio1[j];
                vetorAuxiliar3[j] = vetorP_Aleatorio1[j];
                break;
            case 4:
                vetorAuxiliar1[j] = vetorP_Ordenado[j];
                vetorAuxiliar2[j] = vetorP_Ordenado[j];
                vetorAuxiliar3[j] = vetorP_Ordenado[j];
                break;
            case 5:
                vetorAuxiliar1[j] = vetorP_Dedordenado[j];
                vetorAuxiliar2[j] = vetorP_Dedordenado[j];
                vetorAuxiliar3[j] = vetorP_Dedordenado[j];
                break;
            }
        }

        // Bubble Sort -----------------------------------------
        auxOrdenacao = 0;
        tInicio = clock();
        for (int k = 0; k < tamanhoAuxiliar - 1; k++)
        {
            for (int l = k + 1; l < tamanhoAuxiliar; l++)
            {
                if (vetorAuxiliar1[k] > vetorAuxiliar1[l])
                {
                    auxOrdenacao = vetorAuxiliar1[k];
                    vetorAuxiliar1[k] = vetorAuxiliar1[l];
                    vetorAuxiliar1[l] = auxOrdenacao;
                }
            }
        }
        tFim = clock();
        posicao[0] = 1;
        ranking[0] = (1000 * (double)(tFim - tInicio) / (double)(CLOCKS_PER_SEC));

        // Selection Sort -----------------------------------------
        auxOrdenacao = 0;
        auxMinimo = 0;
        tInicio = clock();
        for (int k = 0; k < tamanhoAuxiliar - 1; k++)
        {
            auxMinimo = k;
            for (int l = k + 1; l < tamanhoAuxiliar; l++)
            {
                if (vetorAuxiliar2[auxMinimo] > vetorAuxiliar2[l])
                {
                    auxMinimo = l;
                }
            }
            if (i != auxMinimo)
            {
                auxOrdenacao = vetorAuxiliar2[k];
                vetorAuxiliar2[k] = vetorAuxiliar2[auxMinimo];
                vetorAuxiliar2[auxMinimo] = auxOrdenacao;
            }
        }
        tFim = clock();
        posicao[1] = 2;
        ranking[1] = (1000 * (double)(tFim - tInicio) / (double)(CLOCKS_PER_SEC));

        // Insertion Sort -----------------------------------------
        auxOrdenacao = 0;
        xInsertion = 0;
        tInicio = clock();
        for (int k = 1; k < tamanhoAuxiliar; k++)
        {
            auxOrdenacao = vetorAuxiliar3[k];
            xInsertion = k - 1;
            while ((xInsertion >= 0) && (vetorAuxiliar3[xInsertion] > auxOrdenacao))
            {
                vetorAuxiliar3[xInsertion + 1] = vetorAuxiliar3[xInsertion];
                xInsertion = xInsertion - 1;
            }
            vetorAuxiliar3[xInsertion + 1] = auxOrdenacao;
        }
        tFim = clock();
        posicao[2] = 3;
        ranking[2] = (1000 * (double)(tFim - tInicio) / (double)(CLOCKS_PER_SEC));

        // COLOCA EM ORDEM DE MELHOR PARA O PIOR
        for (int k = 0; k < 2; k++)
        {
            for (int l = k + 1; l < 3; l++)
            {
                if (ranking[k] > ranking[l])
                {
                    auxPosicao = posicao[k];
                    auxRanking = ranking[k];
                    posicao[k] = posicao[l];
                    ranking[k] = ranking[l];
                    posicao[l] = auxPosicao;
                    ranking[l] = auxRanking;
                }
            }
        }

        printf("\n");


        // DEFINE O NOME DE CADA INSTANCIA DO I DO FOR
        switch (i)
        {
        case 0:
            printf("  \33[0;36m Vetor Grande Aleatorio \33[0m\n");
            break;
        case 1:
            printf("  \33[0;36m Vetor Grande Ordenado \33[0m\n");
            break;
        case 2:
            printf("  \33[0;36m Vetor Grande Desordenado \33[0m\n");
            break;
        case 3:
            printf("  \33[0;36m Vetor Pequeno Aleatorio \33[0m\n");
            break;
        case 4:
            printf("  \33[0;36m Vetor Pequeno Ordenado \33[0m\n");
            break;
        case 5:
            printf("  \33[0;36m Vetor Pequeno Desordenado \33[0m\n");
            break;
        }

        // IMPRIME RESULTADO EM ORDEM DO MELHOR PARA O PIOR
        for (int j = 0; j < 3; j++)
        {
            switch (posicao[j])
            {
            case 1:
                printf("%d° Bubble:    \33[0;32m%10.4f ms\33[0m ou %7.4f seg\n", (j + 1), ranking[j],
                       (ranking[j] / 1000));
                break;
            case 2:
                printf("%d° Selection: \33[0;32m%10.4f ms\33[0m ou %7.4f seg\n", (j + 1), ranking[j],
                       (ranking[j] / 1000));
                break;
            case 3:
                printf("%d° Insertion: \33[0;32m%10.4f ms\33[0m ou %7.4f seg\n", (j + 1), ranking[j],
                       (ranking[j] / 1000));
                break;
            }
        }
    }
}
