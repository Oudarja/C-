#include <iostream>
using namespace std;
int main ()
{
int a = 10,p=0;
LOOP:do
{
    if(p==1)
    cout<<"--\n--\t--";
if( a == 15)
{
    p=1;
goto LOOP;
}
cout << "value of a is :"<<a<<"\n";
a++;
}
while(a<20);
    return 0;
}
