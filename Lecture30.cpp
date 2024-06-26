#include <iostream>
#include <string>
using namespace std;
class Complex{
    private:
    float real;
    float img;
    public:
    void set_parameter(int real, int img){
        this->real = real;
        this->img = img;
    }
    void Sqdistancefrom(){
        float dist;
        dist = real*real + img*img;
        cout<<"The distance between from origin is"<<dist;
        return;

    }
};
class Student{
    public:
    string school;
    string name;
    int students;
    Student(){
        school = "Nccps";
        name = "Monalisha";
        students = 78;
        cout<<"The constructor is called now";

    }
    ~Student(){
        cout<<endl<<"Now the use of the obj is completed and the obj is getting destroyed";
    }

};
class Week{
    public:
    int amount;
    int days;

    Week(int init_amount, int init_days){
        amount=init_amount;
        days=init_days;
        cout<<"The constructor of class Week is called"<<endl;
    }
    void print(){
        cout<<"The amount is "<<amount<<endl;
        cout<<"The days are "<<days<<endl;
    }

};
int main(){
    Week w(4,5);
    w.print();
    Complex x;
    Student a;
    x.set_parameter(4,5);
    x.Sqdistancefrom();

    // Week w(4,5);

    

    return 0;

}