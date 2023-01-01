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
    int k,n=5;
    int *sitem;
 
   
    cout<<"\nEnter the key to find: ";

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