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

struct infoStu
{
    string first_name;
    string last_name;
    int age;
    char grade;
};

int main(){
    infoStu s1;
    cout << "What is your first name?" << endl;//cin
    char fir_name[40];
    cin.getline(fir_name, 40);
    //需要有空格，所以不能结构体
    //cin >> s1.first_name;
    cout << "What is your last name?" << endl;
    cin >> s1.last_name;
    cout << "What letter grade do you reserve?" << endl;
    cin >> s1.grade;
    s1.grade++;
    cout << "What is your age?" << endl;
    cin >> s1.age;
    cout << "Name: " << s1.last_name << ", " << fir_name << endl;
    cout << "Grade: " << s1.grade << endl;
    cout << "Age: " << s1.age << endl;



    return 0;
}