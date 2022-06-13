//-----使用指针来访问类的成员----- 
#include<iostream>
using namespace std;

class Point{
public:
	Point(int x=0,int y=0):x(x),y(y){}
	int getX()const{return x;}
	int getY()const{return y;}
private:
	int x,y;
};
 
int main(){
	Point a(4,5);
	Point *p1=&a;
	int (Point::*funcPtr)()const=&Point::getX;	//定义函数指针并初始化 
	cout<<(a.*funcPtr)()<<endl;					//使用指针访问对象 
	cout<<(p1->*funcPtr)()<<endl;	
	cout<<p1->getX()<<endl;
	cout<<a.getY()<<endl;
	return 0;
}
