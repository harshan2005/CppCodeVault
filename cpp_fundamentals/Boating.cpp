#include <iostream>
using namespace std;
int main(){
    int Adult,Child,Boat;
    cout<<"Enter the Boat: ";
    cin>>Boat;
    cout<<"Enter the Adult: ";
    cin>>Adult;
    cout<<"Enter the Child: ";
    cin>>Child;
    int Adult_weigth=Adult*75;
    int Child_weigth=Child*30;
    if(Boat>(Adult_weigth+Child_weigth)){
        cout<<"Boat is stable";
    }
    else{
        cout<<"Boat will drown";
    }
    return 0;
}