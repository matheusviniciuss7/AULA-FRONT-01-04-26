#include <stdio.h>
#include <string.h>

 main() {
    char nome[30];
    char sexo;
    char estadoCivil[20];
    int tempoCasamento;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sexo (F/M): ");
    scanf(" %c", &sexo);

    printf("Digite o estado civil: ");
    scanf("%s", estadoCivil);

    if ((sexo == 'F' || sexo == 'f') && (strcmp(estadoCivil, "CASADA") == 0 || strcmp(estadoCivil, "casada") == 0)) {
        printf("Digite o tempo de casamento em anos: ");
        scanf("%d", &tempoCasamento);
    }

}
