/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 01 - SelectSort
 */

// Abaixo está uma implementação que promete decidir se o vetor v[0..n-1] está em ordem
// crescente, faça uma análise desse código.

int verifica(int v[], int n)        // função de verificação que recebe um Vetor Inteiro e uma Variavel 'n' com o tamanho do vetor

{
    int i;                          // Cria uma Variavel i para contador

    if (n > 1)                      // Conpara se o valor de 'n' é maior que 1
    
        for (i = 1; i < n; i++)     // inicia o laço n vezes começando de 1 (segundo elemento do vetor)
            if (v[i - 1] > v[i])    // compara se vetor -1 (uma posição anterior) é maior que a posição do vetor atual
                return 0;           // se a posição anterior for maior em pelo menos uma repetição do laço Retorna 0
                                    //( SIGNIFICA QUE NÃO ESTA EM ORDEM CRESCENTE )

    return 1;                       // se todos as verificações forem falsas então sai fora e retorna 1 ( SIM ESTA EM ORDEM )
}




