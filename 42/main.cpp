#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;


int main () {

  // Defining useful variables
  int answer{0}, conversion{0};
  vector<int>::iterator it;
  vector<string> nm;
  char temp{'A'};
  
  // Generate the "triangular numbers"
  vector<int> triangular_numbers;
  for (int i = 1; i<=500; i++) {
    triangular_numbers.push_back((i*(i+1))/2);
  }

  // Open the file and push the words into the vector
  FILE * f = fopen ("words.txt", "r");
  nm.clear ();
  while (not feof(f)) {
    char str[100];
    fscanf (f, "\"%[a-zA-Z]\",", str);
    nm.push_back (string (str));
  };
  sort (nm.begin (), nm.end ());

  // Conversion of strings in numbers and comparition with triangular numbers
  for (int i = 0; i<nm.size(); i++) {
    conversion = 0;
    for (int j = 0; j<nm[i].size(); j++) {
      temp = nm[i][j];
      conversion += temp - 'A' + 1;
      cout<<temp<<"->";
      cout<<conversion<<" ";
    }
    cout<<endl;
    it = find(triangular_numbers.begin(), triangular_numbers.end(), conversion);
    if (it != triangular_numbers.end())
      {
	std::cout << "Element Found\n" << std::endl;
	answer++;
      }
    else
      std::cout << "Element Not Found\n" << std::endl;
  }
    
  fclose (f);
  cout<<"\nAsnwer: "<<answer<<endl;
};
