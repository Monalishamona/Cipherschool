#include <iostream>
using namespace std;
class Student{
    public:
    int num;
    int capacity;
    string name;
    
    void numm(){
        cout<<"The num is "<<num<<endl;
    }

};
class Section:public Student{
    private:
    int section;

};
int main(){
    //encapsulation: storing everything in a capsule
    //inheritance --inherit from parent /base class
    Student a;
    a.num = 30;
    a.numm();

}