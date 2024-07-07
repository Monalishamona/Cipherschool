#include <iostream>
using namespace std;
void printmaxclassesatend(int start[],int end[], int class_id[]){
    cout<<class_id[0];
    int i,endofclass;
    for(i =1;i<9;i++){
        if(start[i]>=endofclass){
            cout<<class_id[i];
            endofclass= end[i];
        }
    }
}
int main(){
   int start[]={2,2,4,1,5,8,9,11,13};
   int end[]={3,5,7,8,9,10,11,14,16};
   int class_id[]={4,2,3,1,5,6,7,8,9};
   printmaxclassesatend(start,end,class_id);
}