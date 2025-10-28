#include <stdio.h>

int main() {
    
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavaloBaixo = 2;
    int casasCavaloEsquerda = 1;

    // ---------------------------------------------------
    // Movimentação da Torre → Para a direita (FOR)
    // ---------------------------------------------------
    printf("Movimento da Torre:\n");
    for(int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    
    printf("\n");

    // ---------------------------------------------------
    // Movimentação do Bispo → Cima e Direita (WHILE)
    // ---------------------------------------------------
    printf("Movimento do Bispo:\n");
    int contadorBispo = 0;
    while(contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    
    printf("\n");

    // ---------------------------------------------------
    // Movimentação da Rainha → Esquerda (DO-WHILE)
    // ---------------------------------------------------
    printf("Movimento da Rainha:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha < casasRainha);

    printf("\n");

    // ---------------------------------------------------
    // Movimentação do Cavalo → For + While Aninhados
    // Movimento em L: 2 casas para Baixo + 1 casa para Esquerda
    // ---------------------------------------------------
    printf("Movimento do Cavalo:\n");

    for(int i = 0; i < 1; i++) {
        int contadorBaixo = 0;
        
        // Primeiro movimento: duas casas para baixo
        while(contadorBaixo < casasCavaloBaixo) {
            printf("Baixo\n");
            contadorBaixo++;
        }
        
        // Segunda etapa: uma casa para a esquerda
        for(int j = 0; j < casasCavaloEsquerda; j++) {
            printf("Esquerda\n");
        }
    }

    printf("\nFim da simulação de movimentos.\n");
    
    return 0;
}
