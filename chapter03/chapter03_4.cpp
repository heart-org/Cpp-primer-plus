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

int seconds_key = 60;
int minutes_key = 60;
int hour_key = 24;

int main(){
    long input_seconds = 0;
    int days = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    int count_seconds = 0;

    cout << "Enter the number of seconds:";
    cin >> input_seconds;


    days = input_seconds / seconds_key / minutes_key / hour_key;
    count_seconds = input_seconds % (days * seconds_key * minutes_key * hour_key);
    hours = count_seconds / seconds_key / minutes_key;
    count_seconds = count_seconds % (hours * minutes_key * seconds_key);
    minutes = count_seconds / minutes_key;
    seconds = count_seconds % seconds_key;

    cout << input_seconds << " seconds = " << days << " days, "
    << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

    return 0;
}