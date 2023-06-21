#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k;
    ///Input file stream
    ifstream innFile;
    innFile.open("inn.txt");

    ///Check for error
    if(innFile.fail())
    {
        cout<<"Error opening File";
        exit(1);
    }
  string item;

  while(!innFile.eof())
  {
      innFile>>item;
      cout<<item<<'\n';
  }

return 0;
}

