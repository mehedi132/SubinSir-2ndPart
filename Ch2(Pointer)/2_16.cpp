#include <iostream>
using namespace std;
int main()
{
    int i=5;
    int *p,**q;
    p=&i;
    q=&p;
    **q=10;
    
    cout<<"value of i is:"<<i<<endl;
    cout<<"value of i is:"<<*p<<endl;
     cout<<"value of i is:"<<**q<<endl;   
     
     
  
  
    return 0;
}