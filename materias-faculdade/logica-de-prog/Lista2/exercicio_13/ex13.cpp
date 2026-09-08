#include <stdio.h>

main() {
    float lim, vel, perc;

    printf("Digite a velocidade maxima permitida: ");
    scanf("%f", &lim);

    printf("Digite a velocidade registrada: ");
    scanf("%f", &vel);

    if (vel <= lim) {
        perc = 0;

        printf("\nLimite da via: %.2f km/h\n", lim);
        printf("Velocidade registrada: %.2f km/h\n", vel);
        printf("Percentual excedido: %.2f%%\n", perc);
        printf("Nao houve infracao.\n");
    }
    else {
        perc = ((vel - lim) / lim) * 100;

        printf("\nLimite da via: %.2f km/h\n", lim);
        printf("Velocidade registrada: %.2f km/h\n", vel);
        printf("Percentual excedido: %.2f%%\n", perc);

        if (perc <= 20) {
            printf("Infracao media.\n");
        }
        else if (perc <= 50) {
            printf("Infracao grave.\n");
        }
        else {
            printf("Infracao gravissima.\n");
        }

        if (vel > 120) {
            printf("Alerta: velocidade extremamente elevada!\n");
        }
    }
}


