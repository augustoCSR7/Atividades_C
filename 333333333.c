#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, M;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    printf("Digite a quantidade de rotacoes: ");
    scanf("%d", &M);

    int v1 = (int)malloc(sizeof(int) * N);
    int vr = (int)malloc(sizeof(int) * N);

    for(int i = 0; i < N; ++i){
        int value;
        printf("Numero para a posicao %d do vetor: ", i);
        scanf("%d", &value);
        v1[i] = value;
    }

    int aux = 0;

    while(aux < M){
        if(M <= N){
        for(int i = 0; i < N; ++i){
            if (i == 0){
                vr[i] = v1[N - (i+aux + 1)];
                
            }
            else{
                if(i - (aux + 1) < 0){
                    vr[i] = v1[N + (i - (1 +aux))];
                }
                else vr[i] = v1[i - (1+aux)];
            }
        }
        aux ++;
        }

        else{
            M = M - N;
            if(M <= N){
            for(int i = 0; i < N; ++i){
                if (i == 0){
                    vr[i] = v1[N - (i+aux + 1)];
                
            }
            else{
                if(i - (aux + 1) < 0){
                    vr[i] = v1[N + (i - (1 +aux))];
                }
                else vr[i] = v1[i - (1+aux)];
            }
        }
        aux ++;
        }

        }
    }
    

    for(int i = 0; i < N; ++i){
        printf("%d  ", v1[i]);
    }

    printf("\n");
    for(int i = 0; i < N; ++i){
        printf("%d  ", vr[i]);
    }

    return 0;

}
