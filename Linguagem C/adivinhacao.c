#include <stdio.h>

int main(){

    // IMPRIME CABECALHO DO NOSSO JOGO
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;

    printf("Qua e o seu chute?");
    scanf("%d", &chute);
    printf("Seu chute foi %d", chute);

}