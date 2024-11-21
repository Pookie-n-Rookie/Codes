#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string>

using namespace std;

int main(){
  fstream s;
  s.open("text.txt",ios::in);
  string j;
  if(!s)cout<<"failed";
  while(getline(s,j)){
   
    cout<<j<<endl;
     
  }
  s.close();
  
}