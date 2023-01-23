#include <bits/stdc++.h> 
 void deletekaro(stack<int>&inputStack, int k,int count)
 {
    if(k%2!=0){
       if(count==k/2){
          inputStack.pop();
          return;
       }}
    else{
       if(count==k/2-1){
          inputStack.pop();
          return;
       }
    }
    count++;
      int y=inputStack.top();
      inputStack.pop();
      deletekaro(inputStack,k,count);
      inputStack.push(y);
}


stack<int> deleteMiddle(stack<int>&inputStack, int N){
	int count=0;
   deletekaro(inputStack,N+1,count);
   return inputStack;
}