#include <stdio.h>

const int BISPO = 5;          
const int TORRE = 5;       
const int RAINHA = 8;        
const int CAVALO_CIMA = 2;   
const int CAVALO_DIREITA = 1; 
// Torre: recursão simples
void moverTorre(int passo) {
    if (passo == 0) return;
    printf("Direita\n");
    moverTorre(passo - 1);
}

// Rainha: recursão simples
void moverRainha(int passo) {
    if (passo == 0) return; 
    printf("Esquerda\n");
    moverRainha(passo - 1); 
}

// Bispo: recursão + loops
void moverBispo(int passo) {
    if (passo == 0) return; 

    for (int i = 0; i < 1; i++) {   
        for (int j = 0; j < 1; j++) { 
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(passo - 1); 
}

int main() {
    int i, j;

    // Movimento do Bispo
    printf("Movimento do Bispo (diagonal superior direita):\n");
    moverBispo(BISPO);
    printf("\n");

    // Movimento da Torre
    printf("Movimento da Torre (direita):\n");
    moverTorre(TORRE);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha (esquerda):\n");
    moverRainha(RAINHA);
    printf("\n");

    // Movimento do Cavalo 
    // Cavalo faz movimento em L: 2 pra cima e 1 pra direita.
    printf("Movimento do Cavalo (em L - cima e direita):\n");

    for (i = 0, j = 0; i <= CAVALO_CIMA && j <= CAVALO_DIREITA; i++, j++) {
        if (i < CAVALO_CIMA) {
            printf("Cima\n");
            continue; // volta pro loop até terminar a subida
        }
        if (j == CAVALO_DIREITA) {
            printf("Direita\n");
            break; // finaliza o L
        }
    }

    printf("\n=== FIM DA EXECUCAO ===\n");

    return 0;
}
