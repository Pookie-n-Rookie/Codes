#include <iostream>
using namespace std;

class AB {
    int a;
public:
    AB(int x = 0) : a(x) {}

    // Arithmetic
    AB operator/(AB &obj) {
        AB t;
        t.a = a / (obj.a);
        return t;
    }

    // Relational
    bool operator!=(AB &ob) {
        return a != ob.a;
    }

    // Logical
    int operator||(AB &ob) {
        return (a || ob.a);
    }

    // Bitwise
    AB operator<<(AB &ob) {
        AB t;
        t.a = a << ob.a;
        return t;
    }

    // Unary operator
    AB operator--(int) {
        return AB(a--);
    }

    // Arrow operator
    AB *operator->() {
        return this;
    }

    // Function call operator
    AB operator()(int z) {
        this->a = a * z;
        return *this;
    }

    void disp() {
        cout << "val is " << a << endl;
    }
};

int main() {
    AB ob1(5), ob2(25), ob3;

    // Demonstrating the arithmetic operator (/)
    ob3 = ob2 / ob1;
    cout << "After division ob2 / ob1: ";
    ob3.disp();

    // Demonstrating the relational operator (!=)
    if (ob1 != ob2) {
        cout << "ob1 is not equal to ob2" << endl;
    } else {
        cout << "ob1 is equal to ob2" << endl;
    }

    // Demonstrating the logical operator (||)
    if (ob1 || ob2) {
        cout << "Logical OR (ob1 || ob2) is true" << endl;
    } else {
        cout << "Logical OR (ob1 || ob2) is false" << endl;
    }

    // Demonstrating the bitwise operator (<<)
    ob3 = ob2 <<ob1;  // Shift ob1's value left by 1
    cout << "After bitwise shift ob2 << : ";
    ob3.disp();

    // Demonstrating the unary operator (post-decrement)
    cout << "Before post-decrement ob1: ";
    ob1.disp();
    ob3 = ob1--;
    cout << "After post-decrement ob1: ";
    ob1.disp();
    cout << "Value returned by post-decrement: ";
    ob3.disp();

    // Demonstrating the arrow operator (->)
    cout << "Accessing value through arrow operator ob1->disp(): ";
    ob1->disp();

    // Demonstrating the function call operator (())
    ob3 = ob1(3);
    cout << "After function call operator ob1(3): ";
    ob3.disp();

    return 0;
}
