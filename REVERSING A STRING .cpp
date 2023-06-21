#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string str,str1;
    cin>>str;
    (reverse(str.begin(),str.end()));
    str1.assign(str);
    cout<<str1;
    return 0;
}
