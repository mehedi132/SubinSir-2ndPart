#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,3,4,1,2,4,3};;
    int res= arr[0];
    int s=sizeof(arr)/sizeof(arr[0]);
    for  (int i=1;i<s;i++ )
    {
        res=res ^ arr[i];
    }
    cout<<"Single element in the array is: "<<res; 
    return 0;
}