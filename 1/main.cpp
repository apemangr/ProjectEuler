#include <iostream>

using namespace std;

/*
 * Esta función toma un número luego checkea si es
 * multiplo de 3 o 5 mediante el operador "modulo" (%),
 * si es así entonces devuelve el número ingresado a
 * la función, de lo contrario devuelve cero.
*/
int multiple_of_3_or_5(int n)
{
  // Checkea si el número es multiplo de 3 o 5
  if (n % 3 == 0 || n % 5 == 0)
    return n; // Devuelve el valor ingresado a la función 

  return 0; // Devuelve cero
}

int main()
{
  int result{0}; // Variable en la que se almacenará el resultado 
  for (int i = 1; i < 1000; i++) // Loop de 1 -> 9999
    {
      result += multiple_of_3_or_5(i); // Almacena la suma del retorno de la
                                       // función `multiple_of_3_or_5`  
    }

  cout << "\nResult: " << result << endl; // Muestra el resultado final
}
