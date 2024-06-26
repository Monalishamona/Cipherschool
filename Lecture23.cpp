#include <iostream>
using namespace std;
int main(){
   dereference pointer: 
   int a ;
   int *x;
   x= &a;
   cout<<"The value of x is "<<x<<endl;
   cout<<"The value of x+1 is "<<x+1<<endl;//x+1 = next free location
   cout<<"The value of x+2 is "<<x+2<<endl;//x+2 = next free location


   int b[5];
   int *y;
   y = &b[0];
   for(int i =0;i<6;i++){
    cout<<b[i]<<endl;

   }return 0;
}