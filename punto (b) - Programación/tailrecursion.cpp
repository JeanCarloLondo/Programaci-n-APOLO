#include <iostream>

// Función factorial usando recursión de cola con tipo grande
unsigned long long factorialTailRecursion(int n, unsigned long long a = 1) {
    if (n == 0) {
        return a;
    }
    return factorialTailRecursion(n - 1, n * a);
}

int main() {
    int number = 20;  // Usamos un número menor para evitar problemas de desbordamiento
    std::cout << "Factorial (tail recursion) de " << number << " es " << factorialTailRecursion(number) << std::endl;
    return 0;
}