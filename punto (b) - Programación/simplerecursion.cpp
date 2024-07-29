#include <iostream>

// Función factorial usando recursión simple con tipo grande
unsigned long long factorialSimple(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorialSimple(n - 1);
}

int main() {
    int number = 20;  // Usamos un número menor para evitar problemas de desbordamiento
    std::cout << "Factorial (simple recursion) de " << number << " es " << factorialSimple(number) << std::endl;
    return 0;
}