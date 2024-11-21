#include<iostream>
using namespace std;
class base1{
int b1;
public:
base1(int x=0):b1(x){}
void show(){
  cout<<b1<<endl;
}
};
class base2{
int b2;
public:
base2(int x=0):b2(x){}
void show(){
  cout<<b2<<endl;
  }
};
class child:public base1,public base2{
  int c;
  public:
  child(int z=0):base1(z+1),base2(z+3){}
};


int main() {
child obj;
obj.base2::show();
}