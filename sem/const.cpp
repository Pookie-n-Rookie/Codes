#include<iostream>
using namespace std;

// class kon{
//   mutable int x;
//   const int y;
//   public:
//   kon(int z=0):y(z+1){
//     (*this).x=z;
//   }
//   void kondekh()const{
//     cout<<x<<" "<<y<<endl;
//   }
//   void show(){
//      cout<<x<<" "<<y<<endl;
//   }
//   void incr()const{
//     x++;
//   }
// };

// int main() {
// kon k(5);
// const kon k2(10);
// k2.incr();
// k.show();
// k.incr();
// k.kondekh();
// k2.kondekh();
// }


class x{
  int a;
  public:
    x(int z=0){
      a=z;
  }
  void disp(){
    cout<<"a="<<a<<endl;
  }
  friend class y;
};

class y{
  int b;
  public:
  y(int k =0){
    b=k;
  }
  void show(x &obj){
    cout<<"showing from y value of x= "<<obj.a<<endl;
    cout<<"b="<<b<<endl;
  }
};


int main(){
  x ob1(5);
  y ob2(7);
  ob2.show(ob1);
}