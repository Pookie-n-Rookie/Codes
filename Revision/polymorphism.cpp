#include<iostream>
using namespace std;

// int sum(int x,int y) {
//   return (x+y);
// }
// double sum(double x,int y){
//   return (x+y);
// }
// double sum(int x,double y){
//   return(x+y);
// }

// double sum(int x,int y){//two function same in argument list different in return type
//   return (x+y);
// }



//cascading 
// class ab
// {
//   int a,b;
//   public:
//   ab* set_a(int x){
//     a=x;
//     return this;
//   }
//     ab* set_b(int y){
//     b=y;
//     return this;
//   }
//   void disp(){
//     cout<<"a="<<a;
//     cout<<"b="<<b;
//   }
// };

// int main(){
//   ab ob;
//   ob.set_a(5)->set_b(7)->disp();
// }
// class ab
// {
//   static int a;
//   public:
//   ab (int z=0){
//     a=z;
//   }
//   void f1(){
//     f2();
//     this->f2();
//     ab::f2();
//   }
//   static void f3(){
//     ab:: f2();
//     f2();
//     ab obj;
//     obj.f2();
//   }
//   static void f2(){
//     cout<<a+1<<endl;
//   }
// };
// int ab::a;

// int main(){
//   ab ob(5);
//   ob.f1();
//   ob.f2();
//   ob.f3();
// }


// template<class T>
// T square(T x){
//   return x*x;
// }

// template<>
// char square<char>(char c){
//   if(c>='a'&& c<='z')return c-32;
//   else return c;

// }

// int main(){
//   cout<<square<double>(12)<<endl;
//   cout<<square<char>('A')<<endl;
//   cout<<square<char>('a')<<endl;

// }

