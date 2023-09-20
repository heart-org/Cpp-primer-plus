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

const int strsize = 50;
const int Size = 5;

struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preferences;
};

int main(){
    char ch;
    bop * b = new bop[Size];
    bool exit = false;
    b[0] = {"Wimp Macho", "0","0",0};
    b[1] = {"Raki Rhodes", "Junior Programmer","1",1};
    b[2] = {"Celia Laiter", "2","MIPS",2};
    b[3] = {"Hoppy Hipman", "Analyst Trainee","3",1};
    b[4] = {"Pat Hand", "4","LOOPY",2};
    cout << "Benevolent Order of programmers Report" << endl;
    cout << "a. display by name      " << "b. display by title" << endl;
    cout << "c. display by bopname      " << "d. display by title" << endl;
    cout << "q. quit" << endl;

    cout << "Enter your choice: ";
    while(!exit && cin >> ch){
        switch (ch) {
            case 'a':
                for (int i = 0; i < Size; ++i) {
                    cout << b[i].fullname << endl;
                }
                cout << "Next choice: ";
                exit = false;
                break;
            case 'b':
                cout << "Next choice: ";
                exit = false;
                break;
            case 'c':
                cout << "Next choice: ";
                exit = false;
                break;
            case 'd':
                for (int i = 0; i < Size; ++i) {
                    switch (b[i].preferences) {
                        case 0:
                            cout << b[i].fullname << endl;
                            break;
                        case 1:
                            cout << b[i].title << endl;
                            break;
                        case 2:
                            cout << b[i].bopname << endl;
                            break;
                        default:
                            cout << "Good!!!" << endl;
                            break;
                    }
                }
                cout << "Next choice: ";
                exit = false;
                break;
            case 'q':
                exit = true;
                cout << "Bye!" << endl;
                break;
            default:
                exit = false;
                cout << "your choice is not valid!" << endl;
                break;
        }

    }

    return 0;
}