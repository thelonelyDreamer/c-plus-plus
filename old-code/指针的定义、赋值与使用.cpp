//-----指针的定义、赋值与使用-----
#include<iostream>
using namespace std;

int main(){
	int i;						//定义整形变量i 
	int *ptr=&i;				//取i的地址赋给ptr 
	i=10;						//变量i赋初值 
	cout<<"i="<<i<<endl;		//直接访问 
	cout<<"*ptr="<<*ptr<<endl;	//间接访问 
	return 0;
}                       
