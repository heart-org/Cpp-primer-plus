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
    char first_name[20], last_name[20];
    char final_name[50];

    cout << "Enter your first name: " << endl;
    cin.getline(first_name, 20);
    cout << "Enter your last name: " << endl;
    cin.getline(last_name, 20);

    strcpy(final_name, last_name);
    strcat(final_name, ", ");
    strcat(final_name, first_name);

    cout << "Here's the information in a single string: " << final_name << endl;

    return 0;
}