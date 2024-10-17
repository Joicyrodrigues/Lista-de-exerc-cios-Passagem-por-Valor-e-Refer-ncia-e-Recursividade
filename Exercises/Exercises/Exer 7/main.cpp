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


    cout << "Digite a posi��o desejada na sequ�ncia de Fibonacci: ";
    cin >> n;


    int resultadoRecursivo = fibonacciRecursivo(n);
    if (resultadoRecursivo != -1) {
        cout << "N�mero de Fibonacci na posi��o " << n << " (recursivo) �: " << resultadoRecursivo << endl;
    } else {
        cout << "Posi��o inv�lida na abordagem recursiva." << endl;
    }


    int resultadoIterativo = fibonacciIterativo(n);
    if (resultadoIterativo != -1) {
        cout << "N�mero de Fibonacci na posi��o " << n << " (iterativo) �: " << resultadoIterativo << endl;
    } else {
        cout << "Posi��o inv�lida na abordagem iterativa." << endl;
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


    cout << "Digite a posi��o desejada na sequ�ncia de Fibonacci: ";
    cin >> n;


    int resultadoRecursivo = fibonacciRecursivo(n);
    if (resultadoRecursivo != -1) {
        cout << "N�mero de Fibonacci na posi��o " << n << " (recursivo) �: " << resultadoRecursivo << endl;
    } else {
        cout << "Posi��o inv�lida na abordagem recursiva." << endl;
    }


    int resultadoIterativo = fibonacciIterativo(n);
    if (resultadoIterativo != -1) {
        cout << "N�mero de Fibonacci na posi��o " << n << " (iterativo) �: " << resultadoIterativo << endl;
    } else {
        cout << "Posi��o inv�lida na abordagem iterativa." << endl;
    }

    return 0;
}
