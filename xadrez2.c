#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nivel Aventureiro - Movimento do Cavalo com loops aninhados

int main() {

    // ===============================
    // Nível Novato - Peças anteriores
    // ===============================

    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    int i;

    // Torre - 5 casas para a direita (for)
    printf("Movimento da Torre:\n");
    for(i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Bispo - 5 casas na diagonal (while)
    printf("Movimento do Bispo:\n");
    i = 0;
    while(i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // Rainha - 8 casas para a esquerda (do-while)
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < casasRainha);

    // ======================================
    // Nível Aventureiro - Movimento do Cavalo
    // ======================================

    printf("\n"); // separação obrigatória

    printf("Movimento do Cavalo:\n");

    const int moverBaixo = 2;
    const int moverEsquerda = 1;

    // Loop externo (FOR) - movimento vertical
    for(i = 0; i < moverBaixo; i++) {

        printf("Baixo\n");

        // Loop interno (WHILE) - movimento horizontal
        int j = 0;
        while(j < moverEsquerda && i == moverBaixo - 1) {
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}