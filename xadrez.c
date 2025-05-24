#include <stdio.h>

int main() {
    // Simulação do movimento da Torre
    // A Torre move-se 5 casas para a direita
    int movimentoTorre = 5;

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo
    // O Bispo move-se 5 casas na diagonal para cima e à direita
    int movimentoBispo = 5;
    int contadorBispo = 1;

    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= movimentoBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // Simulação do movimento da Rainha
    // A Rainha move-se 8 casas para a esquerda
    int movimentoRainha = 8;
    int contadorRainha = 1;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    return 0;
    
}
