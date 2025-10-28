#include <stdio.h>

int main() {
    
    // Quantidade de casas que cada peça irá se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    
    // ---------------------------------------------------
    // Movimentação da Torre → Para a direita (FOR)
    // ---------------------------------------------------
    printf("Movimento da Torre:\n");
    for(int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    
    printf("\n"); // Espaçamento para separar os movimentos
    
    // ---------------------------------------------------
    // Movimentação do Bispo → Cima e Direita (WHILE)
    // ---------------------------------------------------
    printf("Movimento do Bispo:\n");
    int contadorBispo = 0;
    while(contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    
    printf("\n"); // Espaçamento para separar os movimentos
    
    // ---------------------------------------------------
    // Movimentação da Rainha → Esquerda (DO-WHILE)
    // ---------------------------------------------------
    printf("Movimento da Rainha:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha < casasRainha);
    
    printf("\nFim da simulação de movimentos.\n");

    return 0;
}
