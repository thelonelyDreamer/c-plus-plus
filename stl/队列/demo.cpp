#include<stdio.h> 
#include<queue>
using namespace std;

/**
 *  push(x) 将x 入队
 *  pop() 将队首元素出队
 *  front()  获得队首元素 
 *	back()   获得队尾元素
 *  empty() 检查队列是否为空
 *  size() 返回队列的个数 
 */
int main(){
	queue<int> q;
	for(int i=1;i<=5;i++) q.push(i);
	printf("%d %d\n",q.front(),q.back());
	if(q.empty()==false) printf("不空\n");
	
	return 0;
}
