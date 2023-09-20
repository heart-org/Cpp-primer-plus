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
    double daphne_money = 100;
    double cleo_money = 100;
    double daphne_rate = 0.1;
    double cleo_rate = 0.05;
    double daphne_sum = daphne_money;
    double cleo_sum = cleo_money;
    int year = 0;
    do{
        daphne_sum += daphne_money * daphne_rate;
        cleo_sum += cleo_sum * cleo_rate;
        ++year;

    }while(daphne_sum > cleo_sum);
    cout << "After " << year << " years exceed, now daphne has " << daphne_sum << " and cleo has " << cleo_sum << endl;

    return 0;
}