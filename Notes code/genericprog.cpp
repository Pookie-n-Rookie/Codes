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


// template<class U, class T>
// void sum(U  x, T y)
// {
//     cout<<x+y; 
// }

// int main()
// {
//     sum<double,int>(2.5,3); 
//     sum(5.6,3);
    
// }
// #include<iostream>
// using namespace std;

// template<class T=int, int n=5>
// void mult(T x)
// {
// 	for(int i=1;i<=n;i++)
// 	{
// 		T res=x*n; 
// 		cout<<res<<"  "; 
// 	}
// 	cout<<"\n"; 
// }

// int main()
// {
// 	int x=2; 
	
// 	mult<>(x); 
// 	mult<double>(4.5); 
// 	mult<float,5>(1.5f);
	

// template<class T, int n=10>
// void loop(T x)
// {
//     for(int i=1;i<=n;i++)
//      cout<<x<<endl; 
// }

// int main()
// {
//     //loop(5);   //OK
    
//     //loop<int>(6); //OK
    
//     //loop<7>(6.5f); //wrong
    
//     loop<double,3>(5.55); //OK
// }


// template<class U=int, class T>
// void sum(T x, U y)
// {
//     cout<<x+y; 
// }

// int main()
// {
//     sum<float,int>(2,3.4f); 
    
// }


// template<class U=int, class T>
// void sum(U  x, T y)
// {
//     cout<<x+y; 
// }

// int main()
// {
//     sum<int,double>(2,3.5); 
    
// }
// template<class U=int, class T, class V>
// V sum(U  x, T y)
// {
//     return x+y; 
// }

// int main()
// {
//     cout<<sum<double, double,double>(2.5,3); 
    
// }
// template<class T> 
// class XYZ
// {
// 	static T s1; 
	
// 	public:
// 		void put(); 
// 		static T s2; 
	
// };

// template<class T>
// T XYZ<T>::s1=1; 

// template<class T>
// T XYZ<T>::s2=2; 

// template<class T>
// void XYZ<T>::put()
// {
// 	cout<<++s1<<"   ";
// 	cout<<++s2<<endl; 
// }

// int main()
// {
// 	XYZ<int> ob1;
// 	ob1.put(); 

//     XYZ<double> ob3; 
// 	ob3.put();
	
// 	XYZ<int> ob2;
// 	ob2.put();
	
// 	XYZ<double> ob4; 
// 	ob3.put();
	
		
// }

// template<class T, class U> 
// class A
// {
  
//   T x;
//   U y;
  
//   public:
//   A()
//   {
//   	cout<<"def constructor called: "; 
//   }
//   A(T t, U u)
//   {
//   	x=t; 
//   	y=u; 
//   	cout<<"param constructor called: "; 
//   }
//   void disp()
//   {
//   	cout<<"x="<<x<<"y="<<y<<endl; 
//   }
// };

// int main()
// {
// 	A<int, char> ob1; 
// 	ob1.disp();
	
// 	A<int, float> ob2(4,6.7);
// 	ob2.disp(); 
// }

// template<class T, class U=char> 
// class A
// {
  
//   T x;
//   U y;
  
//   public:
//   A()
//   {
//   	cout<<"def constructor called: "; 
//   }
//   A(T t, U u)
//   {
//   	x=t; 
//   	y=u; 
//   	cout<<"param constructor called: "; 
//   }
//   void disp()
//   {
//   	cout<<"x="<<x<<"y="<<y<<endl; 
//   }
//   ~A(){
//     cout<<"Dest"<<endl;
//   }
// };

// int main()
// {
// 	A<int, char> ob1; 
// 	ob1.disp();
	
// 	A<int, float> ob2(4,6.7);
// 	ob2.disp(); 
	
// 	A<char> ob3('A','B');
// 	ob3.disp();
	
// 	A<int> ob4(12,66.4); 
// 	ob4.disp();
// }

// template<int N=6, class T>
// class ABC
// {
//   	T x; 
  	
//   	public:
//   		ABC(T a)
//   		{
//   			x=a; 
// 		}
// 		void disp()
// 		{
// 			for(int i=1;i<=N;i++)
// 			cout<<x<<"  "; 
			
// 			cout<<endl; 
// 		}
// };

// int main()
// {
// 	ABC<> ob1('S'); 
// 	ob1.disp();
	
// 	ABC<> ob2(65);
// 	ob2.disp();
	
// 	ABC<int> ob3(97.6);
// 	ob3.disp();
	
// }
// template<class T> 
// class Myclass
// {
//   T element; 
  
//   public:
//   Myclass(T arg)
//   {
//   	element=arg; 
//   }	
  
//   T increase()
//   {
//   	return (++element); 
//   }
// }; 

// int main()
// {
// 	Myclass<int> mi(5); 
// 	Myclass<float> mf(5.5);
// 	Myclass<char> mc('A');  
	
// 	cout<<mi.increase()<<" "; 
// 	cout<<mf.increase()<<" "; 
// 	cout<<mc.increase();
// }
// template<class T>
// class Sample
// {
//     T elem;
//     public:
//     Sample(T e)
//     {
//         elem=e;
//     }
//     T incr();
//     T convert();
// };

// template<class T>
// T Sample<T>:: incr()
// {
//     elem++;
//     return elem;
// }

// template <>
// char Sample<char>::convert() //Instead of writing entire class template, just define the convert function for char                                                //separately outside the class. 
// {  
//     elem=elem-32;
//     return elem;
// }
// int main() {
   
//     Sample<int> s1(2);
//     cout<<s1.incr()<<endl;
//     Sample<double> s2(2.5);
//     cout<<s2.incr()<<endl;
//     Sample<char> s3('a');
//     cout<<s3.incr()<<endl;
//     cout<<s3.convert();
// }

class a{
    int x;
    public:
    a(int f):x(f){}
    void disp(){
        cout<<"a="<<x;
    }

    void operator delete (void *ptr){
        if(ptr)free(ptr);
    }

    void *operator new(size_t sz){
        void *temp=malloc(sz);
        for(int i=0;i<sz;i++)((char*)temp)[i]=0;
        return temp;
    }

};

int main(){
    a *ptr=new a(5);
    ptr->disp();
    delete ptr;
}