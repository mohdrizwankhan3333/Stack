#include <iostream>
#include <stack>
using namespace std;       //deleting middle element on the stack
int main() {
    stack<char> s;
    string star = "mohdrizwankhan";
    int middle_element_index = star.length() / 2;
    for (int i = 0; i < star.length(); i++) {
        if (i == middle_element_index) {//we have successfully delete element or we have not push that element 
            continue;}//skip that middle index where the element should element to push
             else{
            s.push(star[i]);} }
    while (!s.empty()) {             //displaying all the elements
        cout << s.top();
        s.pop();}
    return 0;}
