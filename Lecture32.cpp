#include <iostream>
using namespace std;
class Vehicle{
    protected:
    int tyres;
    string name;
    int capacity;
    int milegage;
    public:
    void calculatemileage(){
        cout<<"The mileage is "<<milegage;

    }
};
class SchoolBus : protected Vehicle{
    protected :
    int holidays;
    string schoolnum;
    public:
    void printnameofschool(){
        cout<<"The name of the school is "<<name;
    }
};
class Car:protected Vehicle{
    protected:
    int airbags;
    int acconsumption;
    public:
    void set_mileage(int milage){
        this->milegage=milage;
    }
    void calculatemileage(){
        cout<<"The mileage is "<<milegage;
    }

};
int main(){
    Car a;
    
    a.calculatemileage();

}
//protected: access specifier it makes data accessible only to derived class  but not outside
//public : anyone can access it 
//private: only restricted to that class
//single inheritance: base class and a derived class
//multiple inheritance:
//multi-level inheritance:
