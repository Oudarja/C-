#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int n,i,t;
    priority_queue<int>q;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>t;
        q.push(t);
    }
    for(;!q.empty();)
    {
       cout<<q.top()<<"\n";
       q.pop();
    }
    return 0;
}
