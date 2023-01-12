// implementation of stack using c++ STL;
#include<iostream>
#include<stack>
using namespace std;
int main(){
    // creation of stack
    stack<int>s;
    // i want to insert element 
    s.push(4);
    s.push(2);
    s.push(3);
    s.pop();
     cout<<"top element"<<s.top();
     if(s.empty()){
        cout<<"stack is empty"<<endl;
     }
     else{
        cout<<"stack is not empty"<<endl;
     }
     cout<<"size of stack is"<<s.size()<<endl;

}