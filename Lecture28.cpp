#include <iostream>
#include <string>
using namespace std;
class Student{

    private:
    string myname;
    int rolll;
    int classs;
    int mark;
    string company;

    public://acess specifiers i.e cpp>>>c
    string name;
    int age;
    float marks;

     void calculate_percentage(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<< marks<<"%"<<endl;
    }
    //private elements are accessible inside the class
   
    void set_allidetails(int roll, int mark, int classss, string companyy){
        rolll = roll;
        marks= mark;
        classs= classss;
        company=companyy;

    }
    void get_allidetails(){
        cout<< "The roll number is "<< rolll<<" from class "<<classs<<" has score marks "<<marks
        <<" and has placed in the "<<company;
    }

   
};

int main(){
    Student a,b,c; //a,b,c is the object of the class Student
    a.name = "Rohit";
    a.age = 20;
    a.marks = 90;
    a.calculate_percentage();


    a.set_allidetails(3,90,4,"google");
    a.get_allidetails();

    

    return 0;

}