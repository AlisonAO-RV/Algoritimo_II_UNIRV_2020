Algoritmo "Exercicio 01"

// ALGORITMOS PARA ENGENHARIA II  - 2020/2
// Aluno: Alison Alain de Oliveira
// LISTA 01 - Revis�o La�os
// EXERCICIO 01

Var
primeiroElementoPA, razaoPA, nDePA, valoresDeNPA : inteiro
PrimeiroElementoPG, razaoPG, nDePG, valoresDeNPG : inteiro
i : inteiro


Inicio
      ESCREVAL("--- PROGRESS�O ARITIM�TICA ---")
      
      ESCREVA("Informe o Primeiro Elemento da PA: ")
      LEIA(primeiroElementoPA)
      
      ESCREVA("Informe a raz�o da PA: ")
      LEIA(razaoPA)
      
      ESCREVA("Informe a quantidade de N para ser visualizado: ")
      LEIA(nDePA)
      
      ESCREVAL("--- Resultado de PA ---")
      ESCREVAL("a 1 =", primeiroElementoPA)
      
      valoresDeNPA := primeiroElementoPA
      
      para i de 2 ate nDePA faca
           valoresDeNPA := valoresDeNPA + razaoPA;
           ESCREVAL("a", i, " =", valoresDeNPA)
      fimpara
      
      ESCREVAL("--- PROGRESS�O GEOM�TRICA ---")
      
      ESCREVA("Informe o Primeiro Elemento da PG: ")
      LEIA(PrimeiroElementoPG)
      
      ESCREVA("Informe a raz�o da PG: ")
      LEIA(razaoPG)
      
      ESCREVA("Informe a quantidade de N para ser visualizado: ")
      LEIA(nDePG)
      
      ESCREVAL("--- Resultado de PG ---")
      ESCREVAL("a 1 =", primeiroElementoPA)
      
      valoresDeNPA := primeiroElementoPA
      
      para i de 2 ate nDePA faca
           valoresDeNPA := valoresDeNPA * razaoPA;
           ESCREVAL("a", i, " =", valoresDeNPA)
      fimpara


Fimalgoritmo