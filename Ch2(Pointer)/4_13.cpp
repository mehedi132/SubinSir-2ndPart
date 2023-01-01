#include<bits/stdc++.h>
using namespace std;
int i=0;
int j=1;
void reverseString( char s[]) //Reverse Stringg using recursion
{
    if(s[i]=='\0')
    {
       return;
    }
    i++;
    reverseString(s);
   cout<<s[i-j];
   j++;
   return;
}
int sumSeries(int n) // sum of from 1 to n

{
    if(n==1)
    {
        return 1;
    }
 return n +  sumSeries(n-1);
}

int main()
{
    char a[]="MEHEDI";
 cout<<"Reverse String is:: "; 
   reverseString(a);
    cout<<endl<<"Sum of series 1 to n is: "<< sumSeries(100);

    
    return 0;

return 0;
}