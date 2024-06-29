#include <iostream>
#include <string>
#include<stdlib.h>
#include <stack>  //checking is it balanced or not 
using namespace std;
int main() {
    stack<char> s;
    string str = "{[()]}";
    for (char c : str) { //<-- rotate c in all str 
        if (c == '{' || c == '(' || c == '[') {
            s.push(c);
        } else {
            if (!s.empty() &&
                ((c == ']' && s.top() == '[') ||
                 (c == ')' && s.top() == '(') ||
                 (c == '}' && s.top() == '{'))) {
                s.pop();
            } else {
                cout << "Not Balanced!" << endl;
                exit(1);
            }
        }
    }
    if (s.empty()) {
        cout << "Balanced !" << endl;
    } else {
        cout << "Not Balanced !" << endl;
    }

    return 0;
}
