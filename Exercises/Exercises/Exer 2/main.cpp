#include <stdio.h>

void converterMinutos(int minutosTotais, int *horas, int *minutos) {
    *horas = minutosTotais / 60;
    *minutos = minutosTotais % 60;
}

int main() {
    int minutosPassados;
    int horas, minutos;


    printf("Digite o total de minutos passados desde meia-noite: ");
    scanf("%d", &minutosPassados);


    converterMinutos(minutosPassados, &horas, &minutos);


    printf("Tempo decorrido: %d horas e %d minutos\n", horas, minutos);

    return 0;
}
