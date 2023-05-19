//1) Faça um programa em C leia um vetor de inteiros de 5 posições do teclado e imprima se o vetor lido é uma permutação ou não. 
#include <stdio.h>
#include <stdbool.h>
#define TAM 5

int main(){
    int Vetor[TAM], Verificar[TAM];
    bool permutacao = true;

    for (int i = 0; i < TAM; i++){
        printf("Valor %d: ", 1 + i);
        scanf("%d", &Vetor[i]);
    }

    for (int i = 0; i < TAM; i++){
        Verificar[i] = 0;
    }

    for (int i = 0; i < TAM; i++){
      
        for (int j = 0; j < TAM; j++){
          
            if (Vetor[i] == j + 1){
                Verificar[j] = 1;
            }
        }
    }

    for (int i = 0; i < TAM; i++){
        if (Verificar[i] == 0){
            permutacao = false;
        }
    }

    if (permutacao){
        printf("O vetor e uma permutacao");
    }
    else{
        printf("O vetor nao eh uma permutacao");
    }
}
