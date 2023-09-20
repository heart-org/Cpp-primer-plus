#include "iostream"
#include "queue"
#include "stack"
#include "vector"
#include "algorithm"
#include "cstring"
#include "cmath"
#include "set"
#include "map"
#include "numeric"#include "iostream"
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

struct Pizza
{
    string name;
    float size;
    float weight;
};

int main(){
    Pizza * pizza = new Pizza;

    cout << "Please enter the size: " << endl;
    cin >> pizza->size;
    cout << "Please enter the weight: " << endl;
    cin >> pizza->weight;

    cin.get();//读取和丢弃换行符

    cout << "Please enter the name: " << endl;
    getline(cin, pizza->name);

    cout << "Name: " << pizza->name << endl;
    cout << "Size: " << pizza->size << endl;
    cout << "Weight: " << pizza->weight << endl;
    delete pizza;

    return 0;
}
