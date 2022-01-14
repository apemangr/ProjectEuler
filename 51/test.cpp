#include<iostream>
#include<string>

using namespace std;

int main()
{
    string h = "123";
    string t = "103";
    int x = h[0] & t[0];
    int y = h[1] & t[1];

    cout<<x<<" "<<y<<endl;

}