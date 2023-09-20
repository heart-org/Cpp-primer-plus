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

int longReverse(int distance)
{
    return distance * 220;
}

int main(){
    int distance;
    cout << "输入您的长度：" << endl;
    cin >> distance;
    int res = longReverse(distance);
    cout << "您输入的长度为" << res << "码" << endl;
    return 0;
}