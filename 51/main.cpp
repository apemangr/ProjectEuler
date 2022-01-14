#include <iostream>
#include <string>
#include <vector>
#include <cstring>

#define INIT 10007
#define PRIMES 7
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

vector<string> SOE(int n)
{
  vector<string> returned;
  bool prime[n+1];
  memset(prime, true, sizeof(prime));
  for (int p=2; p*p<=n; p++)
    {
      if (prime[p] == true)
        {
	  for (int i=p*2; i<=n; i += p)
	    prime[i] = false;
        }
    }
  
  for (int p=2; p<=n; p++)
    if (prime[p])
      returned.push_back(to_string(p));
  return returned;
}


int main()
{
  vector<string> primes = SOE(1000000); // Genera primos hasta 1,000,000,000
  string tempPrimeCopy; // Copia el valor de la "string" tempPrime para no alterar el numero original
  string tempPrime; // Para almacenar los primos del vector "primes" en una "string"
  string bufferDigits; // Buffer para cambiar los digitos de los primos
  vector<int> tinyPrimes; // Guarda los primos menores de una familia de 8
  vector<int> primeCases = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int tempIntVector{0}; // Almacena los primos del vecotor tipo "string" a "int"
  int primeCount{0}, answer{0}, tinyPrime{999999};
  int counter{0};
  for(int i=9000; i<primes.size(); i++)
    {
      tempPrime = primes[i];
      cout<<"Probando el numero: "<<tempPrime<<endl;
      if(primeCount == 8)
	break;
      // Remplazar los digitos (2,3) (2,4) (2,5) (3,4) (3,5) (4,5) (1,2) (1,3) (1,4) (1,5)
      
      for(int j=1; j<=1; j++)
	{
	  switch (j)
	    {
	      
	    case 1: // Digitos 1, 3 y 5
	      cout<<"Digitos *N*N*N"<<endl;
	      tempPrimeCopy = tempPrime;
	      primeCount = 0; // Contador de cuantos primos se generaron luego de reemplasar

	      for(int k=0; k<=9; k++) // Cambia los digitos del 0 al 9
		{
		  bufferDigits = to_string(k);
		  tempPrimeCopy[0] = bufferDigits[0]; // Reemplaza por k el digito 1
		  tempPrimeCopy[2] = bufferDigits[0]; // Reepmlaza por k el digito 3
		  tempPrimeCopy[4] = bufferDigits[0]; // Reepmlaza por k el digito 5

		  // Se transforma de String a Int
		  tempIntVector = stoi(tempPrimeCopy);
		  
		  if(isPrime(tempIntVector))
		    {
		      primeCount++;
		      // cout<<"N Primos: "<<primeCount<<"\t Numero: "<<tempIntVector<<endl;
		      primeCases[k] = tempIntVector;
		    }
		}
	      for(int primeCases:primeCases)
		if(primeCases > 9999)
		  {
		    cout<<primeCases<<endl;
		    if(primeCases < tinyPrime && primeCount == 8 && isPrime(primeCases))
		      tinyPrime = primeCases;
		    //primeCount++;
		  }
	      
	      cout<<endl;
	      for(int h=0; h<=9; h++)
		{
		  if(primeCount == PRIMES && primeCases[h] < tinyPrime && primeCases[h] > 9)
		    {
		    tinyPrime = primeCases[h];
       
		      
		    }
		}
	      cout<<"Numero de primos: "<<primeCount<<"\n\n";
	      break; // Termina el caso 1

	      
	

	      
	    }
	}
      
    }

  
     cout<<"\nAnswer: "<<tinyPrime<<endl;

  return 0;
}
