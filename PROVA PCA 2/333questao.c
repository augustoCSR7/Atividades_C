#include <stdio.h>
#include <stdlib.h>

int main(){
    int  N, M;
    printf("Digite o tamanho do vet: ");
    scanf("%d", &N);

    printf("Digite a quantidade de rotacoes: ");
    scanf("%d", &M);

    int* v1 = (int*)malloc(sizeof(int) * N);
    int* v = (int*)malloc(sizeof(int) * N);
    int* v2 = (int*)malloc(sizeof(int) * N);


    for (int i = 0; i < N; ++i){
        int val;
        printf("Numero para a posicao %d do vetor: ", i);
        scanf("%d", &val);
        v[i] = val;
    }

    for (int i = 0; i < N; ++i){
        v2[i] = v[i];
    }

    for (int i = 0; i < N; ++i){
        v1[i] = v[i];
    }

    for (M ; M  > 0; --M){
        int aux = v[N - 1];
        for (int i = 0; i < N ; i++){
            v[i] = v2[i - 1];
        }
        v[0] = aux;
        for (int i = 0; i < N; ++i){
            v2[i] = v[i];
        }

    }


    printf("Vet 1 = [");
    for (int i = 0; i < N; ++i){
        printf("  %d", v1[i]);
    }
    printf("  ]");

    printf("\nVet 2(Rotacionado) = [");
    for (int i = 0; i < N; ++i){
        printf("  %d", v[i]);
    }
    printf("  ]");

    free(v);
    free(v2);
    free(v1);
}
