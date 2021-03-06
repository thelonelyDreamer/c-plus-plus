//-----SavingsAccount类的实现-----
#include<iostream>
#include<cmath>
#include"SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(int date,int id,double rate)
	:id(id),balance(0),rate(rate),lastDate(date),accumulation(0){
		cout<<date<<"\t#"<<id<<" is created"<<endl;
}
void SavingsAccount::record(int date,double amount){
	accumulation= accumulate(date);
	lastDate=date;
	amount=floor(amount*100+0.05)/100;//floor:向下取整函数 ceil:向上取整函数
	balance+=amount;
	cout<<date<<"\t#"<<id<<"\t"<<amount<<"\t"<<balance<<endl;
}
void SavingsAccount::deposit(int date,double amount){
	record(date,amount);
}
void SavingsAccount::withdraw(int date,double amount){
	if(amount>getBalance())
		cout<<"Error:not enough money"<<endl;
	else
		record(date,-amount);
}
void SavingsAccount::settle(int date){
	double interest=accumulate(date)*rate/365;
	if(interest!=0)
		record(date,interest);
	accumulation=0;
}
void SavingsAccount::show(){
	cout<<"#"<<id<<"\tBalance:"<<balance<<endl;
}