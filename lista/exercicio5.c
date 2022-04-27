#include <stdio.h>
#include <stdlib.h>

void main() {
    float valor, valorFinal;

    printf("Insira o valor para ver seu antecessor:\n");
    scanf("%f", &valor);

    valorFinal = valor - 1;
    printf("O valor do antecessor eh %f", valorFinal);
}