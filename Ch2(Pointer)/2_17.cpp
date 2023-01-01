#include <iostream>
using namespace std;
int main()
{
    int i=5;
    int *p,**q,***r;
    p=&i;
    q=&p;
    r=&q;
    cout<<"value of i is:"<<*p<<endl;
    cout<<"address of i is:"<<p<<endl;
      cout<<"value of p is:"<<*q<<endl;
    cout<<"address of p is:"<<q<<endl;
  
  cout<<"val of q is:"<<*r<<endl;
    cout<<"address of q is:"<<r<<endl;
 cout<<"val of q1 is:"<<**r<<endl;
 cout<<"val of q1 is:"<<***r<<endl;
    return 0;
}