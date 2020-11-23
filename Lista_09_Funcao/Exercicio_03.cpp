/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 03 - funcao
 */

#include <bits/stdc++.h>
using namespace std;

double Matriz[2][2];

void CarregaMatriz(){
    printf("\n\nDigite a linha 1 da Matriz: ");
    cin >> Matriz[0][0] >> Matriz[0][1];
    printf("Digite a linha 2 da Matriz: ");
    cin >> Matriz[1][0] >> Matriz[1][1];
}


void PrintMatiz(double FuMatriz[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("| %4.1f ", FuMatriz[i][j]);
        }
        printf("|\n");
    }
}

void MatrizInversa(double FuInversa[2][2])
{
    int det = (FuInversa[0][0] * FuInversa[1][1]) - (FuInversa[1][0] * FuInversa[0][1]);
    
    double MaDiv[2][2] = {
        {(FuInversa[0][0] / det), (FuInversa[0][1] / det)},
        {(FuInversa[1][0] / det), (FuInversa[1][1] / det)}};
    
    double MaInversa[2][2] = {
        {MaDiv[1][1], -(MaDiv[0][1])},
        {-(MaDiv[1][0]), MaDiv[0][0]}};
    
    PrintMatiz(MaInversa);
}


int main()
{
    CarregaMatriz();

    printf("\nMatriz Original\n");
    PrintMatiz(Matriz);

    printf("\nMatriz Inversa\n");
    MatrizInversa(Matriz);
}
