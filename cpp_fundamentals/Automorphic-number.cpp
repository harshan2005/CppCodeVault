#include <iostream>
using namespace std;
int main(){
    int number,square;
    cout<<"Enter the numbers: ";
    cin>>number;
    square=number*number;
    //(square%10==number && square/10==number)
    if(square%10){
        cout<<"Automorphic Number";
    }
    else{
        cout<<"Not Automorphic Number";
    }
}