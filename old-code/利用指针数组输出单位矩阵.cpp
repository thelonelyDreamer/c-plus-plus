//-----����ָ�����������λ����-----
#include<iostream>
using namespace std;

int main(){
	int line1[]={1,0,0};				//�������׵�λ���� 
	int line2[]={0,1,0};
	int line3[]={0,0,1};
	int *pLine[3]={line1,line2,line3};	//��������ָ�����ݲ���ʼ�� 
	cout <<"Matrx test:"<<endl;			//������� 
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++)
			cout<<pLine[i][j]<<" ";		//pLine[i][j]�ȼ���*(pLien[i]+j) 
		cout<<endl;
	}	
	return 0;
} 
