#include<iostream>
#include<cstring>
void printbook(struct books y);
struct books
{
    char title[100];
    char  author[100];
    float cost;
    int book_id;
};
using namespace std;
int main()
{
    int n,i;
    cout<<"Give for how many student i have to collect info\n";
    cin>>n;
    struct books info[n];
    for(i=0;i<n;i++)
        cin>>info[i].title>>info[i].author>>info[i].cost>>info[i].book_id;
        for(i=0;i<n;i++)
    printbook(info[i]);
    return 0;
}
void printbook(struct books y)
{
    cout<<y.title<<"\n"<<y.author<<"\n"<<y.cost<<"\n"<<y.book_id<<"\n";
}
