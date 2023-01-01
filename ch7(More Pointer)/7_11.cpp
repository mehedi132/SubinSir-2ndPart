#include <bits/stdc++.h>
using namespace std;
int compare (const void *a, const void *b)
{
 return *((int*)a)- *((int*)b); // sort in accending order
 //return *((int*)b)- *((int*)a); // sort in deccending order
}
int main()
{
    int arr[]={50,47,2,16,9};
    qsort(arr,5,sizeof(int),compare); //qsort is a build in quick sort algorithm.
    cout<<"Sorted Array:";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    
    }

    return 0;
}