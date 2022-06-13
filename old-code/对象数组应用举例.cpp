#include<iostream>
using namespace std;

class Point{									//类的定义 
	public:										//外部接口 
		Point();
		Point(int x,int y);
		~Point();
		void move(int newX,int newY);
		int getX()const{return x;}
		int getY()const{return y;}
		static void showCount();				//静态函数成员 
	private: 									//私有数据成员 
		int x;
		int y;
}; 

Point::Point(){
	x=y=0;
	cout<<"Default Constructor called."<<endl;
}

Point::Point(int x,int y):x(x),y(y){
	x=y=0;
	cout<<"Default Constructor called."<<endl;
}

Point::~Point(){
	cout<<"Destructor called."<<endl;
}

void Point::move(int newX,int newY){
	cout<<"Moving the point to("<<newX<<","<<newY<<")"<<endl;
	x=newX; 
	y=newY; 
}

int main(){
	cout<<"Entering main…"<<endl;
	Point a[2];							//调用构造函数 
	for(int i=0;i<2;i++)
		a[i].move(i+10,i+20);			//使用对象的函数 
	cout<<"Exiting main…"<<endl;
	return 0;							//此语句之前调用析构函数 
}
