#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  if(str.length()%2!=0){
    return -1;
  }
  stack<char>st;
  for(int i=0;i<str.length();i++){
    char ch=str[i];
    if(ch=='{'){
      st.push(ch);
    }
    else{
      if(st.size()!=0){
          char num=st.top();
          if(num=='{'){
           st.pop();
           }
          else{
           st.push(ch);
            }
      }
     
      else{
        st.push(ch);
      }
    }
  }
  int a=0,b=0;
  int k=st.size();
  for(int i=0;i<k;i++){
      if(st.top()=='{'){
        b++;
      }
      if(st.top()=='}'){
        a++;
      }
      st.pop();
  }
  
  int ans=((a+1)/2)+((b+1)/2);
  return ans;

}