#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i ;
  	FILE *pont_arq; 
  	char palavras[30];
  
 
  	pont_arq = fopen("arquivo_palavra.txt", "w");
 
  	if(pont_arq == NULL){
  		printf("Erro na abertura do arquivo!");
  		return 1;
  }
	for(i = 1; i < 4; i++){
		printf("Escreva na %d linha: ",i);
		scanf("%s", palavras);
	}
  	fprintf(pont_arq, "%s", palavras);
  	
  	printf("O arquivo contem %d linhas \n",i-1);
  	
  	fclose(pont_arq);
  
  	printf("Dados salvos!");
  
  	getch();
  	return(0);
}
