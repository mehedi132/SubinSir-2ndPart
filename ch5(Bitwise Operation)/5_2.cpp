#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    int x;
    while(1){
        cout<<"press 1 for left shift or 2 for right shift: "<<endl;
     
        cin>>b;
        if (b==1)
        {
        cout<<"Enter the number (0 to exit):";
        cin>>a;
        if(a==0)
        {
            break;
        }
        cout<<"Enter the number of bit to shift left:"; // left shift multiple  the number by 2^x
        cin>>x;
        n=a<<x;
        }
        if (b==2)
        {
       cout<<"Enter the number (0 to exit):";
        cin>>a;
        if(a==0)
        {
            break;
        }
        cout<<"Enter the number of bit to shift left:"; // right shift divide  the number by 2^x
        cin>>x;
        n=a>>x;
        }


        
        cout<<"Result is:  "<<n<<endl;



    }

    return 0;
}