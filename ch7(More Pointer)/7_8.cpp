#include <bits/stdc++.h>
using namespace std;
int main()
{
    void *vp; // void pointer
    int n=10;
    vp=&n;
    printf("Address of n= %p\n",&n);
     printf("value stored in vp= %p\n",vp);
      printf("Content in vp= %d",*((int*)vp));


    return 0;
}