#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

void exibirMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int **alocaMemoriaParaMatriz(int linhas, int colunas) {
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = 0;
        }
    }
    return matriz;
}

void liberarMatriz(int **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int **tabuleiroCincoPorCinco = alocaMemoriaParaMatriz(5, 5);
    tabuleiroCincoPorCinco[0][0] = 3; 
    tabuleiroCincoPorCinco[0][1] = 3; 
    tabuleiroCincoPorCinco[0][2] = 3; 

    tabuleiroCincoPorCinco[2][3] = 3;
    tabuleiroCincoPorCinco[3][3] = 3;
    tabuleiroCincoPorCinco[4][3] = 3;

    exibirMatriz(tabuleiroCincoPorCinco, 5, 5);
    liberarMatriz(tabuleiroCincoPorCinco, 5);

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    printf("\n");
    int **tabuleiroDezPorDez = alocaMemoriaParaMatriz(10, 10);
    // primeiro navio                 segundo navio
    tabuleiroDezPorDez[0][0] = 3; tabuleiroDezPorDez[2][3] = 3;
    tabuleiroDezPorDez[0][1] = 3; tabuleiroDezPorDez[3][3] = 3;
    tabuleiroDezPorDez[0][2] = 3; tabuleiroDezPorDez[4][3] = 3;

    // terceiro navio                 quarto navio
    tabuleiroDezPorDez[7][0] = 3; tabuleiroDezPorDez[7][9] = 3;
    tabuleiroDezPorDez[7][1] = 3; tabuleiroDezPorDez[8][9] = 3;
    tabuleiroDezPorDez[7][2] = 0; tabuleiroDezPorDez[9][9] = 3;
    
    exibirMatriz(tabuleiroDezPorDez, 10, 10);
    liberarMatriz(tabuleiroDezPorDez, 10);

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
