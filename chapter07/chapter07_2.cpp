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

int input_score(double arr[], int num);
void show_score(const double arr[], int);
double average_score(const double arr[], int);
const int MAXSIZE = 10;

int main(){
    double arr[MAXSIZE];
    int count = input_score(arr, MAXSIZE);
    show_score(arr, count);
    double ave_score = average_score(arr, count);
    cout << "The average score is " << ave_score << endl;

    return 0;
}

int input_score(double arr[], int max_num){
    int i = 0;
    cout << "Please enter your scores: " << endl;
    while(cin >> arr[i]){
        if (arr[i] == -1){
            return i;
        }
        i++;
        if (i == max_num)
            break;
    }
    return (i < max_num) ? (i + 1) : i;
}

void show_score(const double arr[], int count){
    for (int i = 0; i < count; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double average_score(const double arr[], int count){
    double total = 0;
    for (int i = 0; i < count; ++i) {
        total += arr[i];
    }
    return total / count;
}