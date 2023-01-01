#include<iostream>
using namespace std;
void recurse(int count)
{
    if(count>5)
    {
        return;
    }
    cout<<count<<endl;
    recurse(count+1);
    cout<<endl<<count<<endl;
    
}
int main()
{
    recurse(1); //1,2,3,4,5     5,4,3,2,1
return 0;
}