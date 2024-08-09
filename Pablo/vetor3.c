#include <stdio.h>

int main() {
    float vetor[5];
    float soma = 0.0;
    float media;

    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 5;

    printf("Valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2f\n", vetor[i]);
    }
    printf("Média: %.2f\n", media);

    return 0;
}





