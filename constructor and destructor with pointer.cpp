#include<bits/stdc++.h>
using namespace std;
class String
{
private:
    char *s;
    int Size;
public:
    String(char *);//Constructor
    ~String();//destructor
};
String::String(char *c)
{
    Size=strlen(c);
    s=new char[Size+1];
    strcpy(s,c);
    cout<<s;
}
String::~String();
{
    delete[]s;
}
int main()
{
    String x;
    x.String();
    ~String();
    return 0;
}
