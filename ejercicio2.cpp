/*
Desarrolla un algoritmo codificado en c++, que permita  ingresar números por teclado e informe el promedio de números leídos,
 la sumatoria de los mismos y el mayor de los números leídos,
  un valor 0 indicará el fin del programa.
*/

#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    const int nums = 100; 
    int num[nums];        
    int suma = 0;      
    int cantidad = 0;  
    double promedio = 0; 
    cout << "Ingresar numeros (0 para finalizar): ";

    
    for (int i = 0; i < nums; i++) {
        cin >> num[i]; 
        if (num[i] == 0) {
            break; 
        suma += num[i]; 
        cantidad++;     
    }

    if (cantidad > 0) {
        int mayor = *max_element(num, num + cantidad); 

        promedio = (suma) / cantidad;

        cout << "mayor: " << mayor << endl;
        cout << "promedio es: " << promedio << endl;
        cout << "suma : " << suma << endl;
    } else {
        cout << "No se ingresaron números." << endl; 
    }

    return 0; 
}
}