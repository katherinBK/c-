#include <allegro>

int main() {
    allegro_init(); // Inicializa Allegro
    install_keyboard(); // Instala el teclado

    // Establece la profundidad de color y la resolución de la ventana
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);

    // Bucle principal
    while (!keypressed()) { // Continúa hasta que se presione una tecla
        clear_to_color(screen, makecol(255, 255, 255)); // Limpia la pantalla con blanco

        // Dibuja un círculo rojo en el centro de la pantalla
        circlefill(screen, 400, 300, 50, makecol(255, 0, 0)); // (superficie, x, y, radio, color)

        // Actualiza la pantalla
        textout_ex(screen, font, "Presiona cualquier tecla para salir", 200, 550, makecol(0, 0, 0), -1);
        rest(100); // Espera un momento para evitar un bucle demasiado rápido
    }

    return 0; // Salida del programa
}
END_OF_MAIN(); // Fin de la función main