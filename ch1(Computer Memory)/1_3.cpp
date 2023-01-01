#include<iostream>
using namespace std;
int main()
{
    char ch1='A', ch2='B';
    int a=10, b=2000,c=50;
    cout<<"value of ch1:"<<ch1<<endl;
    cout<<"Address of ch1:"<<&ch1<<endl;
    printf("Address of ch1:%p\n",&ch1);
    cout<<"value of ch2:"<<ch2<<endl;
    cout<<"Address of ch2:"<<&ch2<<endl;
    printf("Address of ch2:%p\n",&ch2);
    cout<<"value of a:"<<a<<endl;
    cout<<"Address of a:"<<&a<<endl;
    cout<<"value of b:"<<b<<endl;
    cout<<"Address of b:"<<&b<<endl;
    cout<<"Address of c:"<<&c<<endl;


    return 0;
}