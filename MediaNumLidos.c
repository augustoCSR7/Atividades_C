#include <stdio.h>

int main() {
	int opcao, num, quantidade, soma;
	opcao = 0;
	num = 0;
	quantidade = 0;
	soma = 0;
	while(num != -1){
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(num == -1){
			break;
		}else{	
		soma = soma + num;
		quantidade++;
		}
	}
	printf("A soma eh %d \n", soma);
	printf("A quantidade de repeticoes foi de %d vezes \n", quantidade);
	printf("A media eh igual a %d \n", soma/quantidade);
	return 0;
}
