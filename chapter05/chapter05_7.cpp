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

struct Car
{
    string product_factory;
    int product_year;
};

int main(){
    int car_num;
    cout << "How many cars do you wish to catalog ? " << endl;
    cin >> car_num;
    Car * car = new Car[car_num];
    cin.ignore();
    for (int i = 0; i < car_num; ++i) {
        cout << "Car #" << i + 1 << " : " << endl;
        cout << "Please enter the make: " << endl;
        getline(cin, car[i].product_factory);
        cout << "Please enter the year made: " << endl;
        cin >> car[i].product_year;
        cin.ignore();
    }
    cout << "Here is your collection: " << endl;
    for (int i = 0; i < car_num; ++i) {
        cout << car[i].product_year << " " << car[i].product_factory << endl;
    }

    delete [] car;
    return 0;
}