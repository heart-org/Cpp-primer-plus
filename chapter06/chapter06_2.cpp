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


double aver_num(double count, int i){
    int x = count / (i + 1);
    return x;
}

int main(){
    int i,count;
    double sum, average;
    const int size = 10;
    sum = 0.0;
    i = count = 0;
    array<double , size> arr;

    while(cin >> arr[i] && i < size){
        sum += arr[i];
        if (i + 1 == size)
            break;
        i++;
    }
    average = aver_num(sum, i);
    for (int j = 0; j <= i; ++j) {
        if (arr[j] > average)
            count ++;
    }
    cout << "average: " << average << endl;
    cout << count << " bigger than average" << endl;

    return 0;
}