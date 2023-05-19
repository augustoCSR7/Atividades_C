#include <stdio.h>
int main(){
	
	int a1, n, r, an, i, resultado = 0;
	
	printf("Digite o valor: ");
	scanf("%d", &a1);
	printf("Digite o valor: ");
	scanf("%d", &n);
	printf("Digite o valor: ");
	scanf("%d", &r);
	an = a1 +((n-1)*r);
	printf("An= %d \n", an);
	
 	for (i = 2; i <= an / 2; i++) {
    	if (an % i == 0) {
       		resultado++;
       		break;
    	}
 	}
 	if (resultado == 0)
    	printf("Numero primo\n");
 	else
    	printf("Nao eh primo\n");
 return 0;
}
