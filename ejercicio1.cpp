#include <iostream>
using namespace std;

int main() {
    int num[10];
    int suma = 0;
    int positivos = 0;

    cout << "Ingrese 10 números:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> num[i];
        suma += num[i];
        if (num[i] > 0) {
            positivos++;
        }
    }
    std::cout << "Sumatoria de los números ingresados: " << suma << endl;
    std::cout << "Cantidad de números positivos: " << positivos << endl;

    return 0;
}