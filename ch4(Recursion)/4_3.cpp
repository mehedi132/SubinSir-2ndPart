#include<iostream>
using namespace std;
int a;
static int b;    //Static global variable  can access from only the decleared file. But global variable can access from any files in a project.
void func()
{
    a=a+1;
    b=b+1;
}
int main()
{
     cout<<"a= "<<a<<"  b= "<<b<<endl;
    func();
    cout<<"a= "<<a<<"  b= "<<b<<endl;


    return 0;
}