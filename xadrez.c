#include <stdio.h>

int main() {
    
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavaloBaixo = 2;
    int casasCavaloEsquerda = 1;

    // Torre → For (movimento reto para a direita)
    printf("Movimento da Torre:\n");
    for(int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo → While (diagonal: cima e direita)
    printf("Movimento do Bispo:\n");
    int b = 0;
    while(b < casasBispo) {
        printf("Cima, Direita\n");
        b++;
    }
    printf("\n");

    // Rainha → Do-while (reta para a esquerda)
    printf("Movimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while(r < casasRainha);
    printf("\n");

    // Cavalo → Loops ANINHADOS (duas casas p/ baixo + uma p/ esquerda)
    printf("Movimento do Cavalo:\n");

    for(int i = 0; i < 1; i++) {
        int c = 0;
        while(c < casasCavaloBaixo) {
            printf("Baixo\n");
            c++;
        }
        for(int j = 0; j < casasCavaloEsquerda; j++) {
            printf("Esquerda\n");
        }
    }

    printf("\nFim da simulação de movimentos.\n");
    return 0;
}
