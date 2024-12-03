#include <iostream>
using namespace std;

namespace ns1{
  int a;
  namespace ns2{
    int a;
    void disp();
  }
  void disp();
}
 void ns1::disp(){
  cout<<"NS1 "<<"a ="<<a<<endl;

 }

  void ns1::ns2::disp(){
  cout<<"NS2 "<<"a ="<<a<<endl;

 }
int main(){
  ns1::a=5;
  ns1::disp();
  using namespace ns1;
  a=10;
  ns2::a=12;
  using ns1::ns2::disp;
  disp();
}


// // Declare the namespace NS
// namespace NS {
//     int a; // Declare int a

//     void display(); // Function to display the value of 'a'

//     class Test {
//         int a; // Member variable a
//     public:
//         Test(int); // Constructor declaration to initialize member a
//         void display(); // Member function declaration to display member a
//     };
// }

// // Define the 'a' variable outside the namespace
//  // Initialize the value of 'a' to 10

// // Define the display() function outside the namespace
// void NS::display() {
//     cout << "Value of a (namespace NS): " << NS::a << endl;
// }

// // Define the constructor outside the class
// NS::Test::Test(int val) : a(val) {}

// // Define the member function display() of class Test outside the class
// void NS::Test::display() {
//     cout << "Value of a (class member): " << a << endl;
// }

// int main() {
//     NS::a=10;
//     // Access and use the display() function of namespace NS
//     NS::display();  // Prints: Value of a (namespace NS): 10

//     // Create an object of class Test and initialize it with 20
//     NS::Test obj(20);
//     obj.display();  // Prints: Value of a (class member): 20

//     return 0;
// }


// class smp{
//     int a;
//     public :
//     smp(int z=0){
//         a=z;
//     }
//     operator int(){
//         return a;
//     }
//     void operator *=(smp &obj){
//         a*=obj.a;
//     }
// };

// int main(){
//     smp s1(5),s2,s3(10);
//     s2=s1+s3;
//     s3*=s2;
//     cout<<s2<<endl;
//     cout<<s3<<endl;
//     return 0;
// }
