//----��ģ��Ӧ�þ���----- 
#include<iostream>
#include<cstdlib>
using namespace std;

struct Student{							//�ṹ�� Student 
	int id;								//ѧ�� 
	float gpa;							//ƽ���� 
}; 

template<class T>						//��ģ�壺ʵ�ֶ������������ݽ��д�ȡ 
class Store{							 
	private:
		T item;							//item���ڴ���������͵����� 
		bool haveValue;					//haveValue���ڱ��item�Ƿ񱻴������� 
	public:								
		Store();						//Ĭ����ʽ���޲������Ĺ��캯�� 
		T &getElem();					//��ȡ���ݺ��� 
		void putElem(const T &x);		//�������ݺ��� 
}; 

template<class T>						//Ĭ�Ϲ��캯����ʵ�� 
Store<T>::Store():haveValue(false) {}

template<class T>						//��ȡ���ݺ�����ʵ�� 
T &Store<T>::getElem(){
	if(!haveValue){						//�����ͼ��ȡδ��ʼ�������ݣ�����ֹ���� 
		cout<<"No item present!"<<endl;
		exit(1);						//ʹ������ȫ�˳������ز���ϵͳ�������ɱ�����ϵͳʶ��������ʾ��ֹԭ�� 
	}
	return item;
} 

template<class T>
void Store<T>::putElem(const T &x){		//�������ݵ�ʵ�� 
	haveValue=true;						//��ʾitem�Ѵ������� 
	item=x;								//��xֵ����item 
}

int main(){
	Store<int>s1,s2;
	s1.putElem(3);
	s2.putElem(-7);
	cout<<s1.getElem()<<" "<<s2.getElem()<<endl;
	
	Student g={1000,23};
	Store<Student>s3;
	s3.putElem(g);
	cout<<"The student id is"<<s3.getElem().id<<endl;
	//Store<double>d;
	//cout<<"Retrieving object d...";
	//cout<<d.getElem()<<endl;
	//dδ����ʼ����ִ�й����н����³�����ֹ 
	return 0;
} 
