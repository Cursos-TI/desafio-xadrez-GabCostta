#include <stdio.h>

#define BISPO_MOV 5      // Movimentação do Bispo: 5 casas na diagonal superior direita
#define TORRE_MOV 5      // Movimentação da Torre: 5 casas para a direita
#define RAINHA_MOV 8     // Movimentação da Rainha: 8 casas para a esquerda

int main() {
    // Movimento do Bispo
    printf("Movimentacao do Bispo:\n");
    for (int i = 1; i <= BISPO_MOV; i++) {
        printf("%d: Diagonal Superior Direita (Cima + Direita)\n", i);
    }
    printf("\n");

    // Movimento da Torre
    printf("Movimentacao da Torre:\n");
    for (int i = 1; i <= TORRE_MOV; i++) {
        printf("%d: Direita\n", i);
    }
    printf("\n");

    // Movimento da Rainha
    printf("Movimentacao da Rainha:\n");
    for (int i = 1; i <= RAINHA_MOV; i++) {
        printf("%d: Esquerda\n", i);
    }
    printf("\n");

    return 0;
}
