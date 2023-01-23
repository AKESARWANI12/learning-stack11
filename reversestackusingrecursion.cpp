void insertatbottom(stack<int>&st,int x)
{
 if(st.size()==0){
         st.push(x);
         return ;
     }
     int y=st.top();
     st.pop();
     insertatbottom(st,x); 
     st.push(y);  

}
void reversekaro(stack<int>&st){
    if(st.size()==0){
       return ;
    }
     int x=st.top();
     st.pop();
     reversekaro(st);
     insertatbottom(st,x);
}
stack<int> reverseStack(stack<int> &st) {

    reversekaro(st);
    return st;
}