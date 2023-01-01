#include <bits/stdc++.h>
using namespace std;
int main()
{
    int **mark;
    int num[10];
    int n,m,i,j;

    cout<<"Enter class Number: ";
    cin>>m;
    mark = (int **) malloc(sizeof(int)*m); // dynamic memory allowcation. **mark mean it is a pointer that hold other pointer address as a value
    if(mark==NULL)
    
     {
        cout<<"Memory Allocation failed"<<endl;
     }



    for(i=0;i<m;i++)
    { 
    cout<<"Enter student Number: ";
    cin>>n;
    num[i]=n;

    mark[i]= (int *)  malloc(sizeof(int)*n); // dynamic memory allowcation
    if(mark[i]==NULL)
    {
        cout<<"Memory Allocation failed"<<endl;
    }
    for(j=0;j<n;j++)
    { 
    cout<<"\nEnter student mark: ";
    cin>>mark[i][j];
    }

    }
    

    for(i=0;i<m;i++)
    
    { cout<<"\nClass "<<i<<":";
        for(j=0;j<num[i];j++)
        {
         cout<<"\n student mark: "<<mark[i][j];
        }
    
   
    }
     
     free(mark); // free the allocated dynamic memory
    return 0;
}    