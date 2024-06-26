#include <iostream>
using namespace std;
void minandmax(int *a, int *min,int *max){
     
      int small=a[0];
      int large=a[0];
      for(int i =0 ; i <6;i++){
        if(a[i]>large){
            large = a[i];
        }
        if(a[i]<small){
            small = a[i];
        }
      }
       *min = small;  // Set the values using pointers
    *max = large;
}
int main(){
    int a[5];
    int min,max;
    for(int i =0;i<6;i++){
        a[i]=i;
    }
    minandmax(a, &min, &max);
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}


