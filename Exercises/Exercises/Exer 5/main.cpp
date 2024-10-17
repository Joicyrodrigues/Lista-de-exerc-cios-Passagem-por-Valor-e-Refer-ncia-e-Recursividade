#include <iostream>
#include <vector>

using namespace std;


int pesquisaBinaria(const vector<int>& vetor, int valorBuscado) {
    int esquerda = 0;
    int direita = vetor.size() - 1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;

        if (vetor[meio] == valorBuscado) {
            return meio;
        } else if (vetor[meio] < valorBuscado) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }

    return -1;
}

int main() {

    vector<int> vetor = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};


    vector<int> valoresParaPesquisar = {75, 22, 90};


    for (int valor : valoresParaPesquisar) {
        int resultado = pesquisaBinaria(vetor, valor);
        if (resultado != -1) {
            cout << "O valor " << valor << " foi encontrado no índice " << resultado << "." << endl;
        } else {
            cout << "O valor " << valor << " não foi encontrado no vetor." << endl;
        }
    }

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;


int pesquisaBinaria(const vector<int>& vetor, int valorBuscado) {
    int esquerda = 0;
    int direita = vetor.size() - 1;

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;

        if (vetor[meio] == valorBuscado) {
            return meio;
        } else if (vetor[meio] < valorBuscado) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }

    return -1;
}

int main() {

    vector<int> vetor = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};


    vector<int> valoresParaPesquisar = {75, 22, 90};


    for (int valor : valoresParaPesquisar) {
        int resultado = pesquisaBinaria(vetor, valor);
        if (resultado != -1) {
            cout << "O valor " << valor << " foi encontrado no índice " << resultado << "." << endl;
        } else {
            cout << "O valor " << valor << " não foi encontrado no vetor." << endl;
        }
    }

    return 0;
}
