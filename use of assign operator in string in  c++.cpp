#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Tanmoy";
    cin>>s1;
    s1.assign("ami kharap");
    cout<<s1;
    s1.assign("ami kharap",3,6);
    cout<<"\n"<<s1;
}
