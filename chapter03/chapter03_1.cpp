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
    cout << "请输入您的身高：______\b";
    cin >> height;

    int height_foot = height / key;
    int height_inch = height % key;

    cout << "转换后为" << height_foot << "英寸" << height_inch << "英尺" << endl;

    return 0;
}