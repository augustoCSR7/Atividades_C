//2 questao
#include <stdio.h>
#include <stdbool.h>

#define TAM 5

int main(){
	
    int Vetor[TAM], Verificar[TAM];
    int i, j;

    for(i = 0; i < TAM - 1; i++){
        printf("Valor %d: ", 1 + i);
        scanf("%d", &Vetor[i]);
    }

    for(i = 0; i < TAM; i++){
        Verificar[i] = 0;
    }

    for(i = 0; i < TAM - 1; i++){
    	
        for(j = 0; j < TAM; j++){
        	
            if (Vetor[i] == j + 1){
                Verificar[j] = 1;
            }
        }
    }

    for(i = 0; i < TAM; i++){
    	
        if (Verificar[i] == 0){
            printf("%d", i + 1);
            break;
        }
    }
}
