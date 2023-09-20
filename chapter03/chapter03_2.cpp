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

const int height_foot_key = 12;
const double height_meter_key = 0.0254;
const double height_pound_key = 2.2;

int main(){
    double height_foot = 0;
    double height_inch = 0;
    double height_pound = 0;
    double height;
    double weight;

    cout << "please enter your foot" << endl;
    cin >> height_foot;
    cout << "please enter your inch" << endl;
    cin >> height_inch;
    cout << "please enter your pound" << endl;
    cin >> height_pound;

    height = (height_foot * height_foot_key + height_inch) * height_meter_key;
    weight = height_pound / height_pound_key;
    cout << "your bmi is " << weight / (height * height) << endl;


    return 0;
}