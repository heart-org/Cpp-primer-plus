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

int main(){
    char ch;
    cin >> ch;
    string res;
    while(isalpha(ch)){
        if (ch != '@'){
            if (islower(ch))
                res += toupper(ch);
            else if (isupper(ch))
                res += tolower(ch);
            else
                continue;
        }
        else
            cout << res;
        cin >> ch;
    }
    cout << res << endl;

    return 0;
}