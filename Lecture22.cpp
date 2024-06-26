#include <iostream>
using namespace std;
int main(){
    // asterisk(*)  tell the pointer name
    //inderication operator(*)

   int a,b,c;
   a=1;
   b=3;
   int *p,*q;
   p = &a;
   q =&b;
   c = *p+*q;
   
//    cout<<"The value of a is (from the actual variable-type) "<<a<<endl;
//    cout<<"The value of a from the pointer using *  : "<<*p<<endl;
cout<<"The value of c is : "<<c<<endl;
cout<<"The address of a is "<<&a<<"The value of the pointer is  "<<p;
}