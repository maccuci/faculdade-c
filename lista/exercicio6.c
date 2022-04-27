#include <stdio.h>
#include <stdlib.h>

void main() {
    float base, altura;

    printf("Insira a base e altura do terreno: \n");
    scanf("%f %f", &base, &altura);

    float area = base * altura;
    printf("A area do terreno retangular eh: %f", area);
}