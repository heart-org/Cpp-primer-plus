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

double average_num(double, double, bool);

int main(){
    double x,y;
    bool flag = true;
    cout << "Please enter a number: " << endl;
    cin >> x;
    cout << "Please enter a number: " << endl;
    cin >> y;
    while(x != 0 && y != 0) {
        cout << average_num(x, y, flag) << endl;
        cout << "Please enter a number: " << endl;
        cin >> x;
        cout << "Please enter a number: " << endl;
        cin >> y;
    }
    cout << "The number your entered is wrong! " << endl;

    return 0;
}

double average_num(double x, double y, bool flag){
    double res;
    res = 2.0 * x * y / ( x + y );
    return res;
}