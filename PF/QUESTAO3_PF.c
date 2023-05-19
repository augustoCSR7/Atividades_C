//3 questao
#include <stdio.h>
#include <stdlib.h>
int main(void){
  int Vetor[5];
  
  for (int i = 0; i <= 4; i++){
    printf("Valor %d: ", 1 + i);
    scanf("%d", &Vetor[i]);
  }
  int menor =1;
  for (int i = 0; i <= 5; i++){
     for (int j = 0; j <= 5; j++){
       if(Vetor[j] == menor){
         menor = menor+1;
         break;
       }
    }
  }
  if(menor <= 0){
    menor = 1;
  }
 
  printf("Menor: %d", menor);
  return(0);
}
