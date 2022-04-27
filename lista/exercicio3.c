#include <stdio.h>
#include <stdlib.h>

void main() {
    float base, altura;
    float area;

    printf("Insira os valores da base e da altura: \n");
    scanf("%f %f", &base, &altura);

    area = base * altura;
    printf("A area do retangulo eh de: %f", area);
}