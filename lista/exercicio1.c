#include <stdio.h>
#include <stdlib.h>

int main() {
    int fahrenheit, celsius;

    printf("Insira o valor em fahrenheit:\n");
    scanf("%d", &fahrenheit);

    celsius = 5 * (fahrenheit - 32)/9;
    printf("O valor de fahrenheit em celsius e de: %d", celsius);
    return 0;
}