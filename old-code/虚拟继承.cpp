//-----����̳�----- 
#include<iostream>
using namespace std;

class Base0{										//�������Base0 
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
	Derived d;										//����Derived�����d 
	d.var0=2;										//ֱ�ӷ������������ݳ�Ա 
	d.fun0();										//ֱ�ӷ��������ĺ�����Ա					
	return 0;
}
