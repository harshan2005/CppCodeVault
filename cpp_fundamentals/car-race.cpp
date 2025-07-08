#include <iostream>
using namespace std;
int main(){
    int road_A,road_B,road_C,Car;
    cout<<"Enter the road_A: ";
    cin>>road_A;
    cout<<"Enter the road_B: ";
    cin>>road_B;
    cout<<"Enter the road_C: ";
    cin>>road_C;
    cout<<"Enter the Car: ";
    cin>>Car;
    if(road_A%Car==0){
        cout<<"Car 1 goes into road A";
    }
    else if(road_B%Car==0){
        cout<<"Car 1 goes into road B";
    }
    else if(road_C%Car==0){
        cout<<"Car 1 goes into road C";
    }
    else{
        cout<<"No path exist";
    }
    return 0;
}