#include <iostream>
#include <stack>
using namespace std;
int main() {
    string str = "rizwan";
    stack<char> s;
    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);}
    while (!s.empty()) {
        cout << s.top();  // Print the current top element of the stack
        s.pop(); }         // it only Remove the top element 
    return 0;}
