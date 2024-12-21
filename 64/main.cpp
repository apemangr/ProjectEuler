#include <iostream>
#include <cmath>
#include <vector>

std::vector<std::pair<int, int>> calcularRaizComoFracciones(int n, int iteraciones) {
    // n es el número cuya raíz cuadrada se quiere aproximar.
    // iteraciones es el número de términos de la secuencia.
    std::vector<std::pair<int, int>> secuencia; // Para guardar los pares numerador/denominador
    double raizReal = sqrt(n); // Raíz cuadrada real (para referencia)

    int entero = static_cast<int>(raizReal); // Parte entera de la raíz cuadrada
    int numerador = 1;                       // Inicializamos con numerador 1
    int denominador = entero;                // Parte entera como denominador inicial

    secuencia.push_back({entero, 1}); // Guardamos el primer término como una fracción (entero / 1)

    for (int i = 1; i < iteraciones; ++i) {
        int siguienteDenominador = n - denominador * denominador;
        if (siguienteDenominador == 0) break; // Terminamos si encontramos una raíz exacta

        siguienteDenominador /= numerador;   // Simplificamos el denominador
        int siguienteEntero = (entero + denominador) / siguienteDenominador;
        numerador = siguienteDenominador;
        denominador = siguienteEntero * siguienteDenominador - denominador;

        secuencia.push_back({siguienteEntero, numerador}); // Guardamos la fracción
    }

    return secuencia;
}

void imprimirSecuencia(const std::vector<std::pair<int, int>>& secuencia) {
    for (const auto& fraccion : secuencia) {
        std::cout << fraccion.first << " + 1 / (" << fraccion.second << ")\n";
    }
}

int main() {
    int n = 13; // Número cuya raíz cuadrada queremos aproximar
    int iteraciones = 10; // Número de fracciones a calcular

    if (n <= 0) {
        std::cout << "El número debe ser positivo.\n";
        return 1;
    }

    auto secuencia = calcularRaizComoFracciones(n, iteraciones);

    std::cout << "Aproximaciones de la raíz cuadrada de " << n << " como secuencia de fracciones:\n";
    imprimirSecuencia(secuencia);

    return 0;
}

