#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l;
cout<<"Enter a number: ";
cin>>n;
cout<<"Enter a nth bit to check whether it 1 or not: ";
cin>>m;
l=1<<(m-1);
if(n&l)
{
    cout<<"Yes.It is 1"<<endl;
}
else
{
     cout<<"no.It is 0"<<endl;
}


    return 0;
}