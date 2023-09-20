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
    string name;
    char grade;
    int age;
    cout << "What is your name?" << endl;//cin
    getline(cin, name);
    cout << "What letter grade do you reserve?" << endl;
    cin >> grade;
    grade++;
    cout << "What is your age?" << endl;
    cin >> age;
    cout << "Name: " << name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;



    return 0;
}