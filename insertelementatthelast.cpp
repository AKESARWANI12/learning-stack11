#include <bits/stdc++.h>

   void pushpa(stack<int>&myStack,int x){
       // base case
       if(myStack.size()==0){
           myStack.push(x);
           return ;
       }

        int y=myStack.top();
        myStack.pop();
        pushpa(myStack,x);
        myStack.push(y);
   }

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    pushpa(myStack,x);
      return myStack;
}
