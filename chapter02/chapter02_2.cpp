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
    cout << "�������ĳ��ȣ�" << endl;
    cin >> distance;
    int res = longReverse(distance);
    cout << "������ĳ���Ϊ" << res << "��" << endl;
    return 0;
}