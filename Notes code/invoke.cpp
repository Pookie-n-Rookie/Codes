#include <iostream>
using namespace std;

// Base class
// class Base {
// public:
// virtual void disp(){
//   cout<<"B bana ";
// }
// };
// class child:public Base{
//   public:
//   void disp(){
//     cout<<"C bana ";
//   }

// };


// int main() {
//     Base *ptr=new child();
//     ptr->disp();
//     child *pt=new child();
//     pt->disp();
//     child obj;
//     obj.disp();
//     obj.Base::disp();

// }
class Base {
public:
 Base(){
  cout<<"B bana ";
}
 ~Base(){
  cout<<" B done";
}
};
class child:public Base{
  public:
  child(){
    cout<<"C bana ";
  }
  ~child(){
  cout<<" C done";
}

};


int main() {
    Base *ptr=new child();
   delete ptr;
    // child *pt=new child();
    //    delete pt;

    // child obj;

}
