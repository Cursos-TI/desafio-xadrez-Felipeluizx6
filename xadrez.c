#include <stdio.h>

// Desafio MateCheck - Versao Final Avancada
// Movimentacao de pecas com recursao, loops complexos e menu interativo

// Recursao Torre
void moverTorre(int casas) {
    if(casas <= 0) return; // condicao de parada
    printf("Direita\n"); // movimentando uma casa
    moverTorre(casas - 1); // chamada recursiva
}

// Recursao Rainha
void moverRainha(int casas) {
    if(casas <= 0) return; // condicao de parada
    printf("Esquerda\n"); // movimentando uma casa
    moverRainha(casas - 1); // chamada recursiva
}

// Recursao + loops aninhados Bispo
void moverBispo(int casas) {
    if(casas <= 0) return;
    for(int i = 0; i < casas; i++) { // loop vertical
        for(int j = 0; j < casas; j++) { // loop horizontal
            printf("Cima, Direita\n"); // cada casa na diagonal
        }
    }
}

// Loops complexos Cavalo (2 cima, 1 direita)
void moverCavalo() {
    int vertical, horizontal;
    for(vertical = 0; vertical < 2; vertical++) { // 2 casas para cima
        if(vertical == 1) continue; // exemplo de controle
        printf("Cima\n");
        horizontal = 0;
        while(horizontal < 1) { // 1 casa para direita
            printf("Direita\n");
            horizontal++;
            if(horizontal > 0) break;
        }
    }
    printf("Cima\n"); // segunda casa pra cima depois do continue
}

int main() {
    const int bispo_casas = 5;
    const int torre_casas = 5;
    const int rainha_casas = 8;

    int escolha;
    char continuar = 's';

    printf("==== Jogo MateCheck - Versao Final Avancada ====\n");

    while(continuar == 's' || continuar == 'S') {
        printf("\nEscolha a peca que quer mover:\n");
        printf("1 - Torre\n");
        printf("2 - Rainha\n");
        printf("3 - Bispo\n");
        printf("4 - Cavalo\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        switch(escolha) {
            case 1:
                printf("\n===== Movimentacao da Torre =====\n");
                moverTorre(torre_casas);
                break;
            case 2:
                printf("\n===== Movimentacao da Rainha =====\n");
                moverRainha(rainha_casas);
                break;
            case 3:
                printf("\n===== Movimentacao do Bispo =====\n");
                moverBispo(bispo_casas);
                break;
            case 4:
                printf("\n===== Movimentacao do Cavalo =====\n");
                moverCavalo();
                break;
            default:
                printf("Escolha invalida! Digite 1,2,3 ou 4\n");
        }

        // Pergunta se usuario quer continuar
        printf("\nDeseja mover outra peca? (s/n): ");
        scanf(" %c", &continuar); // espaco antes de %c para capturar enter
    }

    printf("\nFim do jogo MateCheck, obrigado por testar!\n");
    return 0;
}
