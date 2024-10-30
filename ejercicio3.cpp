/*
Desarrolla un algoritmo codificado en c++, que permita  ingre
sar números por teclado e informe el promedio de números leídos, la sumatoria de los mismos y el mayor de los números leídos,
el menor de los valores ingresados y la cantidad de números impares leídos, donde valor 0 indicará el fin del programa.
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
        }
        suma += num[i]; 
        cantidad++;     
    }

    if (cantidad > 0) {
        int mayor = *max_element(num, num + cantidad); 
        int menor = *min_element(num, num + cantidad);

        promedio = static_cast<double>(suma) / cantidad; 

        cout << "Números impares ingresados: ";
        for (int i = 0; i < cantidad; i++) {
            if (num[i] % 2 != 0) { 
                cout << num[i] << " "; 
            }
        }
        cout << endl; 

       
        cout << "Mayor: " << mayor << endl;
        cout << "Menor: " << menor << endl;
        cout << "Promedio: " << promedio << endl;
        cout << "Suma: " << suma << endl;

    } else {
        cout << "No se ingresaron números." << endl; 
    }

    return 0; 
}