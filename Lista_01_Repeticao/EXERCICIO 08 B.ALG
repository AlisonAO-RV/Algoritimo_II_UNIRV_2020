Algoritmo "Exercicio 08 B"

// ALGORITMOS PARA ENGENHARIA II  - 2020/2
// Aluno: Alison Alain de Oliveira
// LISTA 01 - Revisão Laços
// EXERCICIO 08 B

Var

valor: vetor [1..4] de inteiro
sequencia: vetor [1..4] de inteiro
i, j, k, l, aux : inteiro

Inicio

      PARA i DE 1 ATE 5 FACA
           ESCREVAL("GRUPO: ", i)
           
           PARA j DE 1 ATE 4 FACA
                ESCREVA("Digite o ", j, "° Número do Grupo:", i, ": ")
                LEIA(valor[j])
           FIMPARA
           
           ESCREVAL("ORDEM: ", valor[1]," - ",valor[2]," - ",valor[3]," - ",valor[4])
           
           PARA k DE 1 ATE 4 FACA
                PARA l DE 1 ATE 3 FACA
                     SE (valor[l] > valor[l+1]) ENTAO
                        aux := valor[l]
                        valor[l] := valor[l+1]
                        valor[l+1] := aux
                     FIMSE
                FIMPARA
           FIMPARA

           ESCREVAL("CRESCENTE: ", valor[1]," - ",valor[2]," - ",valor[3]," - ",valor[4])
           ESCREVAL("DECRESCENTE: ", valor[4]," - ",valor[3]," - ",valor[2]," - ",valor[1])
      
      FIMPARA

Fimalgoritmo