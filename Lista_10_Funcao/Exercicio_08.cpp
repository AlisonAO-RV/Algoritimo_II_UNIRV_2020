/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 08 - funcao
 */

#include <bits/stdc++.h>
using namespace std;

double FunS()
{
    int valor = 0;
    int resultado = 0.0;
    cout << "Digite um Valor: ";
    cin >> valor;
    for (int i = 1; i <= valor; i++)
    {
        resultado += (((i * i) + 1.0) / (i + 3.0));
    }
    return resultado;
}

int main()
{
    double Resultado = FunS();

    cout << "Valor de S: " << Resultado << "\n";
}
