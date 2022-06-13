//-----���Իع����----- 
#include<iostream>
#include<cmath>
using namespace std;

class Point{							//��Ķ���
public:									//�ⲿ�ӿ�
	Point(float x=0,float y=0):x(x),y(y){}	
	float getX() const{return x;}
	float getY() const{return y;}			
private:								//˽�����ݳ�Ա
	float x,y;
};

float lineFit(const Point points[],int nPoint){					//float����Ԫ����ô�� 
	float avgX=0;float avgY=0;
	float lxx=0,lyy=0,lxy=0;
	for(int i=0;i<nPoint;i++){									//����X, Y��ƽ��ֵ 
		avgX+=points[i].getX();
		avgY+=points[i].getY();
	} 
	avgX/=nPoint;
	avgY/=nPoint;
	for(int i=0;i<nPoint;i++){
		lxx+=(points[i].getX()-avgX)*(points[i].getX()-avgX);	//����X�Ķ������ľ� 
		lyy+=(points[i].getY()-avgY)*(points[i].getY()-avgY);	//����Y��3�������ľ� 
		lxy+=(points[i].getX()-avgX) *(points[i].getY()-avgY);	//����X��Y�Ķ��׻�����ľ� 
	}
	cout<<"This line can be fitted by y=ax+b."<<endl;
	cout<<"a="<<lxy/lxx<<endl;
	cout<<"b="<<avgY-lxy*avgX/lxx<<endl;
	return static_cast<float>(lxy/sqrt(lxx*lyy));
}

int main(){
	Point p[10]={Point(6,10),Point(14,20),Point(26,30),Point(33,40),Point(46,50),		//��ʼ�����ݵ� 
				 Point(54,60),Point(67,70),Point(75,80),Point(84,90),Point(100,100)}; 
	float r=lineFit(p,10);																//����������� 
	cout<<"Line coefficient r="<<r<<endl;												//������ϵ�� 
	return 0;			 
}
