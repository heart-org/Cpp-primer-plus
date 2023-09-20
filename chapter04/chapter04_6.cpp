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

struct CandyBar
{
    string brand;
    float weight;
    int calories;
};

int main(){
    CandyBar candArray[3] =
            {
                {"abc", 3.5,500},
                {"def", 2.5, 600},
                {"eaf", 1.5, 900}
            };
    cout << candArray[0].brand << candArray[0].weight << candArray[0].calories <<endl;
    cout << candArray[1].brand << candArray[1].weight << candArray[1].calories <<endl;
    cout << candArray[2].brand << candArray[2].weight << candArray[2].calories <<endl;

    return 0;
}