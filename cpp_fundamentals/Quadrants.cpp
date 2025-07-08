#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the X and Y Value:\n"
    cin >>x>>y;
    if(x>0&&y>0){
        cout<<x<<","<<y<<" is I Quadrants"<<endl;
    }
    else if(x<0&&y>0){
        cout<<x<<","<<y<<" is II Quadrants"<<endl;
    }
    else if(x<0&&y<0){
        cout<<x<<","<<y<<" is III Quadrants"<<endl;
    }
    else{
        cout<<x<<","<<y<<" is IV Quadrants"<<endl;
    }
    return 0;

}