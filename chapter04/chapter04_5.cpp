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
    CandyBar snack = {
            "Mocha Much",
            2.3,
            350
    };
    cout << "brand: " << snack.brand << " weight: " << snack.weight << " calories: " << snack.calories << endl;

    return 0;
}