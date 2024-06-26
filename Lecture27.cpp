#include <iostream>
#include <string>
using namespace std;
int main(){
    // string name;
    // cin>>name;
    // for(int i =0 ; i < 6;i++){
    //     cout<<name[i]<<endl;
    // }
    // string a,b,c;
    // cin>>a>>b;
    // cout<<"The strings which you have as input are "<<a<<b;
    // c = a+b;
    // cout<<"The combined word is: "<<c;
    // cout<<"The length of the  combined name is "<<c.length();
     //instead of using cin, you can use a getline;
     string a;
    getline(cin,a);//getline is a function which is why you can see(),
    cout<<"Your full name is : "<<a <<endl;




    return 0;



}