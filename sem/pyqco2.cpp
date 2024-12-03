#include<iostream>
using namespace std;


// class sample {
//   int a;
//   public:
//   sample (int z=0):a(z){
//     cout<<"const"<<endl;
//   }
// };
// int main() {
// sample s1(10),s2;
// cout<<"1 ";
// sample s3=s1;
// cout<<"2 ";
// s2=s3;
// cout<<"3 ";
// sample s4(s2);
// cout<<"4 ";
// sample s5=sample(20);
// cout<<"5";
// }
// class Time {
//   int hr, min, sec;

// public:
//   Time(int x = 0, int y = 0, int z = 0) : hr(x), min(y), sec(z) {}

//   friend Time addi(Time &, Time &);

//   void display() const {
//     cout << hr << " hr " << min << " min " << sec << " sec" << endl;
//   }
// };

// Time addi(Time &ob1, Time &ob2) {
//   int s = ob1.sec + ob2.sec;
//   int m = ob1.min + ob2.min + s / 60;
//   int h = ob1.hr + ob2.hr + m / 60;
//   return Time(h % 24, m % 60, s % 60);
// }

// int main() {
//   Time t1(3, 40, 30);
//   Time t2(2, 30, 40);

//   Time result = addi(t1, t2);
//   result.display();
//   return 0;
// }

// double sum (int n,double s){
//   return (n+s);
// }

// int sum (int n, double s){
//   return (n+s);
// }
// class xy;
//  class ab{
//   int a;
//   public:
//   ab(int x=0):a(x){}
//   friend void swappy(ab &,xy &);
//     void show(){
//     cout<<a<<endl;
//   }
//  };
//  class xy{
//   int b;
//   public:
//   xy(int y=0):b(y){}
//   friend void swappy(ab &,xy &);
//   void show(){
//     cout<<b<<endl;
//   }
//  };
 

//  void swappy(ab &ob1,xy &ob2){
//   int t;
//   t=ob1.a;
//   ob1.a=ob2.b;
//   ob2.b=t;
//  }

//  int main(){
//   ab ob1(10);
//   xy ob2(20);
//   ob1.show();
//   ob2.show();
//   swappy(ob1,ob2);
//    ob1.show();
//   ob2.show(); 
//  }

// class smp{
//   static int s;
//   const int c;
//   int x;
//   public:
//   smp(int y=0):c(y++){
//     s=x=y;
//   }
// void incre(){
//     s++;
//     x++;
//   }
// void show(){
//     cout<<s<<" "<<x<<" "<<c<<endl;
//   }
// };
// int smp::s;

// int main(){
//   smp ob1(5),ob2(6);
//   ob1.show();
//   ob2.show();
//   ob1.incre();
//   ob1.show();

//   smp ob[3];
//   for(int i=0;i<3;i++){
//     ob[i].incre();
//     ob[i].show();
//   }
// }
// #include <iostream>
// using namespace std;

// namespace ns1 {
//     int a, b;

//     void set(int x, int y) {
//         a = x + y;
//         b = y - x;
//     }

//     void show() {
//         cout << a << " " << b << endl;
//     }

//     namespace ns2 {
//         int a = 5, b = 2;

//         void set(int x, int y) {
//             a = y - x;
//             b = x + y;
//         }

//         void show() {
//             cout << a << " " << b << endl;
//         }
//     }
// }

// int main() {
//     using namespace ns1;
//     a = 10;
//     b = 20;

//     ns2::show();        // Output: 5 2
//     ns2::set(7, 10);    // ns2::a = 3, ns2::b = 17
//     show();             // Output: 10 20
//     set(8, 4);          // ns1::a = 12, ns1::b = -4
//     ns2::show();        // Output: 3 17
//     ns2::set(6, 8);     // ns2::a = 2, ns2::b = 14
//     show();             // Output: 12 -4
//     set(2, 5);          // ns1::a = 7, ns1::b = 3
//     ns2::show();        // Output: 2 14

//     return 0;
// }


int &max(int &a,int &b){
    return (a>b)?a:b;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}

int main()
{
int a=4, b=6;
max(a,b)=100;
cout<<"a="<<a<<"b="<<b<<endl;
swap(&a, &b);
max(a,b)=100;
cout<<"a="<<a<<"b="<<b<<endl;
}