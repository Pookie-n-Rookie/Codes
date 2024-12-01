#include<iostream>
using namespace std;

class ab{
  int x;
  int y;
  public:
  ab set_x(int z=0){
    this->x=z;
    return *this;

  }  
  ab set_y(int z=0){
    this->y=z;
    return *this;
  }
  void show(){
    cout<<x<<" "<<y<<endl;
  }


};



int main() {
ab ob;
ob.set_x(10).set_y(20).show();
}