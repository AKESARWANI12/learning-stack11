// reverse of a string using stack 

#include<iostream>
#include<stack>
using namespace std;
// sabse pahle string liya use stack me copy kiya phit stack ke top element ko call kiya then use update kar diya stirng me
int main(){
    string str="ayush";
    stack<char>s;
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }
    for(int i=0;i<str.length();i++){
        str[i]=s.top();
      
        s.pop();
    }
    cout<<str;
}