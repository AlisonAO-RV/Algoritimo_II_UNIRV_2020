/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 01 - funcao
 */

#include <bits/stdc++.h>
using namespace std;

/* LEGENDA DO VETOR
 * SEXO: [0] FEMININO | [1] MASCULINO
 * COR DOS OLHOS: [0] AZUIS | [1] VERDES | [2] CASTANHOS
 * COR DOS CABELOS: [0] LOUROS | [1] PRETOS | [2] CASTANHOS
 * IDADE: MAIOR OU IGUAL A 0
 */

int pesquisa[50][4];

int FunSexo() {
    int sexo = 0;
    cout << "Escolha o sexo\n   [0] Masculino [1] Feminino: ";
    // cin >> sexo;
    sexo = (rand() % 2);
    return sexo;
}

int FunCorDosOlhos() {
    int cor = 0;
    cout << "Escolha a cor dos olhos\n   [0] AZUIS | [1] VERDES | [2] CASTANHOS: ";
    // cin >> cor;
    cor = (rand() % 3);
    return cor;
}

int FunCorDosCabelos() {
    int cor = 0;
    cout << "Escolha a cor dos cabelos\n   [0] LOUROS | [1] PRETOS | [2] CASTANHOS: ";
    // cin >> cor;
    cor = (rand() % 3);
    return cor;
}

int FunIdade() {
    int idade = 0;
    cout << "Digite a idade: ";
    // cin >> idade;
    idade = (rand() % 105);
    return idade;
}

void FumPrint(int registro[50][4]) {
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("| %3d ", registro[i][j]);
        }
        
        cout << "| \n";
    }   
}

int FunRegistro(int registro[50][4]) {
    for (int i = 0; i < 50; i++)
    {
        cout << "INFORMAÇÕES DO HABITANTE: " << (i + 1) << "\n";
        registro[i][0] = FunSexo();
        cout << "\n";
        registro[i][1] = FunCorDosOlhos();
        cout << "\n";
        registro[i][2] = FunCorDosCabelos();
        cout << "\n";
        registro[i][3] = FunIdade();
        cout << "\n\n";
    }
    return 0;
}

int main()
{
    srand((int)time(0));

    FunRegistro(pesquisa);

    FumPrint(pesquisa);
}
