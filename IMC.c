#include <stdio.h>

int main(){
	int peso, altura, imc;
	
	printf("Digite o seu peso: ");
	scanf("%d", &peso);
	
	printf("Digite a sua altura: ");
	scanf("%d", &altura);
	
	imc = peso / (altura * altura);
	
	printf("IMC: %d", imc);
}
