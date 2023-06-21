#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k;
    ///Input file stream
    ifstream inFile;
    inFile.open("in.txt");

    ///Check for error
    if(inFile.fail())
    {
        cout<<"Error opening File";
        exit(1);
    }

    inFile>>i>>j;

    ///Output file stream

    ofstream outFile;

    outFile.open("out.txt");

    if(inFile.fail())
    {
        cout<<"Error opening File";
        exit(1);
    }

     outFile<<i<<' '<<j;

    outFile.close();

return 0;
}
