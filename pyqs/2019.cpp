#include <iostream>
using namespace std;

// class ab {
//     int a;
// public:
//     ab(int x =0) : a(x) {}

//     ab operator+(ab &obj) {
//         ab t;
//         t.a = a + obj.a;
//         return t;
//     }

//     ab operator++() {
//       return ab(++a);
//     }

//     ab operator+(int x) {
//         return ab(a+x);
//     }

//     operator int() {
//         return a;
//     }

//     void show() {
//         cout << a << endl;
//     }
// };

// int main(){
//   ab s1(5),s2,s3(10);
//   s2.show();//0
//   s2=s1+(++s3);
//   s2.show();//16
//   s2=s3+3;
//   s2.show();//14
//   int t=s2;
//   cout<<"t="<<t<<endl;
//   s1.show();
//   s2.show();
//   s3.show();
// }


// #include <iostream>
// using namespace std;

// class sam {
//     int s;
// public:
//     void operator=(int x) {
//         s = x;
//     }
//     void display() {
//         cout << s << endl;
//     }
//     sam* operator->() {
//         return this;
//     }
// };

// class test {
//     int t;
// public:
//     test(int x = 0, int y = 0) : t(x + y) {}

   
//     test operator()(int a, int b, int c) {
//         return test(a + b, c); 
//     }



//     operator int()  {
//         return t;
//     }
// };

// int main() {
//     sam s1;
//     test t1 = 15; 
//     s1 = t1;     
//     s1->display(); 

//     test t2(20, 25), t3;
//     t3 = t2(15, 30, 45); 
//     cout << t3 << endl; 

//     return 0;
// }

// #include <iostream>---->wrong
// using namespace std;

// class Array {
//     char *arr;
//     char ch;

// public:
//     Array(int x) {
//         arr = new char[x];
//         for (int i = 0; i < x; i++) {
//             arr[i] = 'a';
//         }
//     }

//     void* operator new(size_t size) {
//         void* ptr = ::operator new(size);
//         static_cast<Array*>(ptr)->ch = '$';
//         return ptr;
//     }

//     char& operator[](int index) {
//         return arr[index];
//     }

//     void display() const {
//         for (int i = 0; arr[i] != '\0'; i++) {
//             cout << arr[i] << ' ';
//         }
//         cout << endl;
//     }

//     void show() const {
//         cout << "Character ch: " << ch << endl;
//     }

//     ~Array() {
//         delete[] arr;
//     }
// };

// int main() {
//     Array a(15);
//     a[4] = 'c';
//     a.display();
//     char *ptr = new('$') char;
//     a.show();

//     delete ptr;
//     return 0;
// }
// namespace ns1
// {
//   int a,b;
//   void disp(){
//     cout<<a+b;
//   }
//   namespace ns2{
//     int a,b;
//     void disp(){
//       cout<<a+b;
//     }
//   }
// }

// int main(){
//   ns1::a=10;
//   ns1::b=20;
//   ns1::disp();
//  ns1::ns2::a=30;
//   ns1::ns2::b=40;
//   ns1::disp();
//   using namespace ns1::ns2;
//   a=50,b=60;
//   disp();
// }

// template<class T,class U,class V>
// void sum(T x,U y,V z){
//   cout<<(x+y+z)<<endl;
// }

// int main(){
//   sum(2,3,4.5);
  
// }
// #include <iostream>
// using namespace std;

// namespace MathOperations {
//     int add(int a, int b) {
//         return a + b;
//     }
// }

// namespace OtherOperations {
//     int add(int a, int b) {
//         return a - b;  
//     }
// }



// int main() {
//     using namespace OtherOperations;    
//     using MathOperations::add;         
     
//     cout << add(5, 3) <<endl;  
//     return 0;
// }

 



// Overload for two parameters
// template <class T1, class T2>
// void sum(T1 a, T2 b) {
//     cout << "Sum: " << (a + b) << endl;
// }

// // Overload for three parameters
// template <class T1, class T2, class T3>
// void sum(T1 a, T2 b, T3 c) {
//     cout << "Sum: " << (a + b + c) << endl;
// }

// // Overload for four parameters
// template <class T1, class T2, class T3, class T4>
// void sum(T1 a, T2 b, T3 c, T4 d) {
//     cout << "Sum: " << (a + b + c + d) << endl;
// }

// int main() {
//     sum(2, 3, 4.5);     // Output: Sum: 9.5
//     sum(2.5, 4.5, 3);   // Output: Sum: 10
//     sum(1, 2, 3);       // Output: Sum: 6
//     sum(1.5, 2.5);      // Output: Sum: 4

//     return 0;
// }


