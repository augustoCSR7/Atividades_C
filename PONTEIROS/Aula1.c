#include <stdio.h>

int main(){
	
	int x = 10;
	int *ponteiro;
	ponteiro = &x;	
	
	int y = 20;
	*ponteiro = y;
	
	//int *ponteiro;
	//ponteiro = &x;
	
	printf("%i \n", *ponteiro);
	
	
	
	
	
	
	
	
	return 0;
}
