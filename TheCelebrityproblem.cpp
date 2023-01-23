class Solution 
{
    private:
    bool knows(vector<vector<int> >& M,int a,int b, int n){
        if(M[a][b]==1){
            return true;
        }
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        // step1:push all the element in stack
        for(int i=0;i<n;i++){
            st.push(i);
        }
        while(st.size()>1){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            // get two elements and compare them 
            if(knows(M,a,b,n)){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        // we got 1 left element in stack , we thought that this is a potential celebrity
        // lets verify it
        int candidate=st.top();
        // check rows
        bool checkrow=false;
        bool checkcolumn=false;
        int countrow=0;
        int countcolumn=0;
        for(int i=0;i<n;i++)
        {
             if(M[candidate][i]==0){
                 countrow++;
             }
            if(M[i][candidate]==1){
                countcolumn++;
            }
        }
        if(countrow==n){
            checkrow=true;
        }
        if(countcolumn==n-1){
            checkcolumn=true;
        }
        if(countrow!=n){
            return -1;
        }
        if(countcolumn!=n-1){
            return -1;
        }
        
        if(checkrow==true && checkcolumn==true){
            return candidate;
        }
        
    }
};