//-----线性回归计算----- 
#include<iostream>
#include<cmath>
using namespace std;

class Point{							//类的定义
public:									//外部接口
	Point(float x=0,float y=0):x(x),y(y){}	
	float getX() const{return x;}
	float getY() const{return y;}			
private:								//私有数据成员
	float x,y;
};

float lineFit(const Point points[],int nPoint){					//float是友元函数么？ 
	float avgX=0;float avgY=0;
	float lxx=0,lyy=0,lxy=0;
	for(int i=0;i<nPoint;i++){									//计算X, Y的平均值 
		avgX+=points[i].getX();
		avgY+=points[i].getY();
	} 
	avgX/=nPoint;
	avgY/=nPoint;
	for(int i=0;i<nPoint;i++){
		lxx+=(points[i].getX()-avgX)*(points[i].getX()-avgX);	//计算X的二阶中心距 
		lyy+=(points[i].getY()-avgY)*(points[i].getY()-avgY);	//计算Y的3二阶中心距 
		lxy+=(points[i].getX()-avgX) *(points[i].getY()-avgY);	//计算X，Y的二阶混合中心距 
	}
	cout<<"This line can be fitted by y=ax+b."<<endl;
	cout<<"a="<<lxy/lxx<<endl;
	cout<<"b="<<avgY-lxy*avgX/lxx<<endl;
	return static_cast<float>(lxy/sqrt(lxx*lyy));
}

int main(){
	Point p[10]={Point(6,10),Point(14,20),Point(26,30),Point(33,40),Point(46,50),		//初始化数据点 
				 Point(54,60),Point(67,70),Point(75,80),Point(84,90),Point(100,100)}; 
	float r=lineFit(p,10);																//进行线性拟合 
	cout<<"Line coefficient r="<<r<<endl;												//输出相关系数 
	return 0;			 
}
