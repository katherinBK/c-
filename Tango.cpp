


#include <iostream>

using namespace std;

const int TAMANO = 6; // Tamaño del tablero (6x6)
const char SIMBOLO1 = '$';
const char SIMBOLO2 = '#';

char tablero[TAMANO][TAMANO] = {{'.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.'},
                              {'.', '.', '.', '.', '.', '.'}};

bool verificarGanador() {    // Verificar filas y columnas
    for (int i = 0; i < TAMANO; i++) {
        int cuentaSimbolo1 = 0, cuentaSimbolo2 = 0;
        for (int j = 0; j < TAMANO; j++) {
            if (tablero[i][j] == SIMBOLO1) {
                cuentaSimbolo1++;
            } else if (tablero[i][j] == SIMBOLO2) {
                cuentaSimbolo2++;
            }
        }
        if (cuentaSimbolo1 != cuentaSimbolo2) {
            return false;
        }
    }

    // Verificar columnas
    for (int i = 0; i < TAMANO; i++) {
        int cuentaSimbolo1 = 0, cuentaSimbolo2 = 0;
        for (int j = 0; j < TAMANO; j++) {
            if (tablero[j][i] == SIMBOLO1) {
                cuentaSimbolo1++;
            } else if (tablero[j][i] == SIMBOLO2) {
                cuentaSimbolo2++;
            }
        }
        if (cuentaSimbolo1 != cuentaSimbolo2) {
            return false;
        }
    }

    // Si se llega a este punto, significa que hay la misma cantidad de simbolos en cada fila y columna
    return true;
}

void mostrarTablero() {
      const int TAMANO = 6;

    for (int fila = 0; fila < TAMANO; fila++) {
        // Fila superior
        cout << "-";
        for (int columna = 0; columna < TAMANO; columna++) {
            cout << "----";
        }
        cout << endl;

        // Fila interior
        for (int columna = 0; columna < TAMANO; columna++) {
            cout << "|   ";
        }
        cout << "|" << endl;
    }

    // Fila inferior
    cout << "-";
    for (int columna = 0; columna < TAMANO; columna++) {
        cout << "----";
    }
    cout << endl;
}

int main() {
    int movimientos = 0;

    while (movimientos < TAMANO * TAMANO) {
        mostrarTablero();

        cout << "Ingrese la fila (0-" << TAMANO - 1 << ") y columna (0-" << TAMANO - 1 << ") para colocar " << (movimientos % 2 == 0 ? SIMBOLO1 : SIMBOLO2) << ": ";
        int fila, columna;
        cin >> fila >> columna;

        // Primero verificamos si las coordenadas están dentro de los límites
        if (fila >= 0 && fila < TAMANO && columna >= 0 && columna < TAMANO) {
            // Luego verificamos si la casilla está vacía
            if (tablero[fila][columna] == '.') {
                tablero[fila][columna] = (movimientos % 2 == 0 ? SIMBOLO1 : SIMBOLO2);
                movimientos++;

                if (verificarGanador()) {
                    mostrarTablero();
                    cout << "¡Ganaste!" << endl;
                    return 0;
                }
            } else {
                cout << "Movimiento inválido. Casilla ocupada." << endl;
            }
        } else {
            cout << "Movimiento inválido. Coordenadas fuera de rango." << endl;
        }
    }

    cout << "Empate." << endl;
    return 0;
}