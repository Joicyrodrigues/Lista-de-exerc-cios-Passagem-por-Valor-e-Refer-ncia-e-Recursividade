#include <stdio.h>


void converterTempo(int segundosTotais, int *horas, int *minutos, int *segundos) {
    *horas = segundosTotais / 3600;
    int segundosRestantes = segundosTotais % 3600;
    *minutos = segundosRestantes / 60;
    *segundos = segundosRestantes % 60;
}

int main() {
    int segundosTotais;
    int horas, minutos, segundos;


    printf("Digite o tempo total em segundos: ");
    scanf("%d", &segundosTotais);


    converterTempo(segundosTotais, &horas, &minutos, &segundos);


    printf("Tempo: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
