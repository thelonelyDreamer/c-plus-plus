//-----利用指针数组输出单位矩阵-----
#include<iostream>
using namespace std;

int main(){
	int line1[]={1,0,0};				//定义三阶单位矩阵 
	int line2[]={0,1,0};
	int line3[]={0,0,1};
	int *pLine[3]={line1,line2,line3};	//定义整形指针数据并初始化 
	cout <<"Matrx test:"<<endl;			//输出矩阵 
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++)
			cout<<pLine[i][j]<<" ";		//pLine[i][j]等价于*(pLien[i]+j) 
		cout<<endl;
	}	
	return 0;
} 
