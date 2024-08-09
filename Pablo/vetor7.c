#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main () {
    int X[10], i=0, menor, maior;
    menor= INT_MAX;
    maior= INT_MIN;

    for(i; i<10; i++){
        printf("Escreva um numero\n");
        scanf("%d", &X[i]);
        if(menor > X[i]){
            menor = X[i];    
        }
        if(maior < X[i]){
            maior = X[i];
        }
    }
    printf("\nO menor numero e %d\n", menor);
    printf("O maior numero e %d\n", maior);
    
    return 0;
}