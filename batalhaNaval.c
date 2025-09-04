#include <stdio.h>

int main() {
    // Tamanho do tabuleiro (apenas referência)
    int tamanho = 10;

    // Navio vertical (posição inicial X, Y e tamanho do navio)
    int xVertical = 2, yVertical = 3;
    int tamanhoVertical = 4;

    // Navio horizontal
    int xHorizontal = 5, yHorizontal = 6;
    int tamanhoHorizontal = 5;

    // Vetores para armazenar coordenadas
    int navioVertical[10][2];   // [quantidade de partes][x,y]
    int navioHorizontal[10][2];

    // Preencher coordenadas do navio vertical
    for (int i = 0; i < tamanhoVertical; i++) {
        navioVertical[i][0] = xVertical;        // X fixo
        navioVertical[i][1] = yVertical + i;    // Y cresce
    }

    // Preencher coordenadas do navio horizontal
    for (int i = 0; i < tamanhoHorizontal; i++) {
        navioHorizontal[i][0] = xHorizontal + i; // X cresce
        navioHorizontal[i][1] = yHorizontal;     // Y fixo
    }

    // Exibir coordenadas
    printf("=== Coordenadas do Navio Vertical ===\n");
    for (int i = 0; i < tamanhoVertical; i++) {
        printf("Parte %d: (%d, %d)\n", i+1, navioVertical[i][0], navioVertical[i][1]);
    }

    printf("\n=== Coordenadas do Navio Horizontal ===\n");
    for (int i = 0; i < tamanhoHorizontal; i++) {
        printf("Parte %d: (%d, %d)\n", i+1, navioHorizontal[i][0], navioHorizontal[i][1]);
    }

    return 0;
}
=== Coordenadas do Navio Vertical ===
Parte 1: (2, 3)
Parte 2: (2, 4)
Parte 3: (2, 5)
Parte 4: (2, 6)

=== Coordenadas do Navio Horizontal ===
Parte 1: (5, 6)
Parte 2: (6, 6)
Parte 3: (7, 6)
Parte 4: (8, 6)
Parte 5: (9, 6)
