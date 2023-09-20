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
#include "array"

using namespace std;

int main(){
    array<float, 3> Score;
    cout << "Enter the first score: " << endl;
    cin >> Score[0];
    cout << "Enter the second score: " << endl;
    cin >> Score[1];
    cout << "Enter the third score: " << endl;
    cin >> Score[2];

    cout << "1: " << Score[0] << endl;
    cout << "2: " << Score[1] << endl;
    cout << "3: " << Score[2] << endl;
    cout << "average: " << (Score[0] + Score[1] + Score[2]) / 3;

    return 0;
}