#include <stdio.h>

main() {
	
	int a, b, c;
	
	printf("Escreva o valor de A: ");
	scanf("%d", &a);
	
	printf("Escreva o valor de B: ");
	scanf("%d", &b);
	
	printf("Escreva o valor de C: ");
	scanf("%d", &c);
	
	if (a + b < c){
		printf("A soma de A e B e menor que C");
	} else {
		printf("A soma de A e B e maior que C");
	}
}
