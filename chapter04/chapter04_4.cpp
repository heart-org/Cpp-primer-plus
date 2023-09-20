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
    string first_name, last_name;
    string final_name;

    cout << "Enter your first name: " << endl;
    getline(cin, first_name);
    cout << "Enter your last name: " << endl;
    getline(cin, last_name);

    final_name = last_name + ", " + first_name;
    cout << "Here's the information in a single string: " << final_name << endl;

    return 0;
}