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

const float convert_dist = 62.14;
const float convert_cuel = 3.785;

int main(){
    float kilometers_cost = 0;
    float mile_cost = 0;

    cout << "ÿ100����ĺ�����Ϊ:";
    cin >> kilometers_cost;

    mile_cost = convert_dist / (kilometers_cost / convert_cuel);
    cout << kilometers_cost << "mpg��Լ��" << mile_cost << "/100km" << endl;

    return 0;
}