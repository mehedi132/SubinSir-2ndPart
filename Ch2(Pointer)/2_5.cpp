#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p;
    cout<<"value of x="<<x<< endl;
    p=&x;
    *p=20;
     cout<<"value of x="<<x<< endl;
     x=15;
      cout<<"value of x="<<x<< endl;
      cout<<"Value stored at location "<<p<<" is "<<*p<<endl;
      cout<<"Address of X="<<&x<<endl;
      cout<<"Value of p is="<<p<<endl;

       return 0;

}