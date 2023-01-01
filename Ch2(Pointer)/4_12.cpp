
#include<bits/stdc++.h>
using namespace std;
int noc=0;
int arr[50]; // as it is a globaal variable, all elemennts are inittail with 0.

int fibo(int n)  //fibonacchi number
{  noc++; 
    if(arr[n]!=0)
    {
        return arr[n];
    }
    if (n==1)
    {
        return 0;
    }

     if (n==2)
    {
        return 1;
    }
    int sum;
    arr[n]=fibo(n-1)+fibo(n-2);
   return arr[n];


}

int main()
{
    int  n;
    cout<<"Enter the N: ";
    cin>>n;
    char s[4];
    if(n==1)
    {
        strcpy(s,"st");
    }
    else if(n==2) 
    {
        strcpy(s,"nd");
    }
    else if(n==3)
    {
        strcpy(s,"rd");
   
    }
     else 
    {
        strcpy(s,"th");
    }


    cout<<n<<s<<" Fibonacchi number is "<<fibo(n)<<endl;
     cout<<"funnction is called "<<noc<<endl;
    int fib[20]={0,1};
     cout<<"Fibonacchi series is "<<fib[0]<<"+" <<fib[1]<<"+";
    for (int i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2]; //iterattive approach
        cout<<fib[i]<<"+";
    }
return 0;
}