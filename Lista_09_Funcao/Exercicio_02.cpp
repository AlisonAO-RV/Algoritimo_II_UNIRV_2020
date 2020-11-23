/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 02 - funcao
 */

#include <stdio.h>
#include <stdlib.h>

void FuncaoMedia()
{
    int ContNota = 0;
    double Aux = 0;
    double Nota = 0;

    printf("--------- Média Aritimética --------- \n");
    printf("Para calcular digite valor menor de 0 \n");
    printf("------------------------------------- \n");
    do
    {
        Nota = 0;
        printf("Digite a nota %d: ", (ContNota + 1));
        scanf("%lf", &Nota);
        if (Nota > 0)
        {
            ContNota++;
            Aux += Nota;
        }
    } while (Nota > 0);

    printf("Media: %.2f\n", Aux / ContNota);
}

int main()
{
    FuncaoMedia();
}
