#include <bits/stdc++.h>
using namespace std;
typedef struct{
    char first[20];
    char last[20];
}nametype;

typedef struct{ // typedef mean rename any keyyword
    int id;
    nametype name;
    char grade[3];
}studenttype;

void calrade( studenttype *s, int mark) // call by reference
{
    if(mark>=80)
    {
        strcpy(s->grade,"A+");
    }
     else if(mark>=70)
    {
        strcpy(s->grade,"A");
    }
     else if(mark>=60)
    {
        strcpy(s->grade,"A-");
    }
     else if(mark>=50)
    {
        strcpy(s->grade,"B");
    }
    else if(mark>=40)
    {
        strcpy(s->grade,"C");
    }
    else
    {
       strcpy(s->grade,"F");
    }
        
    
}


int main()
{
    studenttype student[5];
    int i,n=5;
    int mark[]={72,80,60,20,50};

    for(i=0;i<5;i++)
    {
        cout<<"Enter Student id: ";
       
        cin>>student[i].id;
        cout<<"\nEnter Student first name: ";
        cin>>student[i].name.first;
        cout<<"\nEnter Student last name: ";
        cin>>student[i].name.last;
        strcpy(student[i].grade, "");


    }
    for(i=0;i<5;i++)
    {
        calrade(&student[i],mark[i]);
    }
    for(i=0;i<5;i++)
    {
         cout<<"ID: "<<student[i].id<<endl;
         cout<<"First name: "<<student[i].name.first<<endl;
         cout<<"Last name: "<<student[i].name.last<<endl;
         cout<<"Grade: "<<student[i].grade<<endl;
    }

    
    return 0;
}