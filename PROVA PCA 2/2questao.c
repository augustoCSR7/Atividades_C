#include <stdio.h>
#include <stdlib.h>

// 2)  Faça um programa que leia do teclado um vetor de inteiros de 10 posições preenchidos com valores menores ou iguais a 10. 
int main(){
    int i, j, v1[10], *pont, num_repet;
    
    for(i = 0; i < 10; i++){
        printf("Digite um valor para a posicao %d: ", i);
        scanf("%d", &v1[i]);
    }

    printf("Vet 1: [");
    for(i = 0; i < 10; i++){
        printf("  %d", v1[i]);
    }
    printf(" ]\n");

    for(i = 0; i < 10; i++){
        for(j = 0; j<10; j++){
            if(j != i){
	            if (v1[j] == v1[i]){
	                num_repet ++;
	                break;
	            }
            }
        }
    }

    pont = (int*)malloc(sizeof(int) * num_repet);
    int pos = 0;

        for(i = 0; i < 10; i++){
	        for(j = 0; j<10; j++){
	            if(j != i){
	            if (v1[j] == v1[i]){
	                pont[pos] = v1[i];
	                ++pos;
	
	            }
	            }
	        }
    }
    
    printf("Vet 2: [");
    for(i = 0; i< num_repet; i++){
        printf("  %d", pont[i]);
    }
    printf(" ]");

    free(pont);
    return 1;
}
