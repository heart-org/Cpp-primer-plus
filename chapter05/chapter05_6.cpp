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
    int sale_sum[3] = {0, 0, 0};
    int sale_count[3][month];
    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < month; ++j) {
            cout << "Please enter the counts: " << endl;
            cin >> sale_count[i][j];
            sale_sum[i] += sale_count[i][j];
        }
        sum += sale_sum[i];
    }
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << " year: " << endl;
        for (int j = 0;j < month; ++j)
        {
            cout << months[j] << " : " << sale_count[i][j] << endl;
        }
        cout << sale_sum[i] << endl;
    }
    cout << "Sum: " << sum << endl;

    return 0;
}