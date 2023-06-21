#include<iostream>
using namespace std;
int abs(int n);
long abs(long n);
double abs(double n);
int main()
{
    cout<<"Absoulete value of -10:"<<abs(-10)<<"\n";
        cout<<"Absoulete value of -10L:"<<abs(-10L)<<"\n";
            cout<<"Absoulete value of -10.01:"<<abs(-10.01)<<"\n";
            return 0;
}
int abs(int n)
{
    cout<<"In integer abs(): ";
    return n<0?-n:n;
}
long abs(long n)
{
    cout<<"In long abs(): ";
    return n<0?-n:n;
}
double abs(double n)
{
    cout<<"In double abs(): ";
    return n<0?-n:n;
}
