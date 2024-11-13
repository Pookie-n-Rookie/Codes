#include <iostream>
using namespace std;

class AB {
    int a;
public:
    AB(int x = 0) : a(x) {}
    void disp() {
        cout << "val is " << a << endl;
    }
    void operator delete(void *ptr){
      if(ptr)free(ptr);
    }
    void *operator new(size_t sz){
      // void *temp=calloc(2,sz);
          void* temp = malloc(sz);  // Allocate memory without zero-initialization
   

        // Manually zero-initialize the allocated memory
        for (size_t i = 0; i < sz; i++) {
            ((char*)temp)[i] = 0;
        }
      return temp;
    }
};

int main(){
  AB *ptr=new AB(5);
  ptr->disp();
  delete ptr;
}