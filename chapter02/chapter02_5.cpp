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

float tempReverse(float temp)
{
    return temp * 1.8 + 32.0;
}

int main(){
    float temp;
    cout << "Please enter a Celsius value: " << endl;
    cin >> temp;
    float res = tempReverse(temp);
    cout << temp << "degrees Celsius is " << res << " degrees Fahrenheit" << endl;

    return 0;
}