#include <iostream>
using namespace std;

// Base class
class Base {
public:
void disp(){
  cout<<"B bana ";
}
};
class child:public Base{
  public:
  void disp(){
    cout<<"C bana ";
  }

};


int main() {
    Base *ptr=new child();
    ptr->disp();
    child *pt=new child();
    pt->disp();
    child obj;
    obj.disp();
    obj.Base::disp();

}
