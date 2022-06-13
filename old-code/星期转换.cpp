#include<iostream>
using namespace std;
//用枚举类型更好 
int main(){
	int day;
	cin>>day;
	switch (day){
	case 0:
		cout<<"Sunday"<<endl;
		break;
	case 1:
		cout<<"Monday"<<endl;
		break;
	case 2:
		cout<<"Tuesday"<<endl;
		break;
	case 3:
		cout<<"Wednesday"<<endl;
		break;
	case 4:
		cout<<"Thusday"<<endl;
		break;
	case 5:
		cout<<"Friday"<<endl;
		break;
	case 6:
		cout<<"Saturday"<<endl;
		break;
	default:
		cout<<"day out of range"<<endl;
		break;
	}

	return 0;
}
