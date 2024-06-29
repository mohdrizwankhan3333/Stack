#include<iostream>
#include<stdlib.h>
using namespace std;       // implement 2 stack by using one array dynamically
class stack2{
    private:
    int *arr,top1,top2,size;
    public:
    stack2(int capacity){
        size=capacity;
        arr=new int [size];
        top1=-1;top2=size;}
        void push1(int data){
            if (top1==size-1){
                cout<<"stack1 is overflow !";
                exit(1);
            }else{
            arr[++top1]=data;}}
        void push2(int data){
             if (top2==0){
                cout<<"stack2 is overflow !";
                exit(1);
            }else{
        arr[--top2]=data;}}
        int pop1(){
             if (top1==-1){
                cout<<"stack1 is underflow !";
                exit(1);
            }else{
            return arr[top1--];}}
        int pop2(){
            if (top2==size){
                cout<<"stack2 is underflow !";
                exit(1);
            }else{
            return arr[top2++];}}};
int main(){
    stack2 s(4);
    s.push1(2);
    s.push1(2);
    s.push1(21);
    s.push2(12);
    s.push2(22);
    cout<<"stack1 : "<<s.pop1()<<endl;
    cout<<"stack1 : "<<s.pop1()<<endl;
    cout<<"stack2 : "<<s.pop2()<<endl;
    cout<<"stack2 : "<<s.pop2()<<endl;
    return 0;}