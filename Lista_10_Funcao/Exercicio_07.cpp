/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 07 - funcao
 */

#include <bits/stdc++.h>
using namespace std;

int FunFatoriaVetor(int n)
{
    int Fat = n;
    for (int j = Fat - 1; j > 0; j--)
        Fat = Fat * j;
    return Fat;
}

double FunS()
{
    int valor = 0;
    double fatorial = 0;
    double resultado = 1.0;
    cout << "Digite um valor: ";
    cin >> valor;
    for (int i = 2; i <= valor; i++)
    {
        fatorial = FunFatoriaVetor(i);
        resultado += 1.0 / fatorial;
    }
    return resultado;
}

int main()
{
    double resposta = 0;

    resposta = FunS();

    printf("Valor de S é %.10f\n", resposta);
}
