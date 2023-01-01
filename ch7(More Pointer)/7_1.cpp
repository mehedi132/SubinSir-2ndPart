#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *mark;
    int n,i;
    cout<<"Enter student Number: ";
    cin>>n;
    mark= (int *)  malloc(sizeof(int)*n); // dynamic memory allowcation
    for(i=0;i<n;i++)
    { 
    cout<<"\nEnter student mark: ";
    cin>>mark[i];
    }

    for(i=0;i<n;i++)
    { 
    cout<<"\n student mark: "<<mark[i];
   
    }
    
    return 0;
}    