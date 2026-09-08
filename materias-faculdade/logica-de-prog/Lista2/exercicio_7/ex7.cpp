#include <stdio.h>

int main() {
    int a, cont;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    if(a % 2 == 0){
        cont = a + 5;
    } else {
        cont = a + 8;
    }

	printf("O valor de C e: %d\n", cont);
	
} 
