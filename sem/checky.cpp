#include<iostream>
using namespace std;

class ab{
  int x;
  public:
  ab(int =0);
  void show();
  ~ab();
};
ab::ab(int z){
  x=z;
}
void ab::show(){
  cout<<"x ="<<x<<endl;
}
ab::~ab(){
  cout<<"yes done"<<endl;
}

int main() {
  ab ob(3);
  ob.show();
}