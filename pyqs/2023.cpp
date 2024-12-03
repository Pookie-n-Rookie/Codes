#include <iostream>
using namespace std;

// class ab{
//   int a;
//   public:
//   ab(int x=0){
//     a=x;
//   }
//   ab operator+=(ab &obj){
//     a+=obj.a;
//     return *this;
//   }
//   ab operator++(int){
//     return ab(a++);
//   }
//    ab operator++(){
//    return ab(++a);
//   }
//  operator int(){
//   return a;
//  }
//  void show(){
//   cout<<"a="<<a<<endl;
//  }
// };

// int main(){
//   ab ob1(3),ob2(4),ob3;
//   ob3=ob1+=ob2;
//   ob3++.show();
//   ob2=10+ ++ob2;
//   cout<<ob1<<" "<<ob2<<" "<<ob3;
// }
// class A {
//     int x;
// public:
//     A(int z = 0) : x(z) {}
    
//     operator int() {
//         return x;
//     }
    
//     void operator*=(const A obj) {
//         x *= obj.x;
//     }

//     void display() {
//         cout << "a="<<x<< endl;
//     }
    
    
//     bool operator==( A& obj)  {  
//         return x == obj.x;
//     }
//     int get_x(){
//       return x;
//     }
// };

// class B {
//     int y;
// public:
//     B(int z = 0) : y(z) {}
    
//     B* operator->() {
//         return this;
//     }
    
//     void show() {
//         cout << y << endl;
//     }
    
//     B operator()(int x) {
//         y += x;
//         return *this;
//     }
//     B (A &obj){
//       y=obj.get_x();

//     }
// };


// int main(){
//   A oba1(23),oba2;
//   oba2*=oba1+10;
//   oba1.display();
//   B obb1=oba2;
//   obb1->show();
//   B obb2=obb1(10);
//   obb2->show();
//   A *ptr=new A(5);
//   if(oba1==*ptr){
//     oba1.display();

//   }
//   else ptr->display();
//   delete ptr;
// }


namespace ns1{

  int a,b;
  void f(int x,int y){
    a+=++x;
    b+=y++;
    cout<<a<<endl<<b<<endl;
  }
  namespace ns2{
    int x,y;
    void g(){
      a+=++x;
      b+=--y;
      cout<<a<<endl<<b<<endl;
      cout<<x<<endl<<y<<endl;
    }
  }
}

int main(){
    using namespace ns1;
    a=10,b=20;
    f(10,20);
    using ns2::x;
    using ns2::y;
    x=5,y=6;
    ns2::g();
}
// namespace ns1{

//   int a,b;
//   void f(int x,int y){
//     a+=++x;
//     b+=y++;
//     cout<<a<<endl<<b;
//   }
//   namespace ns2{
//     int x,y;
//     void g(){
//       a+=++x;
//       b+=--y;
//       cout<<a<<endl<<b;
//       cout<<x<<endl<<y;
//     }
//   }
// }

// int main(){
//     using namespace ns1;
//     a=10,b=20;
//     f(10,20);
//     using ns2::x;
//     using ns2::y;
//     x=5,y=6;
//     ns2::g();
// }

// template <class T = int, int N = 5>
// void print(T a) {
//     for (int i = 0; i < N; i++)
//        cout << a << " ";
//     cout<<endl;
// }

// int main(){
//   print<int,4>(95);//1
//   // print<4>('A');
//   print<double>(92.56);//
//   print<int>(93.4);//
//   print<>(94.56F);//
//   print<double,5>(96.05);//
//   print<char,4>(97);//
//   print<>(98);//
// }

// namespace ns1{
//   int a;
//   void show();
//   namespace ns2{
//     int a;
//     void show();
//   }
// }
// void ns1::show(){
//   cout<<a<<endl;
// }
// void ns1::ns2::show(){
//   cout<<ns2::a<<endl;
// }

// int main(){
//   using namespace ns1;
//   a=10;
//   show();
//   ns2::a=20;
//   ns2::show();
// }

// namespace ns1{
//   int a;
//   void show();
//   namespace ns2{
//     int a;
//     void show();
//   }
// }
// void ns1::show(){
//   cout<<a<<endl;
// }
// void ns1::ns2::show(){
//   cout<<ns2::a<<endl;
// }

// int main(){
//   using namespace ns1;
//   a=10;
//   show();
//   ns2::a=20;
//   ns2::show();
// }

