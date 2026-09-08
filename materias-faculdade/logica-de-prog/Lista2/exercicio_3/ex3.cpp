#include <stdio.h>

main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero e par.\n");
    } else {
        printf("O numero e impar.\n");
    }

}
