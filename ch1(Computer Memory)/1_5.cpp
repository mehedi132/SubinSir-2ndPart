#include<iostream>
using namespace std;
int main()
{int i;
char c;
double d;
float f;
cout<<"Size of integer is:"<<sizeof(i)<<" Bytes"<<endl;  // size is 4 bytes mean it hsa 32 bits that represent 2^32=4294967296 unnsign numbers
cout<<"Size of charecter is:"<<sizeof(c)<<" Bytes"<<endl;  //size is 1 bytes mean it hsa 8 bits that represent 2^8=256 ch
cout<<"Size of double is:"<<sizeof(d)<<" Bytes"<<endl; // size is 4 bytes mean it hsa 32 bits that represent 2^64 unnsign numbers
cout<<"Size of float is:"<<sizeof(f)<<" Bytes"<<endl; // size is 4 bytes mean it hsa 32 bits that represent 2^32=4294967296 unnsign numbers

    
    return 0;
}