//-----ָ����ľ�̬��Ա��ָ��----- 
#include<iostream>
using namespace std;

class Point {							//��Ķ���
public:									//�ⲿ�ӿ�
	Point(int x=0,int y=0):x(x),y(y){count++;}	
	Point(const Point &p):x(p.x),y(p.y){
		count++;
	};
	~Point(){count--;}
	int getX() const{return x;}
	int getY() const{return y;} 
	static void showCount(){			//��̬������Ա
		cout<<  "Object count="<<count<<endl;
	}		
	static int count;					//��̬���ݳ�Ա
private:								//˽�����ݳ�Ա
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
