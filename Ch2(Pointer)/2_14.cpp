#include<iostream>
using namespace std;
int main()
{
    char s[]= "Banglasesh";
    char *d="dhaka";
    cout<<s<<endl;
    cout<<"Address= "<<&s<<endl;
    printf("Address is= %p\n",s);
   char *c;
   c=s;
   cout<<"Name of the country "<<c<<endl;
printf("Name of the country %s\n",c);
printf("Name of the city %s\n",d);
 printf("Address is= %p\n",d);
 
char c1='A',c2='B',c3='C';
char *p1,*p2,*p3;
p1=&c1;
p2=&c2;
p3=&c3;
cout<<*p1<<endl<<*p2<<endl<<*p3;

 return 0;
}