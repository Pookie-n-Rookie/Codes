#include<iostream>
using namespace std;
// class A{
// int a;
// public:
// void set_a(int x=0){a=x;}
// void show(){
//   cout<<a<<endl;
// }

// };


// class B:public A{
// int b;
// public:
// void set_b(int y=0){
// A::set_a(y+1);
// b=y;
// }

// void show(){
//   A::show();
//   cout<<b<<endl;
// }

// };



// int main() {
// B obj;
// obj.set_b(20);
// obj.set_a(10);
// obj.show();


class p{
  public:
  p(){
    cout<<"p const"<<endl;
  }
  virtual ~p() = 0;
  
};
p::~p(){
  cout<<"p dest";
}


class ch:public p{
  public:
  ch(){
    cout<<"child const"<<endl;
  }
  ~ch(){
    cout<<"child dest"<<endl;
  }
};

int main(){
  p *ptr=new ch();
  delete(ptr);
}