
#include <bits/stdc++.h>
using namespace std;

int add(int n1,int n2)
{
    return n1+n2;
}

int sub(int n1,int n2)
{
    return n1-n2;
}

int operation(int (*fpp)(int,int), int a,int b) //send a function pointer as perameter
{
    return fpp(a,b);
}


int main()
{
    int (*fp) (int ,int ); // function pointer
    fp = &add;
    cout<<"Result: "<<fp(10,5)<<endl;
    fp=&sub;
    cout<<"Result: "<<fp(10,5)<<endl;
    cout<<"Result1: "<<operation(&add,20,10)<<endl;// here &add and add same.
    cout<<"Result1: "<<operation(&sub,20,10)<<endl;



    return 0;
}