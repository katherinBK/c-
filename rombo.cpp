#include <iostream>
using namespace std;

int main() {
    int altura = 0;
    int espacio = 0;
    int espaciof = 0;
    int fila = 0;
    int col = 0;

    cout << "Ingrese un numero: ";
    cin >> altura;

  
    for (int i = 1; i <= altura; i++) {
        for (int espacio = 1; espacio <= altura - i; espacio++) {
            cout << " ";
        }
      
        for (int fila = 1; fila <= 2 * i - 1; fila++) {
            cout << "0";
        }
        cout << endl;
    }

   
    for (int i = altura - 1; i >= 1; i--) {
       
        for (int espaciof = 1; espaciof <= altura - i; espaciof++) {
            cout << " ";
        }
        
        for (int col = 1; col <= 2 * i - 1; col++) {
            cout << "0";
        }
        cout << endl;
    }

    return 0;
}