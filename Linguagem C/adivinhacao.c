#include <stdio.h>

int main(){

    // IMPRIME CABECALHO DO NOSSO JOGO
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;

    /*printf("Qua e o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d \n", chute);
    */
    int tentativa = 5;

    while (tentativa != 0){
        printf("\nResta %d numero de tentativa\n", tentativa);
        printf("Qua e o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);
        tentativa =tentativa -1;

            if (chute == numerosecreto){
                printf("Parabens! Voce acertou\n");
                printf("Jogou bem!\n");
                tentativa =0;
            }
            else
            {
            if (chute > numerosecreto){
                printf("Seu chute foi maior que o numero Secreto!\n");
            }
            
            if (chute < numerosecreto){
                printf("Seu chute foi menor que o numero Secreto!\n");
            }
            
            
            }
    
   

    }
    

}