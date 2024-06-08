#include <iostream>
using namespace std;
int main(){
    int i=1 ;
    while(i<101){

        cout<<i<<" ";
        i++;
    }
    // = assignment operator
    // == evaluate opeartor

    int a ;
    int input;
    for(a=1;a<101;a++){
        cin>>input;
        if(input == 65){
            cout<<"congrats you have guessed correct";
            break;
        }
    }


    
}