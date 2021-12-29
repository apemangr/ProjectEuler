#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int arr[10]={0,1,2,3,4,5,6,7,8,9};
 
  for (int i=0; i<1000002; i++) {
    if(i==1000001)
      cout<<"Número "<<i-1<<" - Permutación "<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<arr[5]<<arr[6]<<arr[7]<<arr[8]<<arr[9]<<"\n";
    next_permutation(arr,arr+10);
  }
  return 0;
}
