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

int main(){
    long long wage;
    int tax = 0;
    cout << "Please enter your wages: " << endl;
    cin >> wage;
    while (wage){
        if (wage <= 5000)
            cout << " No Tax " << endl;
        else if ((wage > 5000) && (wage <= 15000)){
            tax = (wage - 5000) * 0.1;
            cout << tax << endl;
        }
        else if ((wage > 15000) && (wage <= 35000)){
            tax = 1000 + (wage - 15000) * 0.15;
            cout << tax << endl;
        }else{
            cout << tax << endl;
        }




    }


    return 0;
}