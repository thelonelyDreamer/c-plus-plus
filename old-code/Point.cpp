#include"Point.h"
#include<iostream>
using namespace std;
	
int Point::count=0;								//静态常数据成员在类外说明和初始化
Point::Point(const Point &p):x(p.x),y(p.y){		//常引用，所引用的对象不能被更新 
	count++;
}

void Point::move(int newX,int newY){			//移动点
	cout<<"Moving the point to("<<newX<<","<<newY<<")"<<endl;
	x=newX; 
	y=newY; 
}

void Point::showCount(){
	cout<<" Object count="<<count<<endl;
}

const Point O(0,0);								//O为坐标原点，是常对象，不能被更新