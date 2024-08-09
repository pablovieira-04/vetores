#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10];
    int i;
    int pares = 0;

    printf("Digite 10 numeros inteiros:\n");
    for(i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<10; i++){
        if(vetor[i]%2 == 0){
            pares++;
        }
    }
    printf("Valores pares no vetor: %d\n", pares);

    return 0;


}