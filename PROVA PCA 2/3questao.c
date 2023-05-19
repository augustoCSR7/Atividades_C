#include <stdio.h>
#include <stdlib.h>
int main(void){
  int n, m;
  int *vetor;
  int aux = 0;
  printf("N:");
  scanf("%d",&n);
  vetor = (int *) malloc(n * sizeof(int));
	for (int i = 0; i < n; i++){
    	printf("\nDigite vetor na posicao %d : ", i);
    	scanf("%d", &vetor[i]);
  }
  
  printf("\nM:");
  scanf("%d",&m);

  while(m > 0){
    aux = vetor[n-1];
    for (int i = n - 1; i > 0; i--){
      vetor[i] = vetor[i-1];
    }

    vetor[0] = aux;
    m--;
  }
  
  printf("vetor rotacionado:");
 for (int i = 0; i < n; i++){
    printf(" %d ", vetor[i] );
  }
  
  return(0);
}
