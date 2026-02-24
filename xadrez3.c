#include <stdio.h>

// =====================================================
// FUNÇÃO RECURSIVA - TORRE (Direita)
// =====================================================
void moverTorre(int casas) {

    if (casas <= 0) {
        return; // condição de parada
    }

    printf("Direita\n");

    moverTorre(casas - 1); // chamada recursiva
}

// =====================================================
// FUNÇÃO RECURSIVA - RAINHA (Esquerda)
// =====================================================
void moverRainha(int casas) {

    if (casas <= 0) {
        return;
    }

    printf("Esquerda\n");

    moverRainha(casas - 1);
}

// =====================================================
// FUNÇÃO RECURSIVA - BISPO
// Movimento: 5 casas diagonal direita para cima
// EXIGE: recursividade + loops aninhados
// =====================================================
void moverBispo(int casas) {

    if (casas <= 0) {
        return;
    }

    // Loop externo - movimento vertical
    for (int i = 0; i < 1; i++) {

        printf("Cima\n");

        // Loop interno - movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

// =====================================================
// MAIN
// =====================================================
int main() {

    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // =========================
    // TORRE (Recursiva)
    // =========================
    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre);

    printf("\n");

    // =========================
    // BISPO (Recursivo + Loops Aninhados)
    // =========================
    printf("=== Movimento do Bispo ===\n");
    moverBispo(casasBispo);

    printf("\n");

    // =========================
    // RAINHA (Recursiva)
    // =========================
    printf("=== Movimento da Rainha ===\n");
    moverRainha(casasRainha);

    printf("\n");

    // =========================
    // CAVALO - Loops Complexos
    // Movimento: 2 casas para cima e 1 para direita
    // Uso de múltiplas variáveis, break e continue
    // =========================
    printf("=== Movimento do Cavalo ===\n");

    int vertical = 2;
    int horizontal = 1;

    for (int i = 0; i < vertical; i++) {

        if (i == 1) {
            // apenas exemplo de controle de fluxo
            printf("Cima\n");
        } else {
            printf("Cima\n");
            continue; // força continuar o loop
        }
    }

    // Loop separado para parte horizontal
    for (int j = 0; j < horizontal; j++) {

        if (j == 0) {
            printf("Direita\n");
            break; // encerra após um movimento
        }
    }

    return 0;
}