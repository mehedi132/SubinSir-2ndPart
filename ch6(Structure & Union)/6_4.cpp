#include <bits/stdc++.h>
using namespace std;
union u{  // union means only one variable work/ store data at a time.

    char c;
    int x,y;
}uu;
int main()
{
    uu.c='A';
    cout<<uu.c<<endl;
    uu.x=10;
    cout<<uu.x<<endl;
    uu.y=15;
    cout<<uu.y<<endl;

    cout<<uu.c<<endl;
    cout<<uu.x<<endl;


    return 0;
}