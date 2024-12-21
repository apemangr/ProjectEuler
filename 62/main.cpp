#include <iostream>
#include <vector>
#include <map>

#define ull unsigned long long

using namespace std;

unsigned long long fingerprint(ull x){
    ull result = 0;
    while(x > 0){
        int digit = x % 10;
        x /= 10;
        result += 1ULL << (6 * digit);
    }
    return result;
}

int main(){ 
    map<ull, vector<unsigned int>> poss;
    vector<unsigned int> cubes;
    for (ull i = 0; i < 10000; i++){
        poss[fingerprint(i*i*i)].push_back(i);
    }
    for(auto t : poss){
        if(t.second.size() > 4 && t.second.size() < 6){
            cubes.push_back(t.second.front());
        }
    }
    cout << endl << "Answer: "<< (ull)cubes[0] * cubes[0] * cubes[0] << endl;
}
