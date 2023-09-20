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
    int number;
    int res = 0;
    cout << "Please enter a number: " << endl;
    cin >> number;
    while(number != 0)
    {
        res += number;
        cout << "Please enter a number: " << endl;
        cin >> number;
    }
    cout << res << endl;

    return 0;
}