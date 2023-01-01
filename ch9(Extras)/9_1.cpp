#include <bits/stdc++.h>

using namespace std;
#define A 50
#define b 40; // no data type
#define PI (2*acos(0))
#define MAX(a,b)(a>b? a : b) //macro in single line

//multiline macro
#define SWAP(a,b) {  \ 
a=a^b; \
b^=a;\
a^=b ;\
}


enum color{RED,BLUE,GREEN}; // multiple constant define at a time

enum color1{RED1=10,BLUE1=520,GREEN1=580};

int main()
{
    int p=10,q=20;
    double e=3.5669, r=3698;
    cout<<MAX(p,q)<<endl;
    cout<<MAX(e,r)<<endl;
    SWAP(p,q);
    cout<<"After Swap: "<<p<<" "<<q<<endl;

   
   cout<<"Value of pi="<<PI<<endl;
      
      cout<<GREEN<<endl;
       cout<<GREEN1<<endl;


    
    return 0;
}