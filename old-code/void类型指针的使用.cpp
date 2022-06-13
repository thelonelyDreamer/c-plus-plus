//-----void类型指针的使用----- 
#include<iostream>
using namespace std;

int main(){
	//void voidObject       错，不能声明void类型的变量
	void *pv;
	int i=5;
	pv=&i;
	int *pint=static_cast<int *>(pv);
	cout<<"*pinti="<<*pint<<endl;
	
	return 0; 
}

//void指针只在指针所指向的数据类型不确定时使用 
