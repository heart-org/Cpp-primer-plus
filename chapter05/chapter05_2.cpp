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

const int arr_size = 100;

int main(){
    array<long double, arr_size> arr;
    arr[0] = arr[1] = 1;
    int temp = 1;
    cout << arr[1] << "! =" << temp << endl;
    for (int i = 2;i <= arr.size();++i) {
        arr[i] = i * arr[i-1];
    }
    for (int x  = 0;x < arr_size; ++x) {
        cout << x << "! = " << arr[x] << endl;
    }


    return 0;
}