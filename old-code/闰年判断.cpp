#include<iostream>
using namespace std;
int main(){
	int year;					//�������
	bool isLeapYear;			//�����жϲ����ͱ���
	cout<<"Enter the year:";	//��ʾ�������
	cin>>year;
	isLeapYear=((year%4==0&&year%100!=0)||(year%400==0));	//�����ж�����

	if(isLeapYear)											
		cout<<year<<" is a leap year"<<endl;
	else 
		cout<<year<<" is not a leap year"<<endl;

	return 0;
}