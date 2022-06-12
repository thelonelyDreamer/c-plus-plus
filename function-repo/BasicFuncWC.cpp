
// 函数的声明文件
#include"BasicFuncWC.h"
using namespace std;
using namespace wc::sayHi;
using namespace wc::factorial

void sayHi(){
	int a=1;
	int b=2;
	a=a+b;
}

//递归（recursion）计算一个数的阶乘(factorial)
unsigned int factorial(unsigned int n/*=0*/){
	unsigned int result=1;
	if(0!=n){
		result = n*factorial(n-1);
	}
	return result;	
}