#include "iostream"
#include "queue"
#include "stack"
#include "vector"
#include "algorithm"
#include "cstring"
#include "cmath"
#include "set"
#include "map"
#include "numeric"
#include "unordered_set"
#include "unordered_map"

using namespace std;

int main(){
    long long world_population = 0;
    long long US_population = 0;
    cout << "Enter the world's population:";//6898758899
    cin >> world_population;
    cout << "Enter the population of the US:";//310783781
    cin >> US_population;
    cout << "The population of the US is " << (double(US_population) / world_population) * 100
    << "% of the world population." << endl;

    return 0;
}