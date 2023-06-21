#include<iostream>
struct student{
char name[100];
int id;
float cg;
};
void printbook(struct student *pointer,int x);
using namespace std;
int main()
{
    cout<<"give for how many student want to store info\n";
    int n,i;
    cin>>n;
    struct student ob[n];
    for(i=0;i<n;i++)
    {
        cin>>ob[i].name>>ob[i].id>>ob[i].cg;
        cout<<"\n";
    }
    printbook(ob,n);
    return 0;
}
void printbook(struct student *pointer,int x)
{
    int i;
    for(i=0;i<x;i++)
    cout<<(pointer+i)->name<<"\n"<<(pointer+i)->id<<"\n"<<(pointer+i)->cg<<"\n";
}

