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
    int low,high;
    cout << "����С�����˳��������������" << endl;
    cin >> low;
    cin >> high;
    int res = 0;

    for(int x = low; x <= high; ++x)
    {
        res += x;
    }
    cout << res << endl;
    return 0;
}