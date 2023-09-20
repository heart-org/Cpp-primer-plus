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

const int month = 12;

int main(){
    string months[month] = {"Jan", "Feb", "Mar", "Apr",
                         "May", "Jun", "Jul", "Aug",
                         "Sep", "Oct", "Nov", "Dec"};
    int sale_sum = 0;
    int sale_count[month];
    for (int i = 0; i < month; ++i) {
        cout << "Please enter the counts: " << endl;
        cin >> sale_count[i];
        sale_sum += sale_count[i];
    }
    for (int i = 0;i < month; ++i)
    {
        cout << months[i] << " : " << sale_count[i] << endl;
    }
    cout << "Sum: " << sale_sum << endl;

    return 0;
}