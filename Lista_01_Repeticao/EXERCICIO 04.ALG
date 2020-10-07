Algoritmo "Exercicio 04"

// ALGORITMOS PARA ENGENHARIA II  - 2020/2
// Aluno: Alison Alain de Oliveira
// LISTA 01 - Revisão Laços
// EXERCICIO 04

Var

contador, resultado : real
i : inteiro

Inicio

      PARA i de 1 ATE 100 FACA
           SE ( (i % 2) = 1 )ENTAO
              contador := contador + 1
              resultado := (resultado + (i / contador))
           FIMSE
      FIMPARA
      
      ESCREVAL("Resultado: ", resultado)
      
Fimalgoritmo