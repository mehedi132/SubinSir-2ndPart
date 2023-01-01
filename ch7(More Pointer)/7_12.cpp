#include <bits/stdc++.h>
using namespace std;
int compare(const void *a, const void*b)
{
    //return (*(int*)a - *(int*)b); //use for accendingg sorted array
    return (*(int*)b - *(int*)a); //use for deccendingg sorted array
}
int main()
{

    int k,n=5;
    int *sitem;
   // int arr[]={1,2,3,4,5}; // must have sorted array
    int arr[]={5,4,3,2,1};
    cout<<"Enter the key to find: ";
    cin>>k;
 sitem= (int*) bsearch(&k,arr,n,sizeof(int),compare);// bsearch mean binary search
if(sitem!= NULL)
{
    cout<<"Item has found"<<endl;
}
else{
    cout<<"Item has not found"<<endl;

}


    return 0;
}
