#include <bits/stdc++.h>
using namespace std;
int main()
{ int a=5,b=6,c;
c=a&b;
cout<<"After  AND operation: "<<c<<endl; // both 1, output 1
c=a|b;
cout<<"After  OR operation: "<<c<<endl;// both 0, output 0
c=a^b;
cout<<"After  XOR operation: "<<c<<endl;// both same, output 0;

return 0;
}