#include<iostream>
#include<stdlib.h>     //implementing stack by using dynamic array
using namespace std;
class stack{
    public:
    int size,top;
    int *arr;        //always used pointer for dynamic variable
    stack(int x){
    size=x;
    arr=new int [size],top=-1;      //top is a pointer used for indexing on 'arr' array  dynamic array
}
bool isfull(){
    if (top==size-1) {
    return true;}
    else{
        return false;
    }
}
bool isempty(){
    if (top==-1) 
    return true;
    else{
        return false;
}}
    
void push(int value){
     if (isfull()){
        cout<<"overflow stack"<<endl;          //for full stack means top==-1
        exit(1);}
        else{
    arr[++top]=value;}
}
int pop(){
    if (isempty()==1){
        cout<<"underflow stack"<<endl;           //for empty stack means top==-1
        exit(1);
    }else{
    return arr[top--];
}}
int peek(){
    if (isempty()==1){
        cout<<"underflow stack"<<endl;        //for empty stack means top==-1
       exit(1); }
    return arr[top];
}
};
int main(){
    stack s(3);
    s.push(2010);
    s.push(20);
    s.push(201);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<"the current peek element is "<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    return 0;

}