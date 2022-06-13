#include<iostream>
using namespace std;
int main(){
	int year;					//定义年份
	bool isLeapYear;			//闰年判断布尔型变量
	cout<<"Enter the year:";	//提示输入年份
	cin>>year;
	isLeapYear=((year%4==0&&year%100!=0)||(year%400==0));	//闰年判断条件

	if(isLeapYear)											
		cout<<year<<" is a leap year"<<endl;
	else 
		cout<<year<<" is not a leap year"<<endl;

	return 0;
}