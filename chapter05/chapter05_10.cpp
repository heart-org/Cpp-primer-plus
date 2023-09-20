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
    int rows;
    cout << "Please enter the rows: " << endl;
    cin >> rows;
    int sum = 0;
    for (int i = 1; i <= rows; ++i) {
        sum = rows - i;
        for (int j = 0; j < sum; ++j) {
            cout << ".";
        }
        for (int k = 0; k < i; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}