#include <stdio.h>

// Desafio: Movimentando as Peças do Xadrez
// Objetivo: Simular os movimentos da Torre, Bispo e Rainha usando estruturas de repetição

int main() {
    // Movimento da Torre - 5 casas para a direita (usando for)
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita (usando while)
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    // Movimento da Rainha - 8 casas para a esquerda (usando do-while)
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
