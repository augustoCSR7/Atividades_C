#include <stdio.h>

int main(){
	int soma, num, repeat, lim, y;
	soma = 0;
	num = 0;
	repeat = 0;
	lim = 0;
	y = 0;
	printf("Digite um numero: ");
	scanf("%d", &num);
	while(repeat <= num){
		y = y - 1;
		lim = num + y;
		soma = soma + lim;
		repeat++;
		if(lim==0);
			break;
	}
	printf("Repeticoes: %d \n", repeat);
	printf("A soma dos numeros eh igual a: %d \n", soma);
}

