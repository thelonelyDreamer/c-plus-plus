//-----����ָ��---- 
#include<iostream>
using namespace std;

void printStuff(float){
	cout<< "This is thr print stuff funtion."<<endl;
}

void printMessage(float data){
	cout<<"The data to be list is "<<data<<endl;
}

void printFloat(float data){
	cout<<"The data to be printed is "<<data<<endl;
}

const float PI=3.14159f;
const float TWO_PI=PI*2.0f;

int main(){
	void (*functionPointer)(float);	//����ָ�� typedef void (*functionPointer)(float);����������ָ���� functionPointer y; 
	printStuff(PI);
	functionPointer=printStuff;		//ָ�븳ֵ 
	functionPointer(PI);
	functionPointer=printMessage;
	functionPointer(TWO_PI);
	functionPointer(13.0);
	functionPointer=printFloat;
	functionPointer(PI);
	printFloat(PI);
	
	return 0;
}
