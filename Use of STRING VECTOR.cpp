#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string>vs;
    int n,i;
    string str;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str;
        vs.push_back(str);
    }
    for(i=0;i<n;i++)
        cout<<vs[i]<<" "<<vs[i].size()<<"\n";
    return 0;
}
