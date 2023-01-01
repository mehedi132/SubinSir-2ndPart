#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *mark[3];
    int num[10];
    int n,i,j;
    for(i=0;i<3;i++)
    { 
    cout<<"Enter student Number: ";
    cin>>n;
    num[i]=n;

    mark[i]= (int *)  malloc(sizeof(int)*n); // dynamic memory allowcation
    for(j=0;j<n;j++)
    { 
    cout<<"\nEnter student mark: ";
    cin>>mark[i][j];
    }

    }
    

    for(i=0;i<3;i++)2
    
    { cout<<"\nClass "<<i<<":";
        for(j=0;j<num[i];j++)
        {
         cout<<"\n student mark: "<<mark[i][j];
        }
    
   
    }
    
    return 0;
}    