//-----使用数组名作为函数参数 
#include<iostream>
using namespace std;

void rowSum(int a[][4],int nRow){						//计算二维数组a每行元素的和，nRow为行数 ， 把数组作为参数时，一般不指定第一维的大小，即使指定，也被被忽略
	for(int i=0;i<nRow;i++){
		for(int j=1;j<4;j++)
		a[i][0]+=a[i][j];
	}
} 

int main(){												//主函数 
	int table[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};	//初始化数组 
	for(int i=0;i<3;i++){								//输出数组元素 
		for(int j=0;j<4;j++)
			cout<<table[i][j]<<" ";
			cout<<endl;
	}
	rowSum(table,3);									//调用子函数，计算各行和 
	for(int i=0;i<3;i++)								//输出计算结果 
	cout<<"Sum of row"<<i<<"is"<<table[i][0]<<endl;		//对形参的修改会影响到实参
	return 0;
}
