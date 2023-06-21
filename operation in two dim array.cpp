#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    cout<<"give the num of row and colum\n";
    cin>>i>>j;
    int a[i][j];
    for(k=0;k<i;k++)
    {
        for(l=0;l<j;l++)
        {
            cin>>a[k][l];
        }
    }
    for(k=0;k<i;k++)
    {
        for(l=0;l<j;l++)
        {
            cout<<"a["<<k<<"]"<<"["<<l<<"]="<<a[k][l]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
