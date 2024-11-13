#include <iostream>
using namespace std;

// class st{
//   int s;
//   public:
//   st(int x= 0):s(x){}
//   st operator/=(int x){
//     (this->s)/=x;
//     return *this;
//   }
//   operator int(){
//     return s;
//   }
//   st operator*(st &ob){
//     st j;
//     j.s=s*ob.s;
//     return j;
//   }
//   st operator+(int z){
//     st j;
//     j.s=s+z;
//     return j;
//   }
//   st operator++(){
//     return st(++s);
//   }
//  friend st operator-(int x,st &obj){
//     st j;
//     j.s=x-obj.s;
//     return j;
//   }

// };

// int main(){
//   st ob1(4),ob2(5),ob3;
//   ob3=ob1/=2;
//   cout<<ob1<<" "<<ob3<<endl;
//   ob3=ob1*(ob2+5);
//   cout<<ob1<<" "<<ob3<<endl;
//   ob2=50-(++ob3)*ob1;
//   cout<<ob1<<" "<<ob2<<" "<<ob3<<endl;

// }
// class B;
// class A{
//   int a;
//   public:
//   A(int x=0):a(x){}
//   operator int(){
//     return a; 
//   }
//   bool operator!=(A &obj){
//     return (a!=obj.a);
//   }
//   void operator=(B);
// };

// class B{
//   int b;
//   public:
//   B(int y=0):b(y){}
//   B operator++(int){
//     B t;
//     t=*this;
//     (this->b)++;
//     return t;
//   }
//   B *operator->(){
//     return this;
//   }
//   operator int(){
//     return b; 
//   }
//   B &operator()(int x){
//     (this->b)=x;
//     return *this;
// }
//   B operator-(int x){
//     B j;
//     j.b=b-x;
//     return j;
//   }
//   B operator +(B &obj){
//     return B(b+obj.b);
//   }
//   int get_b(){
//     return b;
//   }
//   void show(){
//     cout<<b<<endl;
//   }

// };
// void A::operator=(B obj){
//   a=obj.get_b();
// }



// int main(){
//   A a1,a2;
//   int x=5;
//   B b1(x),b2,b3;
//   (b1++)->show();//5
//   a1=b1;
//   cout<<a1<<endl;//6
//   b3=b2(5);
//   cout<<b2<<" "<<b3<<endl;//5 5
//   a2=(b2+b3)-5;//5
//   cout<<a2<<endl;
//   if(a1!=a2)cout<<"Not equal";
//   else cout<<"Equal";
// }


// class num{
//   int n;
//   public:
//   num(int x=0):n(x){}
//   void operator=(int x){
//     n=x;
//   }
//   friend ostream &operator<<(ostream& os,const num &ob){
//     os<<ob.n;
//     return os;
//   }
//     friend istream &operator>>(istream& is, num &ob){
//     is>>ob.n;
//     return is;
//   }

// };
// int main(){
//   num n1;
//   cin>>n1;
//   cout<<n1;
// }
namespace ns1{
  void display();
  class nss1{
    public:
    void display();
  };
}

void ns1::display(){
  cout<<"ns1 hi"<<endl;

}
void ns1::nss1::display(){
  cout<<" nsss1 wala";
}

int main(){
  using namespace ns1;
  display();
  nss1 obj;
  obj.display();
}