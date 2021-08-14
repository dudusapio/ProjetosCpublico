#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n = 10;
    exercicio2(10);
}

void exercicio2( int n ){
	int i,j;
	for(i = 0; i < n; i++) {
	    for(j = 0;j < i;j++){
		printf(" ");
        }
	    printf("\n");
	    for(j = n - i; j > 0; j--){
		printf("x");
        }
	}	
}
10

xxxxxxxxx
 xxxxxxxx
  xxxxxxx
   xxxxxx
    xxxxx
	 xxxx
	  xxx
	   xx
	    x