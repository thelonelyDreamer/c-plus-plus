#include<iostream>
using namespace std;

class Base0{
	public:
		int var0;
		void fun0(){cout<<"Merber of Base0"<<endl;}
};  

class Base1:public Base0{
	public:
		int var1;
};

class Base2:public Base0{
	public:
		int var2;
};

class Derived:public Base1,public Base2{
	public:
		int var;
		void fun(){cout<<"Merber of Derived"<<endl;}
}; 

int main(){
	Derived d;					//定义Derived类对象d 只能访问直接基类 
	d.Base1::fun0();
	d.Base1::var0=2;
	d.Base2::fun0();
	d.Base2::var0=3;
//	d.Base0::fun0;				//[Error] 'Base0' is an ambiguous base of 'Derived'
//	d.fun0();
	return 0;
}
