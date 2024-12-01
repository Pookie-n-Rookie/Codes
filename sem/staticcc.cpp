#include<iostream>
using namespace std;

class ab{
  int x;
  static int y;
  public:
  ab(int z=0){
    x=z;
    y+=2;
  }
  static void f1(){
     ab::f2(); // 1st method
     f2();// 2nd method
    //  ab ob;
    //  ob.f4();

  }

  static void f2(){
    cout<<y<<endl;
  }
  void f3(){
    //if  static call from non static
    f2();// 1st method
    f4();// 2nd method
    this->f2();// 3rd method
    ab::f2();// 4th method
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