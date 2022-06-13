//-----数组的声明与使用-----
#include<iostream>
using namespace std;

int main(){
	int a[10],b[10];
	for(int i=0;i<10;i++){
		a[i]=i*2-1;
		b[9-i]=a[i];					//表达式结构为整数并不越界时有效 
	}
	for(int i=0;i<10;i++){
		cout<<"a["<<i<<"]="<<a[i]<<endl;
		cout<<"b["<<i<<"]="<<b[i]<<endl;
	}
	return 0;
} 

//Dev-C++下数组越界不会提示，数组越界有时会有意想不到的结果
 
