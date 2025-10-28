#include <stdio.h>

// -------------------- FUNÇÕES RECURSIVAS --------------------

// Torre: movimento reto para a direita
void moverTorre(int casas) {
    if (casas <= 0) return; // caso base da recursão
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Rainha: movimento reto para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return; // caso base
    printf("Esquerda\n");
    moverRainha(casas - 1); // recursão
}

// Bispo: diagonal para cima e à direita usando recursão + loops aninhados
void moverBispo(int casasVert, int casasHorz) {
    if (casasVert <= 0 || casasHorz <= 0) return; // caso base
    for (int i = 0; i < casasVert; i++) {          // loop vertical (cima)
        for (int j = 0; j < casasHorz; j++) {      // loop horizontal (direita)
            printf("Cima, Direita\n");
        }
    }
    // Chamadas recursivas para manter simulação de cada "passo" na diagonal
    moverBispo(casasVert - 1, casasHorz - 1);
}

// -------------------- FUNÇÃO PRINCIPAL --------------------
int main() {

    // Definição das casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int casasCavaloVertical = 2;   // duas casas para cima
    int casasCavaloHorizontal = 1; // uma casa para direita

    // -------------------- Torre --------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // -------------------- Bispo --------------------
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo); // loop aninhado + recursão
    printf("\n");

    // -------------------- Rainha --------------------
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // -------------------- Cavalo (loops complexos) --------------------
    printf("Movimento do Cavalo:\n");

    // Loop complexo: múltiplas variáveis, controle com break/continue
    int vertical = 0;
    int horizontal = 0;

    for(vertical = 0; vertical < casasCavaloVertical;) {
        printf("Cima\n");
        vertical++;
        if(vertical < casasCavaloVertical) continue; // repetir movimento para cima
        // Após completar vertical, mover horizontalmente
        for(horizontal = 0; horizontal < casasCavaloHorizontal; horizontal++) {
            printf("Direita\n");
            break; // só precisa de uma casa, então break
        }
        break; // sai do loop principal após movimento completo
    }

    printf("\nFim da simulação de movimentos.\n");

    return 0;
}
