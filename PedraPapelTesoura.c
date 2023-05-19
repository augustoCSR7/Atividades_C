#include <stdio.h>
int main(){
	int num, num2;
	printf("Escolha Pedra(1), Papel(2) ou Tesoura(3): \n");
	scanf("%d", &num);
	printf("Escolha Pedra(1), Papel(2) ou Tesoura(3): \n");
	scanf("%d", &num2);
	
	if (num==1 && num2==2)
	printf("usuario 1 escolheu Pedra e usuario 2 escolheu Papel, Parabens usuario 2, voce venceu");
	if (num==1 && num2==1)
	printf("usuario 1 escolheu Pedra e usuario 2 escolheu Pedra, Jogo empatado");
	if (num==1 && num2==3)
	printf("usuario 1 escolheu Pedra e usuario 2 escolheu Tesoura, Parabens usuario 1, voce venceu");
	if (num==2 && num2==1)
	printf("usuario 1 escolheu Papel e usuario 2 escolheu Pedra, Parabens usuario 1, voce venceu");
	if (num==2 && num2==2)
	printf("usuario 1 escolheu Papel e usuario 2 escolheu Papel, Jogo empatado");
	if (num==2 && num2==3)
	printf("usuario 1 escolheu Papel e usuario 2 escolheu Tesoura, Parabens usuario 2, voce venceu");
	if (num==3 && num2==1)
	printf("usuario 1 escolheu Tesoura e usuario 2 escolheu Pedra, Parabens usuario 2, voce venceu");
	if (num==3 && num2==2)
	printf("usuario 1 escolheu Tesoura e usuario 2 escolheu Papel, Parabens usuario 1, voce venceu");
	if (num==3 && num2==3)
	printf("usuario 1 escolheu Tesoura e usuario 2 escolheu Tesoura, Jogo empatado");
	if (num== -1)
		printf("O jogo acabou!");
}
