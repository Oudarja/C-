#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Give the num of element for which pointer operation has to be done\n";
    cin>>n;
    cout<<"\n\n";
    int a[n],i;
    cout<<"Now give input in the array\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    int *p;
    p=a;
    cout<<"Accessing array element by pointer\n";
    for(i=0;i<10;i++)
    {
        cout<<"a["<<i<<"]="<<"*(p+"<<i<<")="<<*(p+i)<<"\n";
    }
    return 0;
}
