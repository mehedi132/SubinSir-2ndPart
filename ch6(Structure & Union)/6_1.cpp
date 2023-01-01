#include <bits/stdc++.h>
using namespace std;
struct student
{
    int id;
    char *s;  //pointer
};

struct student1
{
    int idd;
    char sd[40]; // array
};

int main()
{
    struct student one;
    struct student1 two;
    one.s="Mehedi Hasan";
    one.id=132;
    cout<<one.id<<endl<<one.s;
    two.idd=133;
    strcpy(two.sd, "Jamal");
    cout<<endl<<two.idd<<endl<<two.sd;
     cout<<sizeof(struct student1);
    return 0;
}