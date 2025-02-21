#include <stdio.h>

void looprecursivo1(int numero1){ // Função recursiva que imprime o movimento da peça, um número especificado de vezes
    if (numero1 > 0) // Se o número for maior que zero, executa o bloco de código
    {
        printf("♜ Direita\n"); // Imprime uma mensagem indicando o movimento da peça
        looprecursivo1(numero1 - 1); // Chama a função novamente com o número decrementado em 1
    }
}

void looprecursivo2(int numero2){
    if (numero2 > 0)
    {
        printf("Direita\n");
    }
}

void looprecursivo3(int numero3){
    if (numero3 > 0)
    {
        printf("♚ Esquerda\n");
        looprecursivo3(numero3 - 1);
    }
}

int main() {

    int torre = 5;  // Declaração da variável

    printf("Movimento da Torre ♜ :\n\n"); // Imprime uma mensagem indicando qual peça vai se movimentar
    looprecursivo1(torre); // Chama a função recursiva com a variável como argumento
    printf("\n"); // Pula uma linha inteira


    int bispohorizontal = 5;
    int bispovertical = 5;

    printf("Movimento do Bispo ♝ :\n\n");

    while (bispovertical <= 5 && bispovertical > 0) // Loop while que executa enquanto a variável torre for menor ou igual a 5 e maior que 0
    {
        printf ("♝ Cima, ");
        looprecursivo2(bispohorizontal); // Chama a função recursiva, aninhando-a com o loop while
    }
    printf("\n");


    int rainha = 8;

    printf("Movimento da Rainha ♚ :\n\n");
    looprecursivo3(rainha);
    printf("\n");


    int cavalo = 1;

    printf("Movimento do Cavalo ♞ :\n\n");
    
    while (cavalo == 1)
    {
        for (int i = 1, j = 3 ; i <= 2 && j >= 2; i++, j--) // Executa um loop for com as variáveis 'i' e 'j', aninhando-o com while
    {
        printf("♞ Cima\n");
    }
        printf("♞ Direita\n\n");
        cavalo++; // Incrementa a variável 'cavalo' para sair do loop while
    }
    

    return 0; // Finaliza o programa

}