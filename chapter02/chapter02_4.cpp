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

int agePlus(int age)
{
    return age * 12;
}

int main(){
    int age;
    cout << "Enter your age：" << endl;
    cin >> age;
    int res = agePlus(age);
    cout << "您的年龄包含" << res << "个月" << endl;
    
    return 0;
}