#include <iostream>
using namespace std;

// namespace ns1{
//   int a=7;
//   namespace ns2{
//     int a=8;
//     void disp(){
//     cout<<"NS2"<<endl;
//   }
//   }
//   void disp();
// }
//  void ns1::disp(){
//   cout<<"NS1"<<endl;

//  }
// int main(){
//   cout<<ns1::a;
//   ns1::disp();
//   ns1::ns2::disp();

//   cout<<ns1::ns2::a;
//   using ns1::ns2::disp;
//   disp();
// }


// Declare the namespace NS
namespace NS {
    int a; // Declare int a

    void display(); // Function to display the value of 'a'

    class Test {
        int a; // Member variable a
    public:
        Test(int); // Constructor declaration to initialize member a
        void display(); // Member function declaration to display member a
    };
}

// Define the 'a' variable outside the namespace
 // Initialize the value of 'a' to 10

// Define the display() function outside the namespace
void NS::display() {
    cout << "Value of a (namespace NS): " << NS::a << endl;
}

// Define the constructor outside the class
NS::Test::Test(int val) : a(val) {}

// Define the member function display() of class Test outside the class
void NS::Test::display() {
    cout << "Value of a (class member): " << a << endl;
}

int main() {
    NS::a=10;
    // Access and use the display() function of namespace NS
    NS::display();  // Prints: Value of a (namespace NS): 10

    // Create an object of class Test and initialize it with 20
    NS::Test obj(20);
    obj.display();  // Prints: Value of a (class member): 20

    return 0;
}
