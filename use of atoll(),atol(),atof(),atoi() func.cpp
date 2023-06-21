#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    char str1[]="1000000000",str2[]="1000000000000",str3[]="10",str4[]="10.90";
    cout<<atol(str1)/2<<"\n";
    cout<<atoll(str2)/2<<"\n";
    cout<<atoi(str3)/2<<"\n";
    cout<<atof(str4)/2;
    return 0;
}
