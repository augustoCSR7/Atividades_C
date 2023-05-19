#include <stdio.h>
#include <stdlib.h>
  
int main(){
 int num, r, i;

 printf("Numero: ");
 scanf("%d", &num);
  
 for(i = 31; i >= 0; i--) {
    r = num >> i;
    
    if(r & 1) {
        printf("1");
    } else {
        printf("0");
    }
 }
  
}
