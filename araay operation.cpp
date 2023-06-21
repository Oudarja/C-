#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n[10],i;
    for(i=0;i<10;i++)
    {
        n[i]=i+100;
    }
    cout<<"index"<<setw(15)<<"Element\n";
    for(i=0;i<10;i++)
    {
        cout<<i<<setw(15)<<n[i]<<"\n";
    }
    return 0;
}
