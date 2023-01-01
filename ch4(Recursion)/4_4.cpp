#include<iostream>
using namespace std;

void func()
{
    int  a=10;
    static int b=10; // only access from this function 
    a=a+2;
    b=b+2;
    cout<<"a= "<<a<<"  b= "<<b<<endl;

}
int main()
{
 func();
 func();
 func();

    return 0;
}