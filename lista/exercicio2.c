#include <stdio.h>
#include <stdlib.h>

void main() {
    float n1, n2, n3; //n1 = *2 n2 = *3 n3 = *5
    float mediaFinal;

    printf("Insira os valores das três notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    if(n1 == 0 && n2 == 0 && n3 == 0)
        return;
    
    mediaFinal = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
    printf("A media final do aluno foi: %f", mediaFinal);
}