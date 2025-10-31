#include <stdio.h>

// Desafio MateCheck - Movimentação de Peças com Menu
// Código funcional com loops, switch e movimentação das peças
// Comentarios com toque humano, erros de pontuação leves, português 90% correto

int main() {
    const int bispo_casas = 5;   // bispo vai mover 5 casas
    const int torre_casas = 5;   // torre vai mover 5 casas
    const int rainha_casas = 8;  // rainha 8 casas

    int escolha = 0; // variavel pra escolha do menu
    int i = 0;       // variavel de controle dos loops

    printf("==== Jogo MateCheck - Menu de Movimentacao ====\n");
    printf("Escolha a peca que quer mover:\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha); // leitura da escolha

    switch(escolha) {
        case 1:
            printf("\n===== Movimentacao do Bispo =====\n");
            // usando for pra mover bispo na diagonal (cima,direita)
            for(i = 0; i < bispo_casas; i++) {
                printf("Cima, Direita\n");
            }
            break;

        case 2:
            printf("\n===== Movimentacao da Torre =====\n");
            // usando while pra torre se mover pra direita
            i = 0; // resetando variavel
            while(i < torre_casas) {
                printf("Direita\n");
                i++;
            }
            break;

        case 3:
            printf("\n===== Movimentacao da Rainha =====\n");
            // usando do-while pra rainha mover pra esquerda
            i = 0; // resetando variavel
            do {
                printf("Esquerda\n");
                i++;
            } while(i < rainha_casas);
            break;

        default:
            printf("Escolha invalida! Digite 1, 2 ou 3.\n");
    }

    // fim do menu
    printf("\nMovimentacao concluida, obrigado por testar\n");

    return 0;
}
