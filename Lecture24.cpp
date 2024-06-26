#include <iostream>
using namespace std;
void swap(int *x, int *y){
    int c ;
    c = *x;
    *x=*y;
    *y = c;
    cout<<"The swapping is complete "<<endl;
}

int main(){
    int a,b;
   
    a = 3 ;
    b = 6 ;
    cout<<"The value of a and b resp before swapping is "<<a  <<"  "<< b<<endl;

    swap(&a,&b);
    cout<<"The value of a and b resp after swapping is "<<a  <<"  "<< b<<endl;
}