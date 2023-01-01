#include<iostream>
using namespace std;

void recurse( int count)
{
    if(count==5)
    {
        return;
    }
    char *p="Its a recursive Functtion";
    cout<<p<<endl;
    recurse(count+1);
    return;
}

int main()
{
recurse(1);

    return 0;

   
}