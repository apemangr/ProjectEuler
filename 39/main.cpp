#include <iostream>
#include <string>
#include <math.h>

#define LIMIT 1002

int rightTriangles(int p){
   int count = 0;
   int c=0;
   for( int a=1;a<p/2;a++)
     {
      for(int b=1;b<p/3;b++)
	{
         c=p-a-b;
         if( a+b>c && b+c>a && a+c>b) //condition for triangle{
            if( (a*a+b*b)==c*c ) //pythagoras rule for right triangles
               { ++count; }
         }
      }
   return count;
   }


using namespace std;

int main()
{

  int temp{0}, ans{0}, answer{0};
  for (int i = 1; i<LIMIT; i++) {
    temp=rightTriangles(i);
    if(temp>ans){
      
      ans=temp;
      answer=i;
    }
  }
  cout<<"\nAnswer: "<<answer<<"\n\n";
  return 0;
}
