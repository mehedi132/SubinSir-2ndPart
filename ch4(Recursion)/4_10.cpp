#include<iostream>
using namespace std;
void recurse()
{
    static int c=1;  //Static variable
    if (c>5)
    {
        return;
    }
    cout<<c<<endl;
    c++;
    recurse();
        
}
int main()
{
     recurse();
    
return 0;
}