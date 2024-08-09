#include <stdio.h>
#include <stdlib.h>

int main() {
    float vetor[10];
    int Nnegativos = 0;
    float Spositivos = 0.0;

    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            Nnegativos++;
        } else {
            Spositivos += vetor[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", Nnegativos);
    printf("Soma dos números positivos: %.2f\n", Spositivos);

    return 0;
}
