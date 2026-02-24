#include <stdio.h>

// ===============================
// FUNÇÃO RECURSIVA - BISPO (Nível Mestre)
// ===============================
void moverBispoRecursivo(int casas) {

    if (casas <= 0) {
        return; // condição de parada
    }

    printf("Cima Direita\n");

    moverBispoRecursivo(casas - 1); // chamada recursiva
}

int main() {

    // Nível Novato - Movimentação das Peças
    // Declarando constantes para número de casas

    const int casasBispo = 5;
    const int casasTorre = 5;
    const int casasRainha = 8;

    int i;

    // =====================================
    // Implementação de Movimentação do Bispo (WHILE)
    // =====================================

    printf("=== Movimento do Bispo (while) ===\n");

    i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // =====================================
    // Implementação de Movimentação da Torre (FOR)
    // =====================================

    printf("=== Movimento da Torre (for) ===\n");

    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // =====================================
    // Implementação de Movimentação da Rainha (DO-WHILE)
    // =====================================

    printf("=== Movimento da Rainha (do-while) ===\n");

    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casasRainha);

    printf("\n");

    // =====================================
    // Nível Aventureiro - Movimentação do Cavalo
    // Loop aninhado simulando movimento em L
    // =====================================

    printf("=== Movimento do Cavalo (Loops Aninhados) ===\n");

    int horizontal = 2;
    int vertical = 1;

    for (i = 0; i < horizontal; i++) {

        if (i == 1) {
            continue; // exemplo de uso do continue
        }

        printf("Direita\n");

        for (int j = 0; j < vertical; j++) {
            printf("Cima\n");

            if (j == 0) {
                break; // exemplo de uso do break
            }
        }
    }

    printf("\n");

    // =====================================
    // Nível Mestre - Bispo com Recursão
    // =====================================

    printf("=== Movimento do Bispo (Recursivo) ===\n");

    moverBispoRecursivo(casasBispo);

    return 0;
}
