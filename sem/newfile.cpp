#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// bool palindrome(string s){
//   int size=s.length();
//   for(int i=0;i<=size/2;i++){
//     if(s[i]!=s[size-i-1])return false;
//   }
//   return true;
// }
// int main() {
//     fstream  f1,f3;
   

//     f1.open("text.txt", ios::in);
//     string c;
    
//     f3.open("text3.txt", ios::app);
//     while(f1>>c){
//       if(c!=" "&&palindrome(c)){
//         f3<<c<<endl;
//       }
    
//     }
//     f1.close();
//     f3.close();
//     return 0;
// }

bool atmosvowel(string s){
  int size=s.length();
  int c=0;
  for(int i=0;i<size;i++){
    if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u')c++;
    if(c>1)return false;
  }
  return true;
}
int main() {
    fstream  f1,f3;
    int ctr=0;
   

    f1.open("text.txt", ios::in);
    string c;
    
    f3.open("text4.txt", ios::app);
    while(f1>>c){
      if(c!=" "&&atmosvowel(c)){
        f3<<c<<endl;
        ctr++;
      }
    
    }
    f1.close();
    f3.close();
    return 0;
    cout<<ctr<<endl;
}
