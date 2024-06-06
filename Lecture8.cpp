#include <iostream>
using namespace std;
int main(){
    //cannot declare array as arr[2.5]
    int a[10];
    cout<<"Give 5 integers as input "<<endl;
    for(int i =0; i <5; i++){
        cin>>a[i];
    }
    for(int i =0;i <5 ;i++){
        cout<<a[i]<<" ";
    }


    for(int i =0; i <10; i++){
        cin>>a[i];
    }
    for(int i =9;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}