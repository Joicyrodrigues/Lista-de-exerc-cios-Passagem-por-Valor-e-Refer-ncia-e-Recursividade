#include <iostream>

using namespace std;


int fibonacciRecursivo(int n) {

    if (n < 0) {
        return -1;
    }

    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}


int fibonacciIterativo(int n) {

    if (n < 0) {
        return -1;
    }
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int a = 0, b = 1, c;

    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;


    cout << "Digite a posição desejada na sequência de Fibonacci: ";
    cin >> n;


    int resultadoRecursivo = fibonacciRecursivo(n);
    if (resultadoRecursivo != -1) {
        cout << "Número de Fibonacci na posição " << n << " (recursivo) é: " << resultadoRecursivo << endl;
    } else {
        cout << "Posição inválida na abordagem recursiva." << endl;
    }


    int resultadoIterativo = fibonacciIterativo(n);
    if (resultadoIterativo != -1) {
        cout << "Número de Fibonacci na posição " << n << " (iterativo) é: " << resultadoIterativo << endl;
    } else {
        cout << "Posição inválida na abordagem iterativa." << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;


int fibonacciRecursivo(int n) {

    if (n < 0) {
        return -1;
    }

    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}


int fibonacciIterativo(int n) {

    if (n < 0) {
        return -1;
    }
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int a = 0, b = 1, c;

    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;


    cout << "Digite a posição desejada na sequência de Fibonacci: ";
    cin >> n;


    int resultadoRecursivo = fibonacciRecursivo(n);
    if (resultadoRecursivo != -1) {
        cout << "Número de Fibonacci na posição " << n << " (recursivo) é: " << resultadoRecursivo << endl;
    } else {
        cout << "Posição inválida na abordagem recursiva." << endl;
    }


    int resultadoIterativo = fibonacciIterativo(n);
    if (resultadoIterativo != -1) {
        cout << "Número de Fibonacci na posição " << n << " (iterativo) é: " << resultadoIterativo << endl;
    } else {
        cout << "Posição inválida na abordagem iterativa." << endl;
    }

    return 0;
}
