#include<iostream>
using namespace std;
int main()
{
    int arr[50]={1,2,3,4,5};
    cout<<"Elements in the arrasy is>>"<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<endl;
    cout<<"Address of array is:"<<arr<<endl;
    cout<<"Address of arr[0] is:"<<&arr[0]<<endl;
     cout<<"Address of arr[1] is:"<<&arr[1]<<endl;
      cout<<"Address of arr[2] is:"<<&arr[2]<<endl;
       cout<<"Address of arr[3] is:"<<&arr[3]<<endl;
        cout<<"Address of arr[4] is:"<<&arr[4]<<endl;
    
    return 0;
}