#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Clase para representar y operar números grandes
class NumeroGrande {
private:
    vector<int> digitos; // Almacenar los dígitos en orden inverso

public:
    NumeroGrande(const string& numero) {
        for (auto it = numero.rbegin(); it != numero.rend(); ++it) {
            digitos.push_back(*it - '0'); // Convertir cada carácter a dígito
        }
    }

    NumeroGrande() {
        digitos.push_back(0); // Representa 0 por defecto
    }

    // Multiplicar por un número pequeño
    void multiplicar(int num) {
        int carry = 0;
        for (int& digito : digitos) {
            int producto = digito * num + carry;
            digito = producto % 10;
            carry = producto / 10;
        }
        while (carry > 0) {
            digitos.push_back(carry % 10);
            carry /= 10;
        }
    }

    // Sumar otro número grande
    void sumar(const NumeroGrande& otro) {
        int carry = 0;
        size_t maxSize = max(digitos.size(), otro.digitos.size());
        digitos.resize(maxSize, 0);
        for (size_t i = 0; i < maxSize; ++i) {
            int suma = digitos[i] + (i < otro.digitos.size() ? otro.digitos[i] : 0) + carry;
            digitos[i] = suma % 10;
            carry = suma / 10;
        }
        if (carry > 0) {
            digitos.push_back(carry);
        }
    }

    // Convertir a string para mostrar
    string toString() const {
        string resultado;
        for (auto it = digitos.rbegin(); it != digitos.rend(); ++it) {
            resultado += to_string(*it);
        }
        return resultado;
    }

    // Sumar los dígitos
    int sumarDigitos() const {
        int suma = 0;
        for (int digito : digitos) {
            suma += digito;
        }
        return suma;
    }
};

// Aproximar e usando fracciones continuas
pair<NumeroGrande, NumeroGrande> aproximar_FraccionesContinuas(int terms) {
    vector<int> sequence = {2};  // Inicializar la secuencia
    for (int i = 1; i < terms; ++i) {
        if (i % 3 == 2) {
            sequence.push_back(2 * (i / 3 + 1));
        } else {
            sequence.push_back(1);
        }
    }

    NumeroGrande numerator("1"), denominator("0"); // Inicializar numerador y denominador
    for (int i = sequence.size() - 1; i >= 0; --i) {
        NumeroGrande temp = numerator;
        numerator.multiplicar(sequence[i]);
        numerator.sumar(denominator);
        denominator = temp;
    }
    return {numerator, denominator};
}

int main() {
    int terms = 50;
    cin >> terms;

    // Aproximar e
    auto result = aproximar_FraccionesContinuas(terms);
    NumeroGrande numerator = result.first;

    cout << "Numerador: " << numerator.toString() << endl;
    cout << "Suma de los dígitos del numerador: " << numerator.sumarDigitos() << endl;

    return 0;
}

