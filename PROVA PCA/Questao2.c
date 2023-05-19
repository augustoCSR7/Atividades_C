#include<stdio.h>
int main(){
	
	int num, x1, x2, x3;
	//Se num=1, terá mais resultados
	for(num=500;num<1000;num++){
		x1=num%10;
		x2=num/10%10;
		x3=num/100%10;
		if(num==((x1*x1*x1)+(x2*x2*x2)+(x3*x3*x3)))
		printf("%d \n", num);
		
	}
	return 0;
}
