#include <stdio.h>

main() {
    int a, cont;
    
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    
    if (a > 0) {
		cont = a * 2; 
	}
	if (a < 0){
		cont = a * 3;
	}
	
	 printf("O valor de C e: %d\n", cont);
}
