#include<bits/stdc++.h>
#include<conio.h>
struct info
{   char book[10^5];
    int book_id;
    double cost;
    char ch;
};
using namespace std;
int main()
{
    bool found=0;
    char ch[10^9];
    int t=0,p,i;
  struct info customer[10^5];
  cout<<"Start giving the :book name"<<"\n"<<":book id"<<"\n"<<":cost"<<"\n";
  cout<<"When finished press q\n";
  for(i=0;;i++)
  {
      cin>>customer[i].book>>customer[i].book_id>>customer[i].cost>>customer[i].ch;
      t++;
      if(customer[i].ch=='q')
        break;
  }
  cout<<"Give for which id i will search\n";
  cin>>p;
  for(i=0;i<t;i++)
  {
      if(p==customer[i].book_id)
      {
          found=1;
          cout<<customer[i].book<<"\n"<<customer[i].book_id<<"\n"<<customer[i].cost<<"\n";
          break;
      }
  }
  if(found==0)
    cout<<"There is no such customer\n";
   return 0;
}
