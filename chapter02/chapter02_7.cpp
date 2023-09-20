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

void addTime(int hour, int minute)
{
    cout << hour << " : " << minute << endl;
}


int main(){
    int hour;
    int minute;
    cout << "Enter the number of hours: " << endl;
    cin >> hour;
    cout << "Enter the number of minutes: " << endl;
    cin >> minute;
    addTime(hour, minute);
    
    return 0;
}