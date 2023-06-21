#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v,p;
    int i,n,t,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>t;
        v.push_back(t);
}
p=v;
sort(p.begin(),p.end());
sort(v.begin(),v.end(),greater<int>());
 for(auto x: p)
        {
 cout<<x<<" ";
        }
        cout<<"\n";
    //another process of printing
    for(auto x: v)
    {
        cout<<x<<" ";
    }
return 0;
}
