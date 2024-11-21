#include<iostream>
using namespace std;

// int main(){
//   int x[3]={0,-1,2};
//   for(int i=0;i<3;i++){
//     int ex=x[i];
//     try{
//       if(ex>0)throw(ex);
//       else if(ex==0) throw "honeypie";
//       else throw 'e';
//     }
//     catch(int x){
//       cout<<x<<endl;
//     }
//     catch(char c){
//       cout<<c<<endl;
//     }
//     catch(...){

//     }
// }
// }

class num{
  int m;
  public:
  num(int k):m(k){
    cout<<"const";
  }
  void show(){
    cout<<"m="<<m<<endl;
  }
  void operator--();
};
void num::operator--(){
  if(m==0) throw *this;
  else --m;

}

int main(){
    try{
      num ob(4);
      cout<<"before desc";
      ob.show();
      while(1){
        cout<<"After desc";
        --ob;
        ob.show();
      }
  }
  catch(num t){
    cout<<"reached 0"<<endl;
  }
}

// class sqrtt{
//   public:
//   sqrtt(int s=0){
//     cout<<"Param cost";
//   }
// };
// template<class T>
// class square{
//   T s;
//   public:
//   square(T x){
//     sizeof(x)<=1?throw sqrtt(-1):s=x*x;
//   }
//   void show(){
//     cout<<"Square"<<s;
//   }
// };



// int main(){
//   try{
//     square<int>ob1(4);
//     ob1.show();
//     square<char>ob2('h');
//     ob2.show();
//   }
//   catch(sqrtt &t){
//     cout<<"Exception"<<endl;
//   }
// }
// class ABC {
// protected:
//     string name;
//     int age;

// };

// class abc : public ABC {
// private:
//     float height;
//     float weight;

// public:
   
//     void input() {
    
//             cout << "Enter name: ";
//             cin >> name;

//             cout << "Enter age: ";
//             cin >> age;

            
//             if (age <= 0) {
//                 throw abc();
//             }

//             cout << "Enter height (in cm): ";
//             cin >> height;

//             cout << "Enter weight (in kg): ";
//             cin >> weight;
//     }
// void show() const {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Height: " << height << " cm" << endl;
//         cout << "Weight: " << weight << " kg" << endl;
//     }
// };

// int main()
// {
//   try {
//     abc ob;
//     try{
//       ob.input();
//       ob.show();
//     }
//     catch (abc z){
//       cout<<"wrong age"<<endl;
//     }
//   }
//   catch(...){
//     cout<<"nothing"<<endl;
//   }
// }
