#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    string name;
    int roll;
    int marks;

    public:
    void set_details(string name, int roll, int marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
        cout<<"The address of the object calling the function is "<<this<<endl;
    }
    void get_details(){
        cout<<"The girl whose name is "<<name<<" has roll no "<< roll <<" and have scored marks "<<marks <<" .";

    }
};
int main(){
    Student a;
    a.set_details("Monalisha",1,90);
    a.get_details();
    cout<<"The adddress of the function a is "<<&a<<endl;
    return 0;

}