#include <iostream>
using namespace std;
int main(){
    int value;
    cout <<"Enter the value: ";
    cin >> value;
    
    int First_index = value%10;
    int Second_index = value/10;
    int add=First_index+Second_index;
    cout <<"Sum of the Int Value: "<<add;
}