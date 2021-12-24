#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
 vector< int >Enero{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
 vector< int >Febrero{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
 vector< int >Marzo{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28};
 vector< int >Abril{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,31};
 vector< int >Mayo{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
 vector< int >Junio{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
 vector< int >Julio{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
 vector< int >Agosto{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
 vector< int >Septiembre{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,31};
 vector< int >Octubre{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
 vector< int >Noviembre{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,31};
 vector< int >Diciembre{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};

 int year = 1901;
 int rotR = 0;
 int leap = 0;
 int eneroM = 0;
 int febreroM = 0;
 int marzoM = 0;
 int abrilM = 0;
 int mayoM = 0;
 int junioM = 0;
 int julioM = 0;
 int agostoM = 0;
 int septiembreM = 0;
 int octubreM = 0;
 int noviembreM = 0;
 int diciembreM = 0;
 
 for (; year<=2000; year++) {
   if (Enero[6] == 1 || (Enero[5]==1 && leap ==4))
     {
       std::rotate(Enero.begin(), Enero.begin()+7, Enero.end());
     }
   rotR = leap == 4 ? rotR=2 : rotR=1;
   std::rotate(Enero.begin(), Enero.begin()+Enero.size()-rotR, Enero.end());
   //   for (int i=0; i < 7; i++)
   //     std::cout << "\t" << Enero[i];
   if(Enero[6]==1)
     eneroM++;
     
   if (leap == 4) {
     leap = 1;
   }else {
     leap++;
   }
 }
 cout<<"\n-> Enero tiene "<<eneroM<<"\n";
 year = 1901;
 rotR = 0;
 leap = 0;
///////////////////////////////////////////////Termina Enero

 
 std::rotate(Febrero.begin(), Febrero.begin()+Febrero.size()-3, Febrero.end());
 for (; year<=2000; year++) {
   if (Febrero[6] == 1 || (Febrero[5]==1 && leap ==4))
     {
       std::rotate(Febrero.begin(), Febrero.begin()+7, Febrero.end());
     }
   rotR = leap == 4 ? rotR=2 : rotR=1;
   std::rotate(Febrero.begin(), Febrero.begin()+Febrero.size()-rotR, Febrero.end());
   //   std::cout << "Febrero :";
   //   for (int i=0; i < 7; i++)
     //     std::cout << "\t" << Febrero[i];
   if(Febrero[6]==1)
     febreroM++;
     
   //   std::cout << "\n";
   if (leap == 4) {
     leap = 1;
   }else {
     leap++;
   }
 }
 cout<<"-> Febrero tiene "<<febreroM<<"\n";
 year = 1901;
 rotR = 0;
 leap = 1;
///////////////////////////////////////////////Termina Febrero


 std::rotate(Marzo.begin(), Marzo.begin()+Marzo.size()-3, Marzo.end());
 for (; year<=2000; year++) {
   if (Marzo[6] == 1 && leap != 4 || (Marzo[5]==1 && leap ==4) )
     {
       std::rotate(Marzo.begin(), Marzo.begin()+7, Marzo.end());
     }else if (Marzo[6]==1 && leap==4) {
       std::rotate(Marzo.begin(), Marzo.begin()+7, Marzo.end());
   }
   
   rotR = leap == 4 ? rotR=2 : rotR=1;
   // if(Marzo[4]==1 && leap ==3)
   //   rotR=2;
   // if (Marzo[3]==1 && leap == 4)
   //   rotR=2;
   std::rotate(Marzo.begin(), Marzo.begin()+Marzo.size()-rotR, Marzo.end());
   // std::cout <<year<< " Marzo : Leap "<<leap;
   // for (int i=0; i < 7; i++)
   //    {
   //  std::cout << "\t" << Marzo[i];
   //    }
   // cout<<"\n";
   if(Marzo[6]==1)
     marzoM++;
     
   if (leap == 4) {
     leap = 1;
   }else {
     leap++;
   }
 }
 cout<<"-> Marzo tiene "<<marzoM<<"\n";
 year = 1901;
 rotR = 0;
 leap = 1;
///////////////////////////////////////////////Termina Marzo
 

std::rotate(Abril.begin(), Abril.begin()+1, Abril.end());
 for (; year<=2000; year++) {
   if (Abril[6] == 1 || (Abril[5]==1 && leap == 4))
     {
       std::rotate(Abril.begin(), Abril.begin()+7, Abril.end());
     }
   rotR = leap == 4 ? rotR=2 : rotR=1;
   std::rotate(Abril.begin(), Abril.begin()+Abril.size()-rotR, Abril.end());
   if(Abril[6]==1)
     abrilM++;
     
   if (leap == 4) {
     leap = 1;
   }else {
     leap++;
   }
 }
 cout<<"-> Abril tiene "<<abrilM<<"\n";
 year = 1901;
 rotR = 0;
 leap = 1;
///////////////////////////////////////////////Termina Abril


   std::rotate(Mayo.begin(), Mayo.begin()+Mayo.size()-1, Mayo.end());
 for (; year<=2000; year++) {
   if (Mayo[6] == 1 || (Mayo[5]==1 && leap == 4))
     {
       std::rotate(Mayo.begin(), Mayo.begin()+7, Mayo.end());
     }
   rotR = leap == 4 ? rotR=2 : rotR=1;
   std::rotate(Mayo.begin(), Mayo.begin()+Mayo.size()-rotR, Mayo.end());
   if(Mayo[6]==1)
     mayoM++;
     
   if (leap == 4) {
     leap = 1;
   }else {
     leap++;
   }
 }
 cout<<"-> Mayo tiene "<<mayoM<<"\n";
 year = 1901;
 rotR = 0;
 leap = 1;
///////////////////////////////////////////////Termina Mayo

 
 std::rotate(Junio.begin(), Junio.begin()+Junio.size()-4, Junio.end());
 for (; year<=2000; year++) {
   if (Junio[6] == 1 || (Junio[5]==1 && leap == 4))
     {
       std::rotate(Junio.begin(), Junio.begin()+7, Junio.end());
     }
   rotR = leap == 4 ? rotR=2 : rotR=1;
   std::rotate(Junio.begin(), Junio.begin()+Junio.size()-rotR, Junio.end());
   if(Junio[6]==1)
     junioM++;
     
   if (leap == 4) {
     leap = 1;
   }else {
     leap++;
   }
 }
 cout<<"-> Junio tiene "<<junioM<<"\n";
 year = 1901;
 rotR = 0;
 leap = 1;
///////////////////////////////////////////////Termina Junio
 
       std::rotate(Julio.begin(), Julio.begin()+1, Julio.end());
 for (; year<=2000; year++) {
   if (Julio[6] == 1 || (Julio[5]==1 && leap == 4))
     {
       std::rotate(Julio.begin(), Julio.begin()+7, Julio.end());
     }
   rotR = leap == 4 ? rotR=2 : rotR=1;
   std::rotate(Julio.begin(), Julio.begin()+Julio.size()-rotR, Julio.end());
   if(Julio[6]==1)
     julioM++;
     
   if (leap == 4) {
     leap = 1;
   }else {
     leap++;
   }
 }
 cout<<"-> Julio tiene "<<julioM<<"\n";
 year = 1901;
 rotR = 0;
 leap = 1;
///////////////////////////////////////////////Termina Julio

    std::rotate(Agosto.begin(), Agosto.begin()+Agosto.size()-2, Agosto.end());
 for (; year<=2000; year++) {
   if (Agosto[6] == 1 || (Agosto[5]==1 && leap == 4))
     {
       std::rotate(Agosto.begin(), Agosto.begin()+7, Agosto.end());
     }
   rotR = leap == 4 ? rotR=2 : rotR=1;
   std::rotate(Agosto.begin(), Agosto.begin()+Agosto.size()-rotR, Agosto.end());
   if(Agosto[6]==1)
     agostoM++;
     
   if (leap == 4) {
     leap = 1;
   }else {
     leap++;
   }
 }
 cout<<"-> Agosto tiene "<<agostoM<<"\n";
 year = 1901;
 rotR = 0;
 leap = 1;
///////////////////////////////////////////////Termina Agosto


  std::rotate(Septiembre.begin(), Septiembre.begin()+Septiembre.size()-5, Septiembre.end());
 for (; year<=2000; year++) {
   if (Septiembre[6] == 1 || (Septiembre[5]==1 && leap == 4))
     {
       std::rotate(Septiembre.begin(), Septiembre.begin()+7, Septiembre.end());
     }
   rotR = leap == 4 ? rotR=2 : rotR=1;
   std::rotate(Septiembre.begin(), Septiembre.begin()+Septiembre.size()-rotR, Septiembre.end());
   if(Septiembre[6]==1)
     septiembreM++;
     
   if (leap == 4) {
     leap = 1;
   }else {
     leap++;
   }
 }
 cout<<"-> Septiembre tiene "<<septiembreM<<"\n";
 year = 1901;
 rotR = 0;
 leap = 1;
///////////////////////////////////////////////Termina Septiembre


// std::rotate(Octubre.begin(), Octubre.begin()+Octubre.size()-5, Octubre.end());
 for (; year<=2000; year++) {
   if (Octubre[6] == 1 || (Octubre[5]==1 && leap == 4))
     {
       std::rotate(Octubre.begin(), Octubre.begin()+7, Octubre.end());
     }
   rotR = leap == 4 ? rotR=2 : rotR=1;
   std::rotate(Octubre.begin(), Octubre.begin()+Octubre.size()-rotR, Octubre.end());
   if(Octubre[6]==1)
     octubreM++;
     
   if (leap == 4) {
     leap = 1;
   }else {
     leap++;
   }
 }
 cout<<"-> Octubre tiene "<<octubreM<<"\n";
 year = 1901;
 rotR = 0;
 leap = 1;
///////////////////////////////////////////////Termina Octubre



 std::rotate(Noviembre.begin(), Noviembre.begin()+Noviembre.size()-3, Noviembre.end());
 for (; year<=2000; year++) {
   if (Noviembre[6] == 1 || (Noviembre[5]==1 && leap == 4))
     {
       std::rotate(Noviembre.begin(), Noviembre.begin()+7, Noviembre.end());
     }
   rotR = leap == 4 ? rotR=2 : rotR=1;
   std::rotate(Noviembre.begin(), Noviembre.begin()+Noviembre.size()-rotR, Noviembre.end());
   if(Noviembre[6]==1)
     noviembreM++;
     
   if (leap == 4) {
     leap = 1;
   }else {
     leap++;
   }
 }
 cout<<"-> Noviembre tiene "<<noviembreM<<"\n";
 year = 1901;
 rotR = 0;
 leap = 1;
///////////////////////////////////////////////Termina Noviembre


  std::rotate(Diciembre.begin(), Diciembre.begin()+Diciembre.size()-5, Diciembre.end());
 for (; year<=2000; year++) {
   if (Diciembre[6] == 1 || (Diciembre[5]==1 && leap == 4))
     {
       std::rotate(Diciembre.begin(), Diciembre.begin()+7, Diciembre.end());
     }
   rotR = leap == 4 ? rotR=2 : rotR=1;
   std::rotate(Diciembre.begin(), Diciembre.begin()+Diciembre.size()-rotR, Diciembre.end());
   // for (int i=0; i < 7; i++)
   //   std::cout << "\t" << Diciembre[i];
   // cout<<"\n";
   if(Diciembre[6]==1)
     diciembreM++;
     
   if (leap == 4) {
     leap = 1;
   }else {
     leap++;
   }
 }
 cout<<"-> Diciembre tiene "<<diciembreM<<"\n\n";
 year = 1901;
 rotR = 0;
 leap = 1;
///////////////////////////////////////////////Termina Diciembre

 cout<<"La suma de todos los domingos que caen primero dentro del siglo 20 es\n~~~~> "<<eneroM+febreroM+marzoM+abrilM+mayoM+junioM+julioM+agostoM+septiembreM+octubreM+noviembreM+diciembreM<<"\n";
 
}
