#include <iostream>
using namespace std;
main()
{
unsigned int a = 60; // 60 = 0011 1100
unsigned int b = 13; // 13 = 0000 1101
int c = 0;
c = a & b; // 12 = 0000 1100
cout << "Line 1 - Value of c is : " << c << "\n" ;
c = a | b; // 61 = 0011 1101
cout << "Line 2 - Value of c is: " << c << "\n" ;
c=a^b;
cout<<"Line -3 Value of c is :"<<c<<"\n";
c=~a;
cout<<"Line -4 Value of c is :"<<c<<"\n";
c=a<<2;
cout<<"Line -5 Value of c is :"<<c<<"\n";
c=a>>2;
cout<<"Line -6 Value of c is :"<<c<<"\n";
return 0;
}
