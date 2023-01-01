#include<iostream>
using namespace std;
int main()
{
    int x=10,y;
    int*p=NULL,*q; // NULL pointerr
  
    p=&x;
    q=&y;
    y=*p;
    *p=15;
    *q=20;
    cout<<"Value of x="<<x<<endl;
    cout<<"Value of y="<<y<<endl;
    cout<<"Value of *p="<<*p<<endl;
    cout<<"Value of *q="<<*q<<endl;

    
    return 0;
}