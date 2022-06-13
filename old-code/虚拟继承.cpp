//-----虚拟继承----- 
#include<iostream>
using namespace std;

class Base0{										//定义基类Base0 
	public:											
		int var0;
		void fun0(){cout<<"Merber of Base0"<<endl;} 
};

class Base1:virtual public Base0{
	public:
		int var1;
};

class Base2:virtual public Base0{
	int var2;
};

class Derived:public Base1,public Base2{
	public:
		int var2;
		void fun(){cout<<"Menber of Drived"<<endl;}
};

int main(){
	Derived d;										//定义Derived类对象d 
	d.var0=2;										//直接访问虚基类的数据成员 
	d.fun0();										//直接访问虚基类的函数成员					
	return 0;
}
