//-----输出三个浮点数的整数和小数部分----- 
#include<iostream>
using namespace std;

void splitFloat(float x,int *intPart,float *fracPart){
	*intPart=static_cast<int>(x);
	*fracPart=x-*intPart; 
}

int main(){
	cout<<"Enter 3 float Point number:"<<endl;
	for(int i=0;i<3;i++){
	float x,f;
	int n;
	cin>>x;
	splitFloat(x,&n,&f);
	cout<<"Integer Part="<<n<<"   Fraction Part="<<f<<endl;
	}
	return 0;	
}
