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

const int degrees_key = 60;
const int minutes_key = 60;
const int seconds_key = 60;

double time_convert(double degrees, double minutes, double seconds)
{
    return  degrees + ((minutes + (seconds / seconds_key)) / minutes_key);
}

int main(){
    int degrees = 0;
    int minutes = 0;
    int seconds = 0;

    cout << "Enter a latitude in degrees, minutes, and seconds;" << endl << "Firstly, enter the degrees:";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc:";
    cin >> seconds;

    double res = time_convert(degrees,minutes,seconds);
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << res << " degrees" << endl;


    return 0;
}