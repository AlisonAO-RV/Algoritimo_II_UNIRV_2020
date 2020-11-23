/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 01 - funcao
 */

#include <stdio.h>
#include <stdlib.h>

int N = 0;

double funcaoS(int n) {
    double S = 1;
    for (int i = 1; i < n; i++)
    {
        S += ( 1.0 / (i + 1) );
    }
    return S;
}

int main()
{
    printf("Digite um valor inteiro: ");
    scanf("%d", &N);
    printf("Resultado: %.2f\n", funcaoS(N));
}
