#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>


using namespace std;

int main()
{
  string primiNames[29] = {
    "one",                                           //0
    "two",					     //1
    "three",					     //2
    "four",					     //3
    "five", 					     //4
    "six",					     //5
    "seven",					     //6
    "eight",					     //7
    "nine",					     //8
    "ten",					     //9
    "eleven",					     //10
    "twelve",					     //11
    "thirteen",					     //12
    "fourteen",					     //13
    "fifteen",					     //14
    "sixteen",					     //15
    "seventeen",				     //16
    "eighteen",					     //17
    "nineteen",					     //18
    "twenty",					     //19
    "thirty",					     //20
    "forty",					     //21
    "fifty",					     //22
    "sixty",					     //23
    "seventy",					     //24
    "eighty",					     //25
    "ninety",					     //26
    "hundred",                                       //27
    "thousand"                                       //28
  };
  
  double numberCentenas{0},numberDecenas{0},numberUnidades{0},ans{0};

  int centenas{0},decenas{0},unidades{0};

  for (int i{1}; i<1001 ;i++)
    {
      int test=i;
  //Calcula Centenas
  centenas=test/100;
  cout<<centenas<<endl;

  //Calcula decenas
  decenas=test-100*centenas;
  decenas/=10;
  cout<<decenas<<endl;

  //Calcula unidades
  unidades=test-100*centenas-10*decenas;
  cout<<unidades<<endl;


  //Numero de caracteres centenas
  if(decenas+unidades !=0 )
    {
  switch(centenas)
    {
    case 1: 
      cout<<primiNames[0]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[0].length()+primiNames[27].length()+3;
      break;

    case 2:
      cout<<primiNames[1]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[1].length()+primiNames[27].length()+3;
      break;

    case 3:
      cout<<primiNames[2]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[2].length()+primiNames[27].length()+3;
      break;

    case 4:
      cout<<primiNames[3]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[3].length()+primiNames[27].length()+3;
      break;

    case 5:
      cout<<primiNames[4]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[4].length()+primiNames[27].length()+3;
      break;

    case 6:
      cout<<primiNames[5]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[5].length()+primiNames[27].length()+3;
      break;

    case 7:
      cout<<primiNames[6]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[6].length()+primiNames[27].length()+3;
      break;

    case 8:
      cout<<primiNames[7]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[7].length()+primiNames[27].length()+3;
      break;

    case 9:
      cout<<primiNames[8]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[8].length()+primiNames[27].length()+3;
      break;

    case 10:
      cout<<primiNames[0]<<" "<<primiNames[28]<<" and ";
      numberCentenas+=primiNames[0].length()+primiNames[28].length()+3;
      break;

    default:
      break;
    }
    }else {
    {  switch(centenas)
    {
    case 1: 
      cout<<primiNames[0]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[0].length()+primiNames[27].length();
      break;

    case 2:
      cout<<primiNames[1]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[1].length()+primiNames[27].length();
      break;

    case 3:
      cout<<primiNames[2]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[2].length()+primiNames[27].length();
      break;

    case 4:
      cout<<primiNames[3]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[3].length()+primiNames[27].length();
      break;

    case 5:
      cout<<primiNames[4]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[4].length()+primiNames[27].length();
      break;

    case 6:
      cout<<primiNames[5]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[5].length()+primiNames[27].length();
      break;

    case 7:
      cout<<primiNames[6]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[6].length()+primiNames[27].length();
      break;

    case 8:
      cout<<primiNames[7]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[7].length()+primiNames[27].length();
      break;

    case 9:
      cout<<primiNames[8]<<" "<<primiNames[27]<<" and ";
      numberCentenas+=primiNames[8].length()+primiNames[27].length();
      break;

    case 10:
      cout<<primiNames[0]<<" "<<primiNames[28]<<" and ";
      numberCentenas+=primiNames[0].length()+primiNames[28].length();
      break;

    default:
      break;
    }
}
  }
  //Numero de caracteres decenas
  if (decenas*10+unidades> 19)
    {

      switch(decenas)
	{
	  

	case 2:
	  cout<<primiNames[19]<<" ";
	  numberDecenas+=primiNames[19].length();
	  break;

	case 3:
	  cout<<primiNames[20]<<" ";
	  numberDecenas+=primiNames[20].length();
	  break;

	case 4:
	  cout<<primiNames[21]<<" ";
	  numberDecenas+=primiNames[21].length();
	  break;

	case 5:
	  cout<<primiNames[22]<<" ";
	  numberDecenas+=primiNames[22].length();
	  break;

	case 6: 
	  cout<<primiNames[23]<<" ";
	  numberDecenas+=primiNames[23].length();
	  break;
	case 7:
	  cout<<primiNames[24]<<" ";
	  numberDecenas+=primiNames[24].length();
	  break;

	case 8:
	  cout<<primiNames[25]<<" ";
	  numberDecenas+=primiNames[25].length();
	  break;

	case 9:
	  cout<<primiNames[26]<<" ";
	  numberDecenas+=primiNames[26].length();
	  break;

	default:  
	  break;
	  
	}
    }else{

    switch(decenas*10+unidades)
	{
	case 10:
	  cout<<primiNames[9]<<" ";
	  numberDecenas+=primiNames[9].length();
	  break;

	case 11:
	  cout<<primiNames[10]<<" ";
	  numberDecenas+=primiNames[10].length();
	  break;

	case 12:
	  cout<<primiNames[11]<<" ";
	  numberDecenas+=primiNames[11].length();
	  break;

	case 13:
	  cout<<primiNames[12]<<" ";
	  numberDecenas+=primiNames[12].length();
	  break;

	case 14:
	  cout<<primiNames[13]<<" ";
	  numberDecenas+=primiNames[13].length();
	  break;

	case 15:
	  cout<<primiNames[14]<<" ";
	  numberDecenas+=primiNames[14].length();
	  break;

	case 16:
	  cout<<primiNames[15]<<" ";
	  numberDecenas+=primiNames[15].length();
	  break;

	case 17:
	  cout<<primiNames[16]<<" ";
	  numberDecenas+=primiNames[16].length();
	  break;

	case 18:
	  cout<<primiNames[17]<<" ";
	  numberDecenas+=primiNames[17].length();
	  break;

	case 19:
	  cout<<primiNames[18]<<" ";
	  numberDecenas+=primiNames[18].length();
	  break;

	default:
	  break;
	}
    }


  //Caracteres unidades
  if(decenas*10+unidades>19 || decenas*10+unidades <10)
    {
      switch(unidades)
	{


	case 1:
	  cout<<primiNames[0]<<" ";
	  numberUnidades+=primiNames[0].length();
	  break;

	case 2:
	  cout<<primiNames[1]<<" ";
	  numberUnidades+=primiNames[1].length();
	  break;

	case 3:
	  cout<<primiNames[2]<<" ";
	  numberUnidades+=primiNames[2].length();
	  break;
	  
	case 4:
	  cout<<primiNames[3]<<" ";
	  numberUnidades+=primiNames[3].length();
	  break;

	case 5:
	  cout<<primiNames[4]<<" ";
	  numberUnidades+=primiNames[4].length();
	  break;

	case 6:
	  cout<<primiNames[5]<<" ";
	  numberUnidades+=primiNames[5].length();
	  break;

	case 7:
	  cout<<primiNames[6]<<" ";
	  numberUnidades+=primiNames[6].length();
	  break;

	case 8:
	  cout<<primiNames[7]<<" ";
	  numberUnidades+=primiNames[7].length();
	  break;

	case 9:
	  cout<<primiNames[8]<<" ";
	  numberUnidades+=primiNames[8].length();
	  break;

	default:
	  break;
	}
    }




  /// ARREGLAR POSIBLE PROBLEMA


    ans = numberCentenas + numberDecenas + numberUnidades;
    cout<<endl<<"~~~~~> "<<setprecision(15)<<ans<<endl<<endl;

  ////////////////////////////
    }

  //         ans = numberCentenas + numberDecenas + numberUnidades+3;
      cout<<endl<<"~~~~~> "<<setprecision(15)<<ans<<endl<<endl;
}

