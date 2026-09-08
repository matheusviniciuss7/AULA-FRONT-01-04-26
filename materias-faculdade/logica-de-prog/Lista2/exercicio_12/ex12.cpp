#include <stdio.h>
#include <stdlib.h>

main() {
	int n;
	float n1, n2, n3, me, ma;
	char conceito;
	
	printf("Digite seu numero de identificacao: ");
	scanf("%d", &n);
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	
	printf("Digite a nota 3: ");
	scanf("%f", &n3);
	
	system("cls");
	
	me = (n1 + n2 + n3) / 3;
	
	printf("A media dos exercicios e: %.2f", me);
	
	ma = (n1 + (n2 * 2) + (n3 * 3) + me) / 0.7;
	
	if (ma >= 90) {
		conceito = 'A';
	}
	else if (ma >=75) {
		conceito = 'B';
	}
	else if (ma >= 60) {
		conceito = 'C';
	}
	else if (ma >= 40) {
		conceito = 'D';
	}
	else {
		conceito = 'E';
	}
	
	printf("\nNumero de identificacao: %d\n", n); 
	printf("Nota 1: %.2f\n", n1); 
	printf("Nota 2: %.2f\n", n2); 
	printf("Nota 3: %.2f\n", n3); 
	printf("Media dos exercicios: %.2f\n", me); 
	printf("Media de aproveitamento: %.2f\n", ma); 
	printf("Conceito: %c\n", conceito); 
	
	if (conceito == 'A' || conceito == 'B' || conceito == 'C') { 
		printf("Situacao: Aprovado\n"); 
	} 
	else { 
		printf("Situacao: Reprovado\n"); 
	} 
}
