#include <iostream>
using namespace std;

class AB {
    int a, b;
public:
    AB(int x = 0, int y = 0) : a(x), b(y) {}

    // Overload extraction operator
    friend istream& operator>>(istream &is, AB &ob) {
        is >> ob.a >> ob.b;
        return is;
    }

    // Overload insertion operator
    friend ostream& operator<<(ostream &os, const AB &ob) {
        os << "a: " << ob.a << ", b: " << ob.b;
        return os;
    }
};

int main() {
    AB obj;
    cout << "Enter values for a and b: ";
    cin >> obj;  // Input values for a and b
    cout << obj << endl;  // Display values of a and b
    return 0;
}
