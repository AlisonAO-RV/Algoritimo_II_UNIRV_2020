Algoritmo "Exercicio 08"

// ALGORITMOS PARA ENGENHARIA II  - 2020/2
// Aluno: Alison Alain de Oliveira
// LISTA 01 - Revisão Laços
// EXERCICIO 08

Var

valor: vetor [1..4] de inteiro
sequencia: vetor [1..4] de inteiro
i, J : inteiro

Inicio

      PARA i DE 1 ATE 5 FACA
           ESCREVAL("GRUPO: ", i)
           
           PARA j DE 1 ATE 4 FACA
                ESCREVA("Digite o ", j, "° Número do Grupo:", i, ": ")
                LEIA(valor[j])

              // 1 Maior ----------------------------------------------------
              SE ((valor[1] >= valor[2]) e (valor[1] >= valor[3]) e (valor[1] >= valor[4])) ENTAO
                 // ----------------------------------------------------
                 SE ((valor[2] >= valor[3]) e (valor[2] >= valor[4])) ENTAO
                    // ----------------------------------------------------
                    SE (valor[3] >= valor[4]) ENTAO
                       sequencia[1] := valor[4]
                       sequencia[2] := valor[3]
                       sequencia[3] := valor[2]
                       sequencia[4] := valor[1]
                    SENAO
                          sequencia[1] := valor[3]
                          sequencia[2] := valor[4]
                          sequencia[3] := valor[2]
                          sequencia[4] := valor[1]
                    FIMSE
                 SENAO
                      // ----------------------------------------------------
                      SE ((valor[3] >= valor[2]) e (valor[3] >= valor[4])) ENTAO
                          // ----------------------------------------------------
                          SE (valor[2] >= valor[4]) ENTAO
                             sequencia[1] := valor[4]
                             sequencia[2] := valor[2]
                             sequencia[3] := valor[3]
                             sequencia[4] := valor[1]
                          SENAO
                                sequencia[1] := valor[2]
                                sequencia[2] := valor[4]
                                sequencia[3] := valor[3]
                                sequencia[4] := valor[1]
                          FIMSE
                      SENAO
                           // ----------------------------------------------------
                           SE ((valor[4] >= valor[2]) e (valor[4] >= valor[3])) ENTAO
                                // ----------------------------------------------------
                                SE (valor[2] >= valor[3]) ENTAO
                                   sequencia[1] := valor[3]
                                   sequencia[2] := valor[2]
                                   sequencia[3] := valor[4]
                                   sequencia[4] := valor[1]
                                SENAO
                                      sequencia[1] := valor[2]
                                      sequencia[2] := valor[3]
                                      sequencia[3] := valor[2]
                                      sequencia[4] := valor[1]
                                FIMSE
                           FIMSE
                      FIMSE
                 FIMSE
              SENAO
                   // 2 Maior ----------------------------------------------------
                   SE ((valor[2] >= valor[1]) e (valor[2] >= valor[3]) e (valor[2] >= valor[4])) ENTAO

                       // ----------------------------------------------------
                       SE ((valor[1] >= valor[3]) e (valor[1] >= valor[4])) ENTAO
                          // ----------------------------------------------------
                          SE (valor[3] >= valor[4]) ENTAO
                             sequencia[1] := valor[4]
                             sequencia[2] := valor[3]
                             sequencia[3] := valor[1]
                             sequencia[4] := valor[2]
                          SENAO
                                sequencia[1] := valor[3]
                                sequencia[2] := valor[4]
                                sequencia[3] := valor[1]
                                sequencia[4] := valor[2]
                          FIMSE
                       SENAO
                            // ----------------------------------------------------
                            SE ((valor[3] >= valor[1]) e (valor[3] >= valor[4])) ENTAO
                                // ----------------------------------------------------
                                SE (valor[1] >= valor[4]) ENTAO
                                   sequencia[1] := valor[4]
                                   sequencia[2] := valor[1]
                                   sequencia[3] := valor[3]
                                   sequencia[4] := valor[2]
                                SENAO
                                      sequencia[1] := valor[1]
                                      sequencia[2] := valor[4]
                                      sequencia[3] := valor[3]
                                      sequencia[4] := valor[2]
                                FIMSE
                            SENAO
                                 // ----------------------------------------------------
                                 SE ((valor[4] >= valor[1]) e (valor[4] >= valor[3])) ENTAO
                                      // ----------------------------------------------------
                                      SE (valor[1] >= valor[3]) ENTAO
                                         sequencia[1] := valor[3]
                                         sequencia[2] := valor[1]
                                         sequencia[3] := valor[4]
                                         sequencia[4] := valor[2]
                                      SENAO
                                            sequencia[1] := valor[1]
                                            sequencia[2] := valor[3]
                                            sequencia[3] := valor[4]
                                            sequencia[4] := valor[2]
                                      FIMSE
                                 FIMSE
                            FIMSE
                       FIMSE

                   SENAO
                        // 3 Maior ----------------------------------------------------
                        SE ((valor[3] >= valor[1]) e (valor[3] >= valor[2]) e (valor[3] >= valor[4])) ENTAO
                             // ----------------------------------------------------
                             SE ((valor[1] >= valor[2]) e (valor[1] >= valor[4])) ENTAO
                                   // ----------------------------------------------------
                                   SE (valor[2] >= valor[4]) ENTAO
                                      sequencia[1] := valor[4]
                                      sequencia[2] := valor[2]
                                      sequencia[3] := valor[1]
                                      sequencia[4] := valor[3]
                                   SENAO
                                         sequencia[1] := valor[2]
                                         sequencia[2] := valor[4]
                                         sequencia[3] := valor[1]
                                         sequencia[4] := valor[3]
                                   FIMSE
                             SENAO
                                  // ----------------------------------------------------
                                  SE ((valor[2] >= valor[1]) e (valor[2] >= valor[4])) ENTAO
                                      // ----------------------------------------------------
                                      SE (valor[1] >= valor[4]) ENTAO
                                         sequencia[1] := valor[4]
                                         sequencia[2] := valor[1]
                                         sequencia[3] := valor[2]
                                         sequencia[4] := valor[3]
                                      SENAO
                                            sequencia[1] := valor[1]
                                            sequencia[2] := valor[4]
                                            sequencia[3] := valor[2]
                                            sequencia[4] := valor[3]
                                      FIMSE
                                  SENAO
                                       // ----------------------------------------------------
                                       SE ((valor[4] >= valor[1]) e (valor[4] >= valor[3])) ENTAO
                                            // ----------------------------------------------------
                                            SE (valor[1] >= valor[2]) ENTAO
                                               sequencia[1] := valor[2]
                                               sequencia[2] := valor[1]
                                               sequencia[3] := valor[4]
                                               sequencia[4] := valor[3]
                                            SENAO
                                                  sequencia[1] := valor[1]
                                                  sequencia[2] := valor[2]
                                                  sequencia[3] := valor[4]
                                                  sequencia[4] := valor[3]
                                            FIMSE
                                       FIMSE
                                  FIMSE
                             FIMSE
                        SENAO
                             // 4 Maior ----------------------------------------------------
                             SE ((valor[4] >= valor[1]) e (valor[4] >= valor[2]) e (valor[4] >= valor[3])) ENTAO
                                // ----------------------------------------------------
                                SE ((valor[1] >= valor[2]) e (valor[1] >= valor[3])) ENTAO
                                   // ----------------------------------------------------
                                   SE (valor[2] >= valor[3]) ENTAO
                                      sequencia[1] := valor[3]
                                      sequencia[2] := valor[2]
                                      sequencia[3] := valor[1]
                                      sequencia[4] := valor[4]
                                   SENAO
                                         sequencia[1] := valor[2]
                                         sequencia[2] := valor[3]
                                         sequencia[3] := valor[1]
                                         sequencia[4] := valor[4]
                                   FIMSE
                                SENAO
                                     // ----------------------------------------------------
                                     SE ((valor[2] >= valor[1]) e (valor[2] >= valor[3])) ENTAO
                                         // ----------------------------------------------------
                                         SE (valor[1] >= valor[3]) ENTAO
                                            sequencia[1] := valor[3]
                                            sequencia[2] := valor[1]
                                            sequencia[3] := valor[2]
                                            sequencia[4] := valor[4]
                                         SENAO
                                               sequencia[1] := valor[1]
                                               sequencia[2] := valor[3]
                                               sequencia[3] := valor[2]
                                               sequencia[4] := valor[4]
                                         FIMSE
                                     SENAO
                                          // ----------------------------------------------------
                                          SE ((valor[3] >= valor[1]) e (valor[3] >= valor[2])) ENTAO
                                               // ----------------------------------------------------
                                               SE (valor[1] >= valor[2]) ENTAO
                                                  sequencia[1] := valor[2]
                                                  sequencia[2] := valor[1]
                                                  sequencia[3] := valor[3]
                                                  sequencia[4] := valor[4]
                                               SENAO
                                                     sequencia[1] := valor[1]
                                                     sequencia[2] := valor[2]
                                                     sequencia[3] := valor[3]
                                                     sequencia[4] := valor[4]
                                               FIMSE
                                          FIMSE
                                     FIMSE
                                FIMSE
                             FIMSE
                        FIMSE
                   FIMSE
              FIMSE
           FIMPARA
           
           ESCREVAL("ORDEM: ", valor[1]," - ",valor[2]," - ",valor[3]," - ",valor[4])
           ESCREVAL("CRESCENTE: ", sequencia[1]," - ",sequencia[2]," - ",sequencia[3]," - ",sequencia[4])
           ESCREVAL("DECRESCENTE: ", sequencia[4]," - ",sequencia[3]," - ",sequencia[2]," - ",sequencia[1])
      
      FIMPARA

Fimalgoritmo