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

const int key = 12;

int main(){
    int height = 0;
    cout << "������������ߣ�______\b";
    cin >> height;

    int height_foot = height / key;
    int height_inch = height % key;

    cout << "ת����Ϊ" << height_foot << "Ӣ��" << height_inch << "Ӣ��" << endl;

    return 0;
}