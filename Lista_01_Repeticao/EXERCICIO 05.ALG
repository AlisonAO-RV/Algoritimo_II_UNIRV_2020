Algoritmo "Exercicio 05"

// ALGORITMOS PARA ENGENHARIA II  - 2020/2
// Aluno: Alison Alain de Oliveira
// LISTA 01 - Revisão Laços
// EXERCICIO 05

Var

valor, i : inteiro
soma : real

Inicio

      ESCREVAL("Verificação de Número Perfeito")
      ESCREVAL("Digite um Numero: ")
      LEIA(valor)
      
      PARA i de 2 ATE valor FACA
           SE((valor % i) = 0) ENTAO
                     soma := soma + (valor / i)
           FIMSE
      FIMPARA
      
      SE (valor = soma) ENTAO
         ESCREVAL("É um Número perfeito")
      SENAO
           ESCREVAL("NÃO é um Número perfeito")
      FIMSE
      
Fimalgoritmo