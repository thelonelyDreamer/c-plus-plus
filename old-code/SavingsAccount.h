//-----SavingsAccount��Ķ���-----
class SavingsAccount{
private:
	int id;
	double balance;
	double rate;
	int lastDate;
	double accumulation;
	void record(int date,double amount);
	double accumulate(int date)const{
		return accumulation+balance*(date-lastDate);
	}
public:
	//���캯��
	SavingsAccount(int date,int id,double rate);
	int getId(){return id;}
	double getBalance(){return balance;}
	double gerRate(){return rate;}
	void deposit(int date,double amount);
	void withdraw(int date,double amount);
	//������Ϣ��ÿ��һ��һ�յ���һ�θú���
	void settle(int date);
	//��ʾ�˻���Ϣ
	void show();
};