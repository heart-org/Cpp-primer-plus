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
    string input;
    int words = 0;
    cout << "Enter words (to stop,type the word done): " << endl;
    cin >> input;
    while(input != "done")
    {
        words++;
        cin >> input;
    }
    cout << "You entered a total of " << words << " words." << endl;

    return 0;
}