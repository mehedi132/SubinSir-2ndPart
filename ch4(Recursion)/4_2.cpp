#include<iostream>
using namespace std;
int x=1;
void myfunc(int y)
{
  y=y*2;
  x=x+10;
  cout<<"myfunc x= "<<x<<" y= "<<y<<endl;
}

int main()
{ int y=5;
x=10;
myfunc(y);
cout<<"main x= "<<x<<" y= "<<y<<endl;

  return 0;
}