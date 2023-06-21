#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
class strtype
{
    char *p;
    int len;
public:
    strtype(char *ptr);
    ~strtype();
    void show();
};
strtype::strtype(char *ptr)
{
    len=strlen(ptr);
    p=new char [len+1];
    strcpy(p,ptr);
}
strtype::~strtype()
{
    cout<<"Freeing p\n";
   delete p;
}
void strtype::show()
{
    cout<<p<<"length :"<<len;
    cout<<"\n";
}
int main()
{
    strtype s1("This is a test"),s2("I like c++");
    s1.show();
    s2.show();
    return 0;
}
