/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 14
 */

#include <stdio.h>

int main()
{
    int gabaritoG[13];
    int respostaR[13];
    int Apostadores[10];
    int contadorAcertos = 0;
    int conferencia = 0;
    int porcentagem10a13 = 0;
    int porcentagemMenor10 = 0;


    printf(" Digite o Resultado da Loteria\n");
    for (int i = 0; i < 13; i++)
    {
        printf("Resultado %d/13: ", (i + 1));
        scanf("%d", &gabaritoG[i]);
    }

    printf("\nCONFIRA OS RESULTADOS\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Apostador %d\n\n", (i + 1));

        for (int j = 0; j < 13; j++)
        {
            printf("Resultado %d/13: ", (j + 1));
            scanf("%d", &respostaR[j]);
        }

        printf("\nRESULTADO\n");

        for (int k = 0; k < 13; k++)
        {
            if (gabaritoG[k] == respostaR[k])
            {
                contadorAcertos++;
                conferencia = 1;
            }
            else
            {
                conferencia = 0;
            }

            if (gabaritoG[k] == 1)
            {
                printf("| X |   |   | = %d pontos\n", conferencia);
            }
            else if (gabaritoG[k] == 0)
            {
                printf("|   | X |   | = %d pontos\n", conferencia);
            }
            else
            {
                printf("|   |   | X | = %d pontos\n", conferencia);
            }
        }
        printf("\nTotal de Pontos %d\n\n", contadorAcertos);

        Apostadores[i] = contadorAcertos;
        contadorAcertos = 0;
        conferencia = 0;
    }
        printf("\nRELATÓRIO\n\n");

        for (int i = 0; i < 10; i++)
        {
            printf("Apostador %d fez %d pontos\n", (i + 1), Apostadores[i]);
            if (Apostadores[i] >= 10)
            {
                porcentagem10a13++;
            } else{
                porcentagemMenor10++;
            }
            
        }
        porcentagem10a13 = (porcentagem10a13 * 10);
        porcentagemMenor10 = (porcentagemMenor10 * 10);

        printf("\n%d%% dos apostadores fizeram entre 10 e 13 Acertos\n", porcentagem10a13);
        printf("\n%d%% dos apostadores fizeram menos de 10 Acertos\n", porcentagemMenor10);
        
}
