Algoritmo "Exercicio 05"

// ALGORITMOS PARA ENGENHARIA II  - 2020/2
// Aluno: Alison Alain de Oliveira
// LISTA 01 - Revis�o La�os
// EXERCICIO 05

Var

valor, i : inteiro
soma : real

Inicio

      ESCREVAL("Verifica��o de N�mero Perfeito")
      ESCREVAL("Digite um Numero: ")
      LEIA(valor)
      
      PARA i de 2 ATE valor FACA
           SE((valor % i) = 0) ENTAO
                     soma := soma + (valor / i)
           FIMSE
      FIMPARA
      
      SE (valor = soma) ENTAO
         ESCREVAL("� um N�mero perfeito")
      SENAO
           ESCREVAL("N�O � um N�mero perfeito")
      FIMSE
      
Fimalgoritmo