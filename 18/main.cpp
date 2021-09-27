#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<fstream>

using namespace std;


int main()
{


  int triangle[15][15];
  int s, t = 0;

  ifstream datafile;
  datafile.open("piramid.txt");


  for(s = 0; s < 15; s++)
    {
      for(t = 0; t - s < 1; t++)
        {
          datafile >> triangle[s][t];
        }
    }

  datafile.close();

  
  for(int e = 15; e >= 2; e--)
  {
     for(int f = 0; f < 14; f++)
       {
         triangle[e - 2][f] += max(triangle[e - 1][f], triangle[e - 1][f+1]);
       }
  }

  for(s = 0; s < 15; s++)
    {
      for(t = 0; t - s < 1; t++)
        {
	  cout<<triangle[s][t]<<" ";
        }
    }
}

