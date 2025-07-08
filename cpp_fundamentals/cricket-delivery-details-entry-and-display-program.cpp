#include <iostream>
using namespace std;

class Delivery{
  public: 
    long Over;
    long Ball;
    long Run;
    string Batsman;
    string Bowler;
    string Non_Striker;
};

int main(){
  
  Delivery delivery;
  

  cin>>delivery.Over;
  cin>>delivery.Ball;
  cin>>delivery.Run;
  cin.ignore();
  
  getline(cin,delivery.Batsman);
  getline(cin,delivery.Bowler);
  getline(cin,delivery.Non_Striker);
  
  cout<<"Delivery Details:"<<endl;
  cout<<"Over: "<<delivery.Over<<endl;
  cout<<"Ball: "<<delivery.Ball<<endl;
  cout<<"Runs: "<<delivery.Run<<endl;
  cout<<"Batsman: "<<delivery.Batsman<<endl;
  cout<<"Bowler: "<<delivery.Bowler<<endl;
  cout<<"non-Striker: "<<delivery.Non_Striker<<endl;
  return 0;
}