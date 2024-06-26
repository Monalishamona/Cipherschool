#include <iostream>
using namespace std;
int main(){
    char arr[1000];
    int i;

    for(int i =0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"The name you have entered :"<<endl;
    for(int i =0;i<5;i++){
        cout<<arr[i];
    }
}