//-----�����������ʹ��-----
#include<iostream>
using namespace std;

int main(){
	int a[10],b[10];
	for(int i=0;i<10;i++){
		a[i]=i*2-1;
		b[9-i]=a[i];					//���ʽ�ṹΪ��������Խ��ʱ��Ч 
	}
	for(int i=0;i<10;i++){
		cout<<"a["<<i<<"]="<<a[i]<<endl;
		cout<<"b["<<i<<"]="<<b[i]<<endl;
	}
	return 0;
} 

//Dev-C++������Խ�粻����ʾ������Խ����ʱ�������벻���Ľ��
 
