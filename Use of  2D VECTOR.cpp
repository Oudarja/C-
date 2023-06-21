#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n1,n2,i,t,j;
    cin>>n1>>n2;
    vector< vector< int > > v;
    //vector<int>v[n1];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {cin>>t;
        v[i].push_back(t);
    }
    }
for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {cout<<v[i][j];
    }
    cout<<"\n";
}
return 0;
}
