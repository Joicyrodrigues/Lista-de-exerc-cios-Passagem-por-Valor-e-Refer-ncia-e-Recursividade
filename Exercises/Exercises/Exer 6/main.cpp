#include <iostream>

using namespace std;


int somatorioRecursivo(int N) {

    if (N <= 0) {
        return -1;
    }

    if (N == 1) {
        return 1;
    }

    return N + somatorioRecursivo(N - 1);
}


int somatorioIterativo(int N) {

    if (N <= 0) {
        return -1;
    }

    int soma = 0;
    for (int i = 1; i <= N; ++i) {
        soma += i;
    }
    return soma;
}

int main() {
    int N;


    cout << "Digite um valor inteiro positivo para N: ";
    cin

