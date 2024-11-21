#include<iostream>
using namespace std;
class sb{
  int a;
  static int b;
  public:
  sb(int x=0){
    a=x;
    b++;
  }
  static void pf(){
    cout<<"b ="<<b<<endl;
    cout<<"calling a "<<endl;
    sb obj;
    obj.pr();
      } 
  void pr(){
    cout<<a+3<<endl;
  }
};
int sb::b=10;

int main() {
sb::pf();
// sb::pr(); dont do it
// sb obj(10);
// obj.pf();
}