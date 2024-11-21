class sam {
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