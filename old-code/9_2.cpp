//----类模板应用举例----- 
#include<iostream>
#include<cstdlib>
using namespace std;

struct Student{							//结构体 Student 
	int id;								//学号 
	float gpa;							//平均分 
}; 

template<class T>						//类模板：实现对任意类型数据进行存取 
class Store{							 
	private:
		T item;							//item用于存放任意类型的数据 
		bool haveValue;					//haveValue用于标记item是否被存入数据 
	public:								
		Store();						//默认形式（无参数）的构造函数 
		T &getElem();					//提取数据函数 
		void putElem(const T &x);		//存入数据函数 
}; 

template<class T>						//默认构造函数的实现 
Store<T>::Store():haveValue(false) {}

template<class T>						//提取数据函数的实现 
T &Store<T>::getElem(){
	if(!haveValue){						//如果试图提取未初始化的数据，则终止程序 
		cout<<"No item present!"<<endl;
		exit(1);						//使程序完全退出，返回操作系统，参数可被操作系统识别，用来表示终止原因 
	}
	return item;
} 

template<class T>
void Store<T>::putElem(const T &x){		//存入数据的实现 
	haveValue=true;						//表示item已存入数据 
	item=x;								//将x值存入item 
}

int main(){
	Store<int>s1,s2;
	s1.putElem(3);
	s2.putElem(-7);
	cout<<s1.getElem()<<" "<<s2.getElem()<<endl;
	
	Student g={1000,23};
	Store<Student>s3;
	s3.putElem(g);
	cout<<"The student id is"<<s3.getElem().id<<endl;
	//Store<double>d;
	//cout<<"Retrieving object d...";
	//cout<<d.getElem()<<endl;
	//d未经初始化，执行过程中将导致程序终止 
	return 0;
} 
