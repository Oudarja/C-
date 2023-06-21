#include<iostream>
using namespace std;
class car;
class truck
{
    int passenger;
    int speed;
public:
    truck(int p,int s)
    {
        passenger=p;
        speed=s;
    }
    friend int sp_greater(car c,truck t);
};
class car
{
    int passenger;
    int speed;
public:
    car(int p,int s)
    {
        passenger=p;
        speed=s;
    }
    friend int sp_greater(car c,truck t);
};
int sp_greater(car c,truck t)
{
    return c.speed-t.speed;
}
int main()
{
    int t;
    car c1(12,20),c2(13,25);
    truck t1(34,45),t2(29,90);
    t=sp_greater(c1,t1);
    if(t==0)
        cout<<"car and truck has same speed\n";
    else if(t<0)
        cout<<"truck is faster\n";
    else
        cout<<"car is faster\n";
        t=sp_greater(c2,t2);
    if(t==0)
        cout<<"car and truck has same speed\n";
    else if(t<0)
        cout<<"truck is faster\n";
    else
        cout<<"car is faster\n";
    return 0;
}
