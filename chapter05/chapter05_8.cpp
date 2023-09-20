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
    char input[50];
    int words = 0;
    cout << "Enter words (to stop,type the word done): " << endl;
    cin >> input;
    while(strcmp("done", input) != 0)
    {
        words++;
        cin >> input;
    }
    cout << "You entered a total of " << words << " words." << endl;


    return 0;
}