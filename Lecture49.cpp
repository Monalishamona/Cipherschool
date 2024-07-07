#include <iostream>
using namespace std;
int fibo(int input){

    if(input == 0 || input ==1){
        return 1;
    }
    int final;
    final = fibo(input-1)+fibo(input-2);
    return final;
}
int main(){
   //recursion:Just something which repeats itself
   int input;
   cout<<"Enter the number :";
   cin>>input;
   cout<<fibo(input);
   return 0;
}