# include <iostream>

int main (){
    int matematica = 0;
    int literatura = 0;
    int quimica = 0;
    int ciencias = 0;
    int promedio = 0;
    int suma = 0;

std::cout << "Ingrese su calificacion en matematica";
std::cin >> matematica;
std::cout << "Ingrese su calificacion en literatura ";
std::cin >> literatura;
std::cout << "Ingrese su calificacion en quimica";
std::cin >> quimica;


suma = ciencias + matematica + literatura + quimica;
promedio = suma/3;

std::cout << "su promedio es:"<< promedio;


}