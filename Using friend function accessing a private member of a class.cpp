#include<iostream>
using namespace std;
class Box
{double width=10.55;
public:
    setwidth(double wid)
    {
        width=wid;
    }
   friend void printwidth(Box box)
    {
        cout<<"Width is :"<<box.width<<"\n";
    }
};
int main()
{
    Box box;
    printwidth(box);
    box.setwidth(10.6667);
    printwidth(box);
    return 0;
}






















