#include <iostream>

using namespace std;

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int limite;

    cout << "Ingrese el límite para la serie de números primos: ";
    cin >> limite;

    cout << "Números primos hasta " << limite << ":\n";
    for (int i = 2; i <= limite; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
