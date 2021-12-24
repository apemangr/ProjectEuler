#include <iostream>
#include <string>
using namespace std;

// #define LUNES 1
// #define MARTES 2
// #define MIERCOLES 3
// #define JUEVES 4
// #define VIERNES 5
// #define SABADO 6
// #define DOMINGO 7


// #define ENERO 11 
// #define FEBRERO 22
// #define MARZO 33
// #define ABRIL 44
// #define MAYO 55
// #define JUNIO 66
// #define JULIO 77
// #define AGOSTO 88
// #define SEPTIEMBRE 99
// #define NOVIEMBRE 1010
// #define DICIEMBRE 1111


// Solamente con ENERO
// string NombreDia(int n);

int main()
{
  int mes=0;
  int numeroDias=0;
  int ano=1900;
  bool isLeap = false;
  for (int i=1; i<=12; i++) {
    mes=i;
    switch (mes) {
      
    case 1: //Enero
      numeroDias=31;
      for (int dias=1; dias<=numeroDias; dias++) {
	cout<<"Enero - Día "<<dias<<" "<<"\n";
      }
      break;
      
    case 2: //Febrero
      if(isLeap==true)
	numeroDias=29;
      else
	numeroDias=28;
	
      for (int dias=1; dias<=numeroDias; dias++)
	{
	  cout<<"Febrero - Día "<<dias<<"\n";
	}
      break;

    case 3: //Marzo
      numeroDias=31;
      for (int dias=1; dias<=numeroDias; dias++)
	{
	  cout<<"Marzo - Día "<<dias<<"\n";
	}
      break;
      
    case 4: //Abril
      numeroDias=30;
      for (int dias=1; dias<=numeroDias; dias++)
	{
	  cout<<"Abril - Día "<<dias<<"\n";
	}
      break;
      
    case 5: //Mayo
      numeroDias=31;
      for (int dias=1; dias<=numeroDias; dias++)
	{
	  cout<<"Mayo - Día "<<dias<<"\n";
	}
      break;
      
    case 6: //Junio
      numeroDias=30;
      for (int dias=1; dias<=numeroDias; dias++)
	{
	  cout<<"Junio - Día "<<dias<<"\n";
	}
      break;
      
    case 7: //Julio
      numeroDias=31;
      for (int dias=1; dias<=numeroDias; dias++)
	{
	  cout<<"Julio - Día "<<dias<<"\n";
	}

    case 8: //Agosto
      numeroDias=31;
      for (int dias=1; dias<=numeroDias; dias++)
	{
	  cout<<"Julio - Día "<<dias<<"\n";
	}
      break;

    case 9: //Septiembre
      numeroDias=30;
      for (int dias=1; dias<=numeroDias; dias++)
	{
	  cout<<"Septiembre - Día "<<dias<<"\n";
	}
      break;

    case 10: //Octubre
      numeroDias=31;
      for (int dias=1; dias<=numeroDias; dias++)
	{
	  cout<<"Octubre - Día "<<dias<<"\n";
	}
      break;
      
    case 11: //Noviembre
      numeroDias=30;
      for (int dias=1; dias<=numeroDias; dias++)
	{
	  cout<<"Noviembre - Día "<<dias<<"\n";
	}
      break;
      
    case 12: //Diciembre
      numeroDias=31;
      for (int dias=1; dias<=numeroDias; dias++)
	{
	  cout<<"Diciembre - Día "<<dias<<"\n";
	}
      break;
      
    }//Fin switch
      

  }//Fin for
  
}
// Fin main



// string NombreDia(int n)
// {
//   switch (n) {
//   case LUNES:
//     return "Lunes";
//     break;
//   case MARTES:
//     return "Martes";
//     break;
//   case MIERCOLES:
//     return "Miercoles";
//     break;
//   case JUEVES:
//     return "Jueves";
//     break;
//   case VIERNES:
//     return "Viernes";
//     break;
//   case SABADO:
//     return "Sabado";
//     break;
//   case DOMINGO:
//     return "Domingo";
//     break;
//   default:
//     return "ERROR";
//     break;
//   }
// }
