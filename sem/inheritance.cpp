#include <iostream>
using namespace std;

class p {
protected:
    int data;  // Protected member

public:
    p() {
        data = 0;  // Initialize data
        cout << "p const" << endl;
    }

    void show() {
        cout << "calling p, data = " << data << endl;
    }

    ~p() {
        cout << "p destr" << endl;
    }
};

class c1 : virtual public p {
public:
    c1() {
        // Accessing the protected member of class p
        cout << "c1 const" << endl;
    }
    ~c1() {
        cout << "c1 destr" << endl;
    }
};

class c2 : virtual public p {
public:
    c2() {
          // Accessing the protected member of class p
        cout << "c2 const" << endl;
    }
    ~c2() {
        cout << "c2 destr" << endl;
    }
};

class gc : public c1, public c2 {
public:
    gc() {
        cout << "gc const" << endl;
    }

    void modifyData() {
        data = 30;  // Accessing the protected member of class p
    }
    void showy(){
      cout<<"from gc -->"<<data<<endl;
    }

    ~gc() {
        cout << "gc destr" << endl;
    }
};

int main() {
    gc ob;
    ob.show(); 
    ob.showy();     // Calls the show() method of class p
    ob.modifyData();
    ob.showy();  // Modify the protected member
    ob.show();        // Show updated data
    return 0;
}
