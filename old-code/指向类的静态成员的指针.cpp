//-----指向类的静态成员的指针----- 
#include<iostream>
using namespace std;

class Point {							//类的定义
public:									//外部接口
	Point(int x=0,int y=0):x(x),y(y){count++;}	
	Point(const Point &p):x(p.x),y(p.y){
		count++;
	};
	~Point(){count--;}
	int getX() const{return x;}
	int getY() const{return y;} 
	static void showCount(){			//静态函数成员
		cout<<  "Object count="<<count<<endl;
	}		
	static int count;					//静态数据成员
private:								//私有数据成员
	int x,y;
};

int Point::count=0;

int main(){
	int *ptr=&Point::count;
	void(*funcPtr)()=Point::showCount;
	Point a(4,6);
	cout<<  "Object count="<<*ptr<<endl;
	Point b(a);
	funcPtr();
	return 0;
}
