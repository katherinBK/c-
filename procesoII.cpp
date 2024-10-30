#include <iostream>
#include <random> //libreria para generar  numeros de forma aleatoria

int main (){
    //declaramos las variables a ser utilizadas
 int  lim = 0;
 int num = 0;
 int suma = 0;
 float promedio = 0; 
    std::cout << "Ingrese un numero entre 0 y 10";
    std::cin >> lim; 
    //una condicional para verificar que los numeros ingresados sean mayor o igual a 0 y no mayor a 10
    if (lim <= 10 && lim >= 0) {
     std::cout <<"El numero ingresado es:" << lim;
    } else{
        std::cout << "Por favor ingrese un numero entre 0 y 10";
    }
     std::random_device rd; //inicializamos la libreria random     
     std::uniform_int_distribution<> dis(1, 100); //se especifica el rango de numeros que pdrian ser seleccionados
    std::mt19937 gen(rd());  //generador de numeros                    
    //inicializamos el vector
    std::vector<int> array(lim);

    for (num = 0; num <= lim; num++) {
        array[num ] = dis(gen);
        suma += array[num];
    }
    promedio = suma/lim;

std::cout  <<"La sumatoria de los numeros es:"<<suma;
std::cout <<"El promedio de los numeros es:" <<promedio;

    return 0;
}