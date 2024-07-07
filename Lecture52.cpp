#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int mids;
    float ends;
    bool pre_abs;
    void displaymarks(){
        float total_marks;
        total_marks = mids * 0.5 + ends*0.75;
        cout<<total_marks;
    }
    void calculate_fail(){
        if(ends<=10)cout<<"student have to study one more year";
    }
};
class Vechile {
    public:
    string car;
    string tyre;
    int no_tyres;
    int no_seats;

};
int main(){
  Student a,b,c;
   
//   int d,e,f;
//   Vechile audi,mercedez,mcleran,porche;
   a.name="Rohit";
   a.mids=50;
   a.ends=99;
   a.pre_abs=1;
   a.displaymarks();



}