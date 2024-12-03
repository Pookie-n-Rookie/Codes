
#include<iostream>
#include <string>
using namespace std;
//  class ab{
//   int a;
//   protected:
//   int c;
//   public:
//   ab(int x):a(x){
//     cout<<"a const"<<endl;
//   }
//   void disp(){
//     cout<<"a="<<a;
//   }
//    ~ab(){
//     cout<<"a destr"<<endl;
//   }
//  };

//  class cd:public ab{
//   int x;
//   public:
//   cd(int f):ab(f){
//     cout<<"cd const"<<endl;
//     x=f;
//     c=f+2;
//   }
//   void disp(){
//     ab::disp();
//     cout<<"x="<<x;
//     cout<<"c="<<c;
//   }
//  ~cd(){
//     cout<<"cd destr"<<endl;
//   }

//  };

//  int main(){
//   cd obj(5);
//   obj.disp();
//  }
 
// class ab{
//   public:
//   ab(int x){
//     cout<<"ab const"<<endl;
//   }
//   void show(){
//     cout<<"y1"<<endl;
//   }
//   ~ab(){
//     cout<<" ab destr"<<endl;
//   }
// };
// class ac{
//   public:
//     ac(int x){
//     cout<<"ac const"<<endl;
//   }
//   void show(){
//     cout<<"y2"<<endl;
//   }
//  ~ac(){
//     cout<<" ac destr"<<endl;
//   }
// };

// class cd:public ab,public ac{
//   public:
//   cd():ab(2),ac(3){
//     cout<<"c const"<<endl;

//   }
//   void show(){
//     // ab::show();
//     // ac::show();
//     cout<<"you 22222"<<endl;
//   }
//   ~cd(){
//     cout<<"cd destr"<<endl;
//   }
// };
// int main(){
//   // ab *ptr= new cd();

//   // ptr->show();
//   // delete(ptr);
//   cd ob;
//   ob.show();
//   // obj2.show();
// }

// template<class T,class U,class V>
// void sum(T x,U y,V z){
//   cout<<x+y+z<<endl;
// }

// template<class T,class U>
// void sum(T x,U y){
//   cout<<x+y<<endl;
// }


// int main(){
//   sum(2,3,4.5);
//   sum(2.57,4.5,3);
//   sum(1,2,3);
//   sum(1.5,2.55);
// }

// class A{
//     public:
//     int a;
//     void fun(){
//         cout << "A ";
//     }
// };

// class B{
//     public:
//     int a;
//     void fun(){
//         cout << "B ";
//     }
// };

// class C : public A, public B{
//     public:
// };

// int main() {
//     C obj;
//     obj.fun();
//     return 0;
// }

// template<class t>
// t max(t arr[],int n){
//   t maxi=arr[0];
//   for(int i=0;i<n;i++){
//     if(arr[i]>maxi)maxi=arr[i];
//   }
//   return maxi;
// }

// int main(){
//   char ch[]={'a','z','f','d'};
//   int fc[]={2,5,9,1};
//   double fx[]={2,9.9,10.21,20.22};
//   cout<<max(ch,4)<<endl;
//   cout<<max(fc,4)<<endl;
//   cout<<max(fx,4)<<endl;

// }

template<class t>
t cube( t x){
  t z=x*x*x;
  return z;
}

template<>
char cube<char>(char s){
  return s;
}

int main(){

  cout<<cube('S')<<endl;

}

// class Base
// {
// int a;
// public:
// Base(int f){
//   cout<<"base"<<endl;
//   a=f;
// };
// void show(){
//   cout<<"a="<<a<<endl;
// }
// };
// class Child: public Base
// {
// int b;
// protected:
// int c;
// public:
// Child(int z):Base(z){
//   cout<<"C const"<<endl;
//   b=z+1;
//   c=z+2;
// }
// void show(){
//   cout<<"b="<<b<<endl;
//   cout<<"c="<<c<<endl;
// }
// };
// class Grandchild: public Child
// {
// int d;
// public:
// Grandchild(int f,int h):Child(f){
//   cout<<"gc contr"<<endl;
//   d=f+h;
// }

// void show(){
// cout<<"d="<<d<<endl;
// }
// };
// int main(){
//   Base *ptr1=new Grandchild(1,2);
//   Child *ptr2=new Grandchild(2,3);
//   ptr1->show();
//   ptr2->show();
// }

// template<class t>
// void fun(t arr[],int n){
//   for(int i=0;i<n;i++){
//     int c=0;
//     for(int j=0;j<n;j++){
//       if(i==j)continue;
//       if(arr[i]==arr[j]){
//         c++;
//         break;
//       }
//     }
//     if (c==0)
//     cout<<arr[i]<<" ";
//   }
// }
// int main(){
//   int arr[]={1,2,3,4,2,1,3,5,6,5,7,6,7,8};
//   fun(arr,14);
// }


// class emp{
//   int basic_sal;
//   public:
//   emp(int sal){
//     basic_sal=sal;
//   }
//   int get_sal(){
//     return basic_sal;
//   }
//   virtual int cal_allowance() = 0;
// };
// class manager:public emp{
//   public:
//   manager(int sal):emp(sal){}
//   int cal_allowance(){
//     int allowance=0.4*(emp::get_sal());
//     return allowance;
//   }
// };

// class clerk:public emp{
//   public:
//   clerk(int sal):emp(sal){}
//   int cal_allowance(){
//     int allowance=0.3*(emp::get_sal());
//     return allowance;
//   }
// };


// int main(){
//   emp*ptr[10]; //exam er q e 20 and 5 ache ami apatot 5,5 niche aka lyadh khor
  
//   for(int i=0;i<5;i++){
//     int sal;
//     cout<<"enter  basic sal of manager :";
//     cin>>sal;
//     ptr[i]=new manager(sal);
//     cout<<"total sal is :"<<sal+ptr[i]->cal_allowance()<<endl;
//   }
//    for(int i=5;i<10;i++){
//     int sal;
//     cout<<"enter  basic sal of clerk :";
//     cin>>sal;
//     ptr[i]=new clerk(sal);
//     cout<<"total sal is :"<<sal+ptr[i]->cal_allowance()<<endl;
//   }
   
// }
// template <class T=char, int N=5>
// void print(T a)
// {
// for(int i=0;i<N;i++)
// cout<<a<<" ";
// cout<<endl;
// }

// int main(){
// // print<4>('A');
// print<double> (92.56);
// print<int>(93.4);
// print<>(94.56F);
// print<int,4> (95);
// print<double, 5> (96.05);
// print<char,4>(97);
// print<>(98);
// }
// }

// #include<iostream>
// using namespace std;
// template <class T>
// void square(T a){
//     cout<< a*a;
// }
// template<>
// void square<char>(char a){
//     if('A' <= a && a <= 'Z'){
//         cout<<(int)a;
//     }
//     else{
//         cout<< (char)(a - 32);
//     }
// }

// int main(){
//     char a = 'Z';
//      square(a);
// }

//diamond prblm

// class p{
//     public:
//     p(){
//         cout<<"p const"<<endl;
//     }
//     void show(){
//         cout<<"calling p"<<endl;
//     }
//     ~p(){
//         cout<<"p destr"<<endl;
//     }
// };
// class c1:virtual public p{
//     public:
//     c1(){
//         cout<<"c1 const"<<endl;
//     }
//     ~c1(){
//         cout<<"c1 destr"<<endl;
//     }
// };
// class c2:virtual public p{
//     public:
//     c2(){
//         cout<<"c2 const"<<endl;
//     }
//     ~c2(){
//         cout<<"c2 destr"<<endl;
//     }
// };

// class gc:public c1,public c2{
//     public:
//     gc()
//     {cout<<"gc const"<<endl;
//     }
//    ~gc()
//     {cout<<"gc destr"<<endl;
//     }


// };

// int main(){
//     gc ob;
//     ob.show();
// }

