#include <iostream>
using namespace std;


namespace ns1{
int a=10;
void f(){
  cout<<"a="<<a<<endl;
}
}

namespace ns2{
int a=7;
void f(){
  cout<<"a="<<a<<endl;
}
}
namespace ns1{
int b=10;
}

int main(){
// using namespace ns1;
// cout<<a+b<<endl;
// ns2::f();
namespace ns3   =ns1;
cout<<ns3::a<<endl;
cout<<ns3::b;
cout<<ns1::a;
}