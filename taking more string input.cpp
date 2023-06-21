#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i;
    cout<<"Give how many string want to input\n";
    cin>>n;
    string str[n],h[n];
    int p[n];
    for(i=0;i<n;i++)
    {
        p[i]=0;
        cin>>str[i];
        h[i]=str[i];
        p[i]=str[i].length();
    }
    for(i=0;i<n;i++)
        {cout<<str[i]<<" "<<p[i]<<"\n";
        cout<<h[i]<<"\n";
        }
    return 0;
}
