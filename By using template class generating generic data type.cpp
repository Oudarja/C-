#include<iostream>
using namespace std;
template<class x,class y>class myclass
{x i;
y j;
public:
    myclass(x a,y b)
    {
        i=a;
        j=b;
    }
    void show()
    {
        cout<<i<<" "<<j<<"\n";
    }
};
int main()
{
    myclass<int ,double>ob1(10,0.23);
    myclass<char,char*>ob2('x',"This is good");
    ob1.show();
    ob2.show();
    return 0;
}
