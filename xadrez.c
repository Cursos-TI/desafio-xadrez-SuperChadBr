#include <stdio.h>

int main() {

    int torre = 1; //Declaração da variável

    printf("Movimento da Torre ♜ :\n\n"); // Imprime uma mensagem indicando o movimento da Torre

    while (torre <= 5) // Loop while que executa enquanto a variável torre for menor ou igual a 5
    {
        printf("♜ Direita\n");
        torre++; // Incrementa a variável torre em 1
    }
    printf("\n");


    int bispo = 1;

    printf("Movimento do Bispo ♝ :\n\n");

    do // Loop do-while que executa enquanto a variável bispo for menor ou igual a 5
    {
        printf("♝ Cima, Direita\n");
        bispo++;
        
    } while (bispo <= 5); // Condição do loop do-while
    printf("\n");


    printf("Movimento da Rainha ♚ :\n\n");

    for (int rainha = 1; rainha <= 8; rainha++) // Loop for que executa 8 vezes
    {
        printf("♚ Esquerda\n");
    }
    printf("\n");
    

    return 0; // Finaliza o programa

}