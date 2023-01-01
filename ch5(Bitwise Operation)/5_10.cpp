#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={5,4,2,1,3,7,9}; // ann array have 1 to n-2 number. find the  missing 2 numbers,
    int s= sizeof(arr)/sizeof(arr[0]);
   // cout<<s<<endl;
    
    int b[s+2]={0};
   
    for(int i=0;i<s;i++)
    {
        b[arr[i]]=arr[i];
   
    }
  
      for(int k=1;k<s+2;k++)
    {
        if( b[k]==0)
        {

        cout<<k<<" is missing\n";

        }
       
    }
    

    return 0;
}