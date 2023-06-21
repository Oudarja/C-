#include<iostream>
double average(int p[],int x);
using namespace std;
int main()
{
    int size_,i;
    double l=0;
    cout<<"Give the size of array"<<"\n";
    cin>>size_;
    int arr[size_];
    for(i=0;i<size_;i++)
        cin>>arr[i];
        l=average(arr,size_);
        cout<<"Average is:"<<l;
        return 0;
}
double average(int p[],int x)
{
    int sum=0;
    double w=0;
    int i;
    for(i=0;i<x;i++)
        sum=sum+p[i];
    w=double(sum)/x;
    return w;
}

