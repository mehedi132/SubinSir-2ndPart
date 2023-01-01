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
    return;
}
int main()
{
    recurse(1);// 1,2,3,4,5
return 0;
}