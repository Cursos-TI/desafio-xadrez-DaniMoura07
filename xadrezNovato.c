#include <stdio.h>

int main() {
    const int BISPO = 5;    // quantidade de casas
    const int TORRE = 5;
    const int RAINHA = 8;
    const int CAVALO_BAIXO = 2;
    const int CAVALO_ESQUERDA = 1;

    int i, j; // contadores dos loops

    // Movimento do Bispo
    // Ele anda em diagonal, então pra simular isso eu usei
    // dois prints por vez: um "Cima" e depois um "Direita".
    printf("Movimento do Bispo (diagonal superior direita):\n");
    for (i = 0; i < BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Movimento da Torre
    // Torre vai só para a direita. Aqui usei um while pra variar.
    printf("Movimento da Torre (direita):\n");
    i = 0;
    while (i < TORRE) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // Movimento da Rainha
    // Rainha pode ir em várias direções, mas nesse caso
    // vai só pra esquerda. Aqui coloquei um do...while.
    printf("Movimento da Rainha (esquerda):\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < RAINHA);
    printf("\n");

    // Movimento do Cavalo
    // O cavalo anda em L. Aqui ele vai 2x pra baixo e 1x pra esquerda.
    // Usei loops aninhados: primeiro com for, depois com while.
    printf("Movimento do Cavalo (em L - baixo e esquerda):\n");

    for (i = 0; i < CAVALO_BAIXO; i++) {
        for (j = 0; j < 1; j++) {
            printf("Baixo\n");
        }
    }

    i = 0;
    while (i < CAVALO_ESQUERDA) {
        j = 0;
        while (j < 1) {
            printf("Esquerda\n");
            j++;
        }
        i++;
    }
    printf("\n");

    return 0;
}
