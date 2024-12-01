#include <iostream>
#include <fstream>
#include <cstring> // For string manipulation

using namespace std;

class Student {
    int roll;
    char name[50];
    float marks;

    void getData() {
        cout << "Enter roll: ";
        cin >> roll;
        cin.ignore(); // Clear the input buffer

        cout << "Enter name: ";
        cin.getline(name, 50); // Use getline for multi-word input

        cout << "Enter marks: ";
        cin >> marks;
    }

    void putData() const {
        cout << roll << "\t" << name << "\t" << marks << endl;
    }

public:
    // Add details to the file
    void add_det() {
        fstream f;
        f.open("texttt.txt", ios::app );
        if (!f) {
            cerr << "Error opening file for writing!" << endl;
            return;
        }

        getData(); // Populate student details
        f.write((char*)this, sizeof(*this));
        f.close();
    }

    // Display all details from the file
    void disp() {
        fstream f;
        f.open("texttt.txt", ios::in );
        if (!f) {
            cerr << "Error opening file for reading!" << endl;
            return;
        }

        cout << "\nRoll\tName\tMarks" << endl;
        while (f.read((char*)this, sizeof(*this))) {
            putData();
        }

        f.close();
    }
};

int main() {
    Student st;
    char ch;

    do {
        st.add_det();
        cout << "Do you want to add another record? (Y/N): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    cout << "\nDisplaying all student records:\n";
    st.disp();

    return 0;
}
