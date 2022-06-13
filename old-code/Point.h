//-----��Point�Ķ���-----
#ifndef _POINT_H
#define _POINT_H

class Point {							//��Ķ���
public:									//�ⲿ�ӿ�
	Point(int x=0,int y=0):x(x),y(y){count++;}	
	Point(const Point &p);
	~Point(){count--;}
	int getX() const{return x;}
	int getY() const{return y;}
	void move(int newX,int newY);
	static void showCount();			//��̬������Ա
private:								//˽�����ݳ�Ա
	int x,y;
	static int count;					//��̬���ݳ�Ա
};

#endif