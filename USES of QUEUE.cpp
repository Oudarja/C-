#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    int i,n,t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        q.push(t);
    }
    for(;!q.empty();)
    {
        cout<<q.front()<<"\n";
        q.pop();
    }
    return 0;
}
