#include <bits/stdc++.h>
using namespace std;
int main()
{
 time_t t;
 srand((unsigned) time(&t));
 for(int i=0;i<5;i++)
 {
    cout<<rand()%100<<endl; //rand mod 100 mean everyy random number is less than 100;
 }
 return 0;
}