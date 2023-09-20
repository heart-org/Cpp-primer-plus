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

double timeReverse(double light_year)
{
    return light_year * 63240;
}

int main(){
    double light_year;
    cout << "Enter the number of light years: " << endl;
    cin >> light_year;
    double res = timeReverse(light_year);
    cout << light_year << " light years = " << res << " astronomical units.";

    return 0;
}