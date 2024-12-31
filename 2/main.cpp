#include <iostream>

using namespace std;

int main()
{
  // Definición de variables
  int actual = 2; // Inicia en 2 ya que se inicia en 3 el primer número Fibonacci
  int prev = 1; // El primer número de la sucesión
  int buff = 0; // Variable para almecenar el valor temporal
  int result = 2; // Resultado final

  while(actual < 4000000) // Funciona siempre que el número sea menor que 4 M
  {
    cout << actual << endl; // Se muestra el número actual
    buff = actual; // Se igual el buffer al número actual para guardarlo
    actual += prev; // Se suma el valor actual y el previo
    prev = buff; // Se igual el valor previo al buffer
    
    if (actual % 2 == 0) // Verifica si el número es par 
        result += actual; // Suma el valor actual al resultado final
  }

  cout << "\nResult: " << result << endl; // Despliega la respuesta final
}
