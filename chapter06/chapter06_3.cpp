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
    char ch;
    bool exit = false;

    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnivore " << "p) pianist " << endl;
    cout << "t) tree " << "g) game " << endl;

    while(!exit && (cin >> ch)){
        switch (ch) {
            case 'a':
                cout << "a" << endl;
                exit = true;
                break;
            case 'c':
                cout << "c" << endl;
                exit = true;
                break;
            case 'p':
                cout << "p" << endl;
                exit = true;
                break;
            case 't':
                cout << "A maple is a tree." << endl;
                exit = true;
                break;
            default:
                cout << "Please enter a, c, p, t: " << endl;
        }
    }

    return 0;
}