#include<iostream>
using namespace std;
class A{
int a;
public:
A(int x=0):a(x){}
void show(){
  cout<<a<<endl;
}
friend class B;
};


class B{
int b;
public:
B(int y=0):b(y){}
void fun(A& ob){
  b=ob.a;
}
void show(){
  cout<<b<<endl;
}

};



int main() {
A oba(5);
B obb1(6);
B obb2(7);
oba.show();
obb1.show();
obb2.fun(oba);
obb2.show();


}