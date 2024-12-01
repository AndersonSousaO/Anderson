#include <stdio.h>
#include <string.h>

int main(){

    char nome[50];
    int idade;
    float altura;


    printf("Digite seu nome:");
    scanf("%s", nome);   
    printf("Seu nome é: %s\n", nome);
    
    printf("Digite sua Idade:");
    scanf("%d", &idade);   
    printf("Seu nome é: %d\n", idade);

    printf("Digite sua Altura:");
    scanf("%f", &altura);   
    printf("Sua Altura é: %.2f\n", altura);
    

}

