#include<stdio.h> 
#include<queue>
using namespace std;

/**
 *  push(x) ��x ���
 *  pop() ������Ԫ�س���
 *  front()  ��ö���Ԫ�� 
 *	back()   ��ö�βԪ��
 *  empty() �������Ƿ�Ϊ��
 *  size() ���ض��еĸ��� 
 */
int main(){
	queue<int> q;
	for(int i=1;i<=5;i++) q.push(i);
	printf("%d %d\n",q.front(),q.back());
	if(q.empty()==false) printf("����\n");
	
	return 0;
}
