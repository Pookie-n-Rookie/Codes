#include<iostream>
using namespace std;
class sb{
  int a;
  const int b;
  public:
  sb(int x):b(x){
    a=x;
  }
 void pf()const{
    cout<<"b ="<<b<<endl;
    cout<<a<<endl;
  }
  void ppf(){
    cout<<a<<endl;
    cout<<b<<endl;
  }
  void incre(){
    a++;
  }

};


int main() {

sb obj1(10);
obj1.ppf();
const sb obj(10);
obj.pf();

}