#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"checking  is second string a substring of a first string"<<"\n";
    cin>>s1;
    cin>>s2;
    if(strstr(s1.c_str(),s2.c_str())!=0)
        cout<<"s1 contains s2"<<"\n";
    else
        cout<<"dont contains"<<"\n";
    return 0;
}
