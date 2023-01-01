
#include <iostream>
using namespace std;

int main() {    
    int number;
     int number1;

   // cout << "Enter an integer: ";
    //cin >> number;
       number=2;
       number1=5;
       
       
       char a='m';
       char b='b';
    cout << "You entered " << number<<endl;    

    cout << "the address of the input is= " << &number<<endl; 
   
    cout << "You entered " << number1<<endl; 
    cout << "the address of the input is= " << &number1<<endl;
    cout << "size of input is= " << sizeof(number1)<<endl;
    cout << "size of input ch is= " << sizeof(a)<<endl;
    cout << "the address of the input is= " << &a<<endl;
    cout << "size of input ch b is= " << sizeof(b)<<endl;
    cout << "the address of the input is= " << &b<<endl;
    // cout << "\nHello World!";  
    return 0;

}