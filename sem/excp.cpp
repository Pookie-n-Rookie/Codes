#include<iostream>
using namespace std;

// void intcheck(int x){
//   try{
//     if(x>2)throw 2;
//     else throw "juice pilado gg ka";
//   }
//   catch (int x){
//     throw "2 se zyada";
//   }
//   catch (const char *ex){
//     throw ;
//   }

// }

// int main(){
//   try{
//       intcheck(1);
//   }
//   catch(const char *ex){
//     cout<<ex<<endl;

// }
// }

// class num{
//   int m;
//   public:
//   num(int k){
//     cout<<"num const"<<endl;
//     m=k;
// }
//   void operator--();
//   void show(){
//     cout<<"m="<<m<<endl;
//   }
// };


// void num::operator--(){
//   if(m==0)throw *this;
//   else --m;
// }

// int main(){
//   try{
//     num ob(5);
//     ob.show();
  
//   while(1){
//     --ob;
//     ob.show();
//   }
// }
//   catch(...){
//     cout<<"zero reached";
//   }
// }

// class cub3{
//     public:
//     cub3(){
//       cout<<"bhot bada mamla hai"<<endl;
//     }

// };


// template<class t=char,int n=3>
// class cube{
//   t s;
//   public:
//   cube(t x){
//     (n>=3)?s=x*x*x:throw cub3();
//   }
//   void show(){
//     cout<<"cube is "<<s<<endl;
//   }
// };

// int main(){
//   try{
//     cube obj(2.5);
//     obj.show();
//     cube<>obj2('A');
//     obj2.show();
//     cube<char,2>obj3('5');
//     obj3.show();
//   }
//   catch(...){
//     cout<<"ye sab karne ke liye mummy papa ne bheja hai"<<endl;
//   }
// }


// #include <iostream>
// using namespace std;

// class abc {
// protected:
//     int ass;
// public:
//     abc(int wipe = 0) {
//         ass = wipe;
//     }
//      void show() {  
        
//     }
// };

// class cd : public abc {
//     int wtf;
// public:
//     cd(int peedublu = 0) {
//         ass = peedublu + 1;  
//         wtf = peedublu;      
//     }
//     void show() {  
//         if (ass + wtf > 5)   
//             throw abc();     
//         else
//             throw cd();      
//     }
// };

// int main() {
//     abc* ptr = new cd(5);  // Pointer of type abc pointing to a cd object
//     abc ob(2);  // Create an abc object
//     cd ob1(2);  // Create a cd object

//     try {
//         // Calling show() on ptr (which points to a cd object)
//         ptr->show();        
//     }
//     catch (abc &ob) {
//         cout << "caught abc" << endl;  // This block catches the abc exception
//     }
//     catch (cd &ob) {
//         cout << "caught cd" << endl;
//     }
//     catch (...) {
//         cout << "kuch mila hai" << endl;
//     }

//     try {
//         // Calling show() on ob (an abc object)
//         ob.show();
//     }
//     catch (abc &ob) {
//         cout << "caught abc in ob" << endl;  // Caught exception from abc object
//     }
//     catch (cd &ob) {
//         cout << "caught cd in ob" << endl;
//     }
//     catch (...) {
//         cout << "kuch mila hai in ob" << endl;
//     }

//     try {
//         // Calling show() on ob1 (a cd object)
//         ob1.show();
//     }
//     catch (abc &ob) {
//         cout << "caught abc in ob1" << endl;
//     }
//     catch (cd &ob) {
//         cout << "caught cd in ob1" << endl;  // This block will catch cd exception
//     }
//     catch (...) {
//         cout << "kuch mila hai in ob1" << endl;
//     }

//     return 0;
// }


// class base{};
// class child:public base{};

// int main(){
//   base ob1;
//   child ob2;
//   try{
//     throw ob2;
//   }
//   catch( base &ob){
//     cout<<"base caught"<<endl;
//   }
//   catch( child &ob){
//     cout<<"child caught"<<endl;
//   }
//   try{
//     throw ob1;
//   }
//   catch( base &ob){
//     cout<<"base caught"<<endl;
//   }
//   catch( child &ob){
//     cout<<"child caught"<<endl;
//   }

class overflow{};
class underflow{};

class stack{
  int top;
  int size;
  int *arr;
  public:
  stack(int x){
    size=x;
    arr=new int[x];
    top=-1;
  }
  void push(int);
  int pop();
};
void stack::push(int x){
  if(top==size-1)throw overflow();
  arr[++top]=x;
}
int stack::pop(){
  if(top==-1)throw underflow();
  return arr[top--];
}

int main() {
    stack s(5);  // Create a stack of size 5

    try {
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);
        s.push(6);


         
    } catch (overflow& of) {
      cout<<"overflow"<<endl;
    }


    try {
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;
        cout << s.pop() << endl;  // This will throw an underflow exception
    } catch (underflow& uf) {
      cout<<"underflow"<<endl;

    }

    

    return 0;
}

