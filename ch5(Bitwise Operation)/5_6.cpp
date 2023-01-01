#include <bits/stdc++.h>
using namespace std;
int main()
{ int n;
cout<<"Enter a number: ";
cin>>n;
if(n!=0 && (n & n-1)==0)
{
    cout<<n<<" is the power number of 2"<<endl;
}
else
{
     cout<<n<<" is not the power number of 2"<<endl;
}

    return 0;
}