#include <stdio.h>

// Desafio Batalha Naval - Posicionando Navios
// Objetivo: Representar um tabuleiro 10x10 e posicionar dois navios de tamanho 3 (um horizontal e um vertical)

int main() {
    // Definindo o tabuleiro 10x10 e inicializando com água (valor 0)
    int tabuleiro[10][10];
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // Definindo os navios como vetores de tamanho 3
    int navioHorizontal[3] = {3, 3, 3}; // valor 3 representa parte do navio
    int navioVertical[3] = {3, 3, 3};

    // Coordenadas iniciais dos navios (definidas diretamente no código)
    int linhaHorizontal = 2;
    int colunaHorizontal = 4;

    int linhaVertical = 5;
    int colunaVertical = 7;

    // Posicionando o navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
    }

    // Posicionando o navio vertical no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
    }

    // Exibindo o tabuleiro
    printf("=== TABULEIRO BATALHA NAVAL ===\n");
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
