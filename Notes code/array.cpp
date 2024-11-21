#include <iostream>
using namespace std;

class AB {
    int size;
    int *a;
public:
    AB(int x = 0) : size(x) {
      a= new int[x];
    }
    void set(){
      for(int i=0;i<size;i++)a[i]=i;
    }
    void disp(){
      for(int i=0;i<size;i++)cout<<a[i]<<" ";
    }
    int &operator[](int k){
      if(k>=size)return a[0];
      else return a[k];
    }
};

int main(){
  AB ob(6);
  ob.set();
  ob.disp();
  ob[2]=20;
  int x=ob[2];
  cout<<"x="<<x<<endl;
  ob.disp();
}