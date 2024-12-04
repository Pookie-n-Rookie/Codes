#include<iostream>
using namespace std;

class ab{
  int x;
  static int y;
  public:
  ab(int z=0){
    x=z;
    y=z;
  }
  static void f1(){
     ab::f2();
     f2();
     ab obj;
     obj.f3();
   

  }

  static void f2(){
    cout<<y<<endl;
  }
  void f3(){
   
    f2();
    f4();
    this->f2();
    ab::f2();
  }
  void f4(){
    cout<<x<<" "<<y<<endl;
  }
};
int ab::y;


int main() {
 ab ob(5);
 ob.f1();
 ob.f2();
 ob.f3();
 ob.f4();
}