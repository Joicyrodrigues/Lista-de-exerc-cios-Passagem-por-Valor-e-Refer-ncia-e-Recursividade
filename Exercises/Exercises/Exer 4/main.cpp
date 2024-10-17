#include <iostream>
#include <vector>

using namespace std;


void lerMatriz(vector<vector<int>>& matriz, int M, int N) {
    cout << "Digite os elementos da matriz (" << M << "x" << N << "):" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(const vector<vector<int>>& matriz) {
    int M = matriz.size();
    int N = matriz[0].size();
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}


vector<vector<int>> calcularTransposta(const vector<vector<int>>& matriz) {
    int M = matriz.size();
    int N = matriz[0].size();
    vector<vector<int>> transposta(N, vector<int>(M));

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            transposta[j][i] = matriz[i][j];
        }
    }

    return transposta;
}

vector<vector<int>> multiplicarPorFator(const vector<vector<int>>& matriz, int K) {
    int M = matriz.size();
    int N = matriz[0].size();
    vector<vector<int>> resultado(M, vector<int>(N));

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            resultado[i][j] = matriz[i][j] * K;
        }
    }

    return resultado;
}


vector<vector<int>> adicionarMatrizes(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) {
    int M = matriz1.size();
    int N = matriz1[0].size();
    vector<vector<int>> resultado(M, vector<int>(N));

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    return resultado;
}

int main() {
    int M, N;


    cout << "Digite o número de linhas (M) e colunas (N) da matriz: ";
    cin >> M >> N;


    if (M <= 0 || M > 20 || N <= 0 || N > 25) {
        cout << "Dimensões inválidas. M deve ser <= 20 e N deve ser <= 25." << endl;
        return 1;
    }

    vector<vector<int>> matriz(M, vector<int>(N));


    lerMatriz(matriz, M, N);


    vector<vector<int>> transposta = calcularTransposta(matriz);
    cout << "Matriz transposta:" << endl;
    imprimirMatriz(transposta);


    int K;
    cout << "Digite o fator K para multiplicar a matriz: ";
    cin >> K;


    vector<vector<int>> multiplicada = multiplicarPorFator(matriz, K);
    cout << "Matriz multiplicada por " << K << ":" << endl;
    imprimirMatriz(multiplicada);


    vector<vector<int>> matriz2(M, vector<int>(N));
    cout << "Digite os elementos da segunda matriz (" << M << "x" << N << "):" << endl;
    lerMatriz(matriz2, M, N);


    vector<vector<int>> soma = adicionarMatrizes(matriz, matriz2);
    cout << "Matriz resultante da adição:" << endl;
    imprimirMatriz(soma);

    return 0;
}
