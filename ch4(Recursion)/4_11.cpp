#include<iostream>
using namespace std;
 int fac=1;  // factorial code
int noc=0;
int noc1=0;
 int fact(int n) // define by book
 {
    noc++;
    if(n==0)
    {
        return 1; 

    }
    return n* fact(n-1);

 }
void factorial(int num) // define by mehedi
{
    noc1++;
    if (num==1)
    {
        return ;
    }
    factorial(num-1);
    
    fac=fac*num;
    return;

}
int main()
{
   int a;
   cout<<"Entter a number to find its factorial: ";
   cin>>a;

    factorial(a);
    cout<<"Mehedi funnnction Factorial of "<<a<<" is "<<fac<<endl;
    cout<<"Mehedi funnction Factorial is called "<<noc1<<endl;
     cout<<"Factorial of "<<a<<" is "<<fact(a)<<endl;
      cout<<"Factorial is called "<<noc<<endl;
return 0;
}