#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={10,20,30,40,50};
    int *p;
    p=a;
    cout<<"*p= "<<*p<<endl;//10
    cout<<"*p+1= "<<*p+1<<endl;//11
    cout<<"*(p+1)= "<<*(p+1)<<endl; //20

     cout<<"*p+2= "<<*p+2<<endl;//12
    cout<<"*(p+2)= "<<*(p+2)<<endl; //30

    char *s="Bangladesh";

 cout<<"*s= "<<*s<<endl;//B
 printf("*s+1= %c\n",*s+1);//C
  
    cout<<"*(s+1)= "<<*(s+1)<<endl; //a


    return 0;
}
