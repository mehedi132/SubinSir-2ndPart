#include<iostream>
using namespace std;
void recurse(int count)
{
    if(count>5)
    {
        return;
    }
    
    recurse(count+1);
    cout<<count<<endl;
    return;
}
int main()
{
    recurse(1); //5,4,3,2,1
return 0;
}