#include <stdio.h>

#define TAMANHO 5

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Navio horizontal na linha 1
    for (int i = 1; i <= 3; i++) {
        tabuleiro[1][i] = 3;
    }

    // Navio vertical na coluna 0
    for (int i = 2; i <= 4; i++) {
        tabuleiro[i][0] = 3;
    }

    printf("🚢 Tabuleiro Nível Novato (5x5):\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
