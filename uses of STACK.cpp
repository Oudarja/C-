#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    int n,i,t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        //cin>>t;
        st.push();
    }
    for(;st.empty()!=1;)
    {
        cout<<st.top()<<"\n";
        st.pop();
    }
    return 0;
}
