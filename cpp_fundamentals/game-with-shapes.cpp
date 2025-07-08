#include <iostream>
using namespace std;
int main(){
    int circle,square;
    cout<<"Enter the value: \n";
    cin>>circle>>square;
    if(circle<square){
        cout<<"circle can be inside a Square";
    }
    else{
        cout<<"circle cannot be inside a Square";
    }
    return 0;
}