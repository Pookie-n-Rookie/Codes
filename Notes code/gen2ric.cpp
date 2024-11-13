#include <iostream>
using namespace std;

template<class T>
class Sample
{
    T elem;
    public:
    Sample(T e)
    {
        elem=e;
    }
    T incr();
    T convert();
};

template<class T>
T Sample<T>:: incr()
{
    elem++;
    return elem;
}

template <>
char Sample<char>::convert() //Instead of writing entire class template, just define the convert function for char                                                //separately outside the class. 
{  
    elem=elem-32;
    return elem;
}
int main() {
   
    Sample<int> s1(2);
    cout<<s1.incr()<<endl;
    Sample<double> s2(2.5);
    cout<<s2.incr()<<endl;
    Sample<char> s3('a');
    cout<<s3.incr()<<endl;
    cout<<s3.convert();
}
