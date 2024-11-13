#include<iostream>
using namespace std;

// template<class T>
// T square (T x)
// {
// 	T result; 
// 	result=x*x; 
// 	return result; 
// }

// int main()
// {
// 	int i=2; 
// 	int ii=square(i);    //implicit template expression 
	
// 	float f=2.5f; 
// 	float ff=square(f);  //implicit template expression 
	
// 	double d=3.5; 
// 	double dd=square(d); 
	
// 	cout<<ii<<endl<<ff<<endl<<dd; 
// }



// template<class T>
// T sum(T x, T y)
// {
// 	return (x+y); 
// }

// int main()
// {
// 	cout<<sum(2,4)<<endl; 
// 	cout<<sum(2.4,5.66)<<endl; 
// 	cout<<sum(5.6f,7.8f); 


template<class U=int, class T>
void sum(U  x, T y)
{
    cout<<x+y; 
}

int main()
{
    sum<double>(2.5,3); 
    
}






