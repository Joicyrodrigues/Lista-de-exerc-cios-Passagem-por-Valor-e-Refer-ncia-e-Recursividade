#include <stdio.h>


void calcularIdade(int idadeEmDias, int *anos, int *meses, int *dias) {

    int diasPorAno = 365;
    int diasPorMes = 30;


    *anos = idadeEmDias / diasPorAno;
    int diasRestantes = idadeEmDias % diasPorAno;


    *meses = diasRestantes / diasPorMes;
    *dias = diasRestantes % diasPorMes;
}

int main() {
    int idadeEmDias;
    int anos, meses, dias;


    printf("Digite a idade em dias: ");
    scanf("%d", &idadeEmDias);


    calcularIdade(idadeEmDias, &anos, &meses, &dias);


    printf("Idade: %d anos, %d meses e %d dias\n", anos, meses, dias);

    return 0;
}
