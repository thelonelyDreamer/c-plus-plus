#include"Point.h"
#include<iostream>
using namespace std;
	
int Point::count=0;								//��̬�����ݳ�Ա������˵���ͳ�ʼ��
Point::Point(const Point &p):x(p.x),y(p.y){		//�����ã������õĶ����ܱ����� 
	count++;
}

void Point::move(int newX,int newY){			//�ƶ���
	cout<<"Moving the point to("<<newX<<","<<newY<<")"<<endl;
	x=newX; 
	y=newY; 
}

void Point::showCount(){
	cout<<" Object count="<<count<<endl;
}

const Point O(0,0);								//OΪ����ԭ�㣬�ǳ����󣬲��ܱ�����