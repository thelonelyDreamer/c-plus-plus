//-----SavingsAccount类的定义-----
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
	//构造函数
	SavingsAccount(int date,int id,double rate);
	int getId(){return id;}
	double getBalance(){return balance;}
	double gerRate(){return rate;}
	void deposit(int date,double amount);
	void withdraw(int date,double amount);
	//结算利息，每年一月一日调用一次该函数
	void settle(int date);
	//显示账户信息
	void show();
};