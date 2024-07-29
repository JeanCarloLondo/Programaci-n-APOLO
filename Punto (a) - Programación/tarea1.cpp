// Escriba una función en C o C++ que reciba el nombre de un programa como parámetro, lo ejecute y espere a que termine su ejecución.

#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <string>

void ejecutarPrograma(const std::string &prog) {
    // Usamos std::system para ejecutar el programa
    int resultado = std::system(prog.c_str());

    // Esperamos un corto período de tiempo para permitir que el proceso termine
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // Verificamos el resultado de la ejecución
    if (resultado == -1) {
        std::cerr << "Error al ejecutar el programa: " << prog << std::endl;
    } else {
        std::cout << "El programa " << prog << " terminó con el código de salida " << resultado << std::endl;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Uso: " << argv[0] << " <nombre_del_programa>" << std::endl;
        return EXIT_FAILURE;
    }

    std::string nombrePrograma = argv[1];
    ejecutarPrograma(nombrePrograma);

    return EXIT_SUCCESS;
}