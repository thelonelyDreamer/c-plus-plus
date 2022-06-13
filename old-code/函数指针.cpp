//-----函数指针---- 
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
	void (*functionPointer)(float);	//函数指针 typedef void (*functionPointer)(float);可声明函数指针类 functionPointer y; 
	printStuff(PI);
	functionPointer=printStuff;		//指针赋值 
	functionPointer(PI);
	functionPointer=printMessage;
	functionPointer(TWO_PI);
	functionPointer(13.0);
	functionPointer=printFloat;
	functionPointer(PI);
	printFloat(PI);
	
	return 0;
}
