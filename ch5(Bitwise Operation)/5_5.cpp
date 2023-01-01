#include <bits/stdc++.h>
using namespace std;
char lowerToCap(char n)
{
 return n&95;
}

char capToLow(char n)
{
 return n|32;
}

int main()
{ char c[]="AbCderFGTYhjuyi";
int s= sizeof(c)/sizeof(c[0]);


 for(int i=0;i<s;i++)
 {
 cout<<"UpperCase: "<<lowerToCap(c[i])<<endl;
 cout<<"LowerCase: "<<capToLow(c[i])<<endl;
 }
 return 0;
}
