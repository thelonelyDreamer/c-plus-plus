//-----动态数组类-----
#include<iostream>
#include<cassert> 
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
 
class ArrayOfPoint{
public:
	ArrayOfPoint(int size):size(size){
		points=new Point[size];
	}
	~ArrayOfPoint(){
		cout<<"Deleting..."<<endl;
		delete [] points;
	}
	Point &element(int index){
		assert(index>=0&&index<size);
		return points[index];
	}
private:
	Point *points;
	int size; 
 }; 
 
 int main(){
 	int count;
 	cout<<"Please enter the count of points:";
 	cin>>count;
 	ArrayOfPoint points(count);
 	points.element(0).move(5,0);
 	points.element(1).move(15,20);
 	return 0;
 }
 
 
 
 
 
 
 
 
 
