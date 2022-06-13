//-----动态创建对象与对象数据-----
#include<iostream>
using namespace std;

class Point {							//类的定义
public:									//外部接口
	Point():x(0),y(0){
		cout<<"Default Constructor called."<<endl; 
	}	
	Point(int x,int y):x(x),y(y){
		cout<<"Constructor called."<<endl; 
	}
	~Point(){cout<<"Destructor called."<<endl;}
	int getX() const{return x;}
	int getY() const{return y;} 
	void move(int newX,int newY){
		x=newX;
		y=newY;
	}
private:								//私有数据成员
	int x,y;
};

int main(){
	cout<<"Step one:"<<endl;
	Point *ptr1=new Point;
	delete ptr1;
	cout<<"Step one:"<<endl;
	ptr1=new Point(1,2);
	delete ptr1;
	cout<<"Step three:"<<endl;
	Point *ptr=new Point[2];
	delete[] ptr;	
	return 0;
}

 
