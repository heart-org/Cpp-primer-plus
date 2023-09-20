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
    double kilometer = 0;
    double gallon = 0;

    cout << "Please enter your mile of your car:";
    cin >> kilometer;
    cout << "Please enter your gallon of your car";
    cin >> gallon;

    cout << "Per gallon can run " << kilometer / gallon << "miles" << endl;
    cout << "Per 100 kilometers need " << 100 * (gallon / kilometer)<< "gallons" << endl;


    return 0;
}