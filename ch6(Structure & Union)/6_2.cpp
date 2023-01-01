#include <bits/stdc++.h>
using namespace std;

void plusTen(int a)
{
    a=a+10; // call by value mean provide real value
    
}

void plusTen1(int *a)
{
    *a=*a+10; // call by reference meanns provide address
}
int main()
{ int p=5;
plusTen(p);
cout<<"Call by Value "<<p<<endl;

plusTen1(&p);
cout<<"Call by Reference "<<p<<endl;
 

 return 0;
}
