#include<iostream>
using namespace std;

class kon{
  mutable int x;
  const int y;
  public:
  kon(int z=0):y(z+1){
    (*this).x=z;
  }
  void kondekh()const{
    cout<<x<<" "<<y<<endl;
  }
  void show(){
     cout<<x<<" "<<y<<endl;
  }
  void incr()const{
    x++;
  }
};



int main() {
kon k(5);
const kon k2(10);
k2.incr();
k.show();
k.incr();
k.kondekh();
k2.kondekh();
}