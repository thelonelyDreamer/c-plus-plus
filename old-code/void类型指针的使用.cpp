//-----void����ָ���ʹ��----- 
#include<iostream>
using namespace std;

int main(){
	//void voidObject       ����������void���͵ı���
	void *pv;
	int i=5;
	pv=&i;
	int *pint=static_cast<int *>(pv);
	cout<<"*pinti="<<*pint<<endl;
	
	return 0; 
}

//voidָ��ֻ��ָ����ָ����������Ͳ�ȷ��ʱʹ�� 
