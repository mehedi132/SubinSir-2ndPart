#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
cout<<"Enter a number: ";
cin>>n;
cout<<"Numbers of 1 bit in "<<n<<" is: ";
int count=0;
while(n)
{
if(n&1)
{
    count++;  

}
 n=n>>1;
}
cout<<count;
    return 0;
}