#include <stdio.h>

int main() {
    // Constantes de movimentos
    const int BISPO = 5;   // quantidade de casas
    const int TORRE = 5;
    const int RAINHA = 8;

    int i; // contador dos loops

    // Movimento do Bispo
    // Ele anda em diagonal, pra simular isso eu usei
    // dois prints por vez: um "Cima" e depois um "Direita".
    printf("Movimento do Bispo (diagonal superior direita):\n");
    for (i = 0; i < BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Movimento da Torre
    // Torre vai só para a direita. Aqui usei um while.
    printf("Movimento da Torre (direita):\n");
    i = 0;
    while (i < TORRE) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // Movimento da Rainha
    // Rainha pode ir em várias direções, mas nesse caso
    // vai só pra esquerda. aqui coloquei um do while.
    printf("Movimento da Rainha (esquerda):\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < RAINHA);
    printf("\n");

    return 0;
}
