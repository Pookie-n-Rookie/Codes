#include<iostream>
using namespace std;



class ab{
  int a;
  public:
  void operator delete(void *ptr){
    if(ptr)free(ptr);
  }
};