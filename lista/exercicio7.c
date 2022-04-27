#include <stdio.h>
#include <stdlib.h>

void main() {
    float num1, num2, num3;
    float valorFinal;

    printf("Insira os tres numeros para multiplicar: \n");
    scanf("%f %f %f", &num1, &num2, &num3);

    valorFinal = num1 * num2 * num3;
    printf("O valor final eh de: %f", valorFinal);
}