#include <iostream>
using namespace std;
class BankAccount{
	
	int accountNo;
	double balance;
	
	public:
		static int accountCount;
		BankAccount(int number,double amount){
			
		    accountNo=number;
			balance=amount;
			accountCount++;
		}
		
		void deposit(double amount){
			this->balance+=amount;
		}
		
		void withdraw(double amount){
			this->balance-=amount;
		}
		
		double getBalance()const{
		return this->balance;
		}
		
		static int  getAcountCount(){
			return accountCount;
		}
		
		int call_accountCount(){
			return getAcountCount();
		}
};
int BankAccount::accountCount=0;            

int main(){
	BankAccount acc(1234,1250.00);
	
	cout<<"Initially"<<endl;
	double balance=acc.getBalance();
	cout<<"Balance is: "<<balance<<endl;
	
	
	acc.deposit(500.00);
	
	
	cout<<"After depositing"<<endl;
	balance=acc.getBalance();
	cout<<"Balance is: "<<balance<<endl;
	
	acc.withdraw(200.00);
		cout<<"After withdrawing"<<endl;
	balance=acc.getBalance();
	cout<<"Balance is: "<<balance<<endl;
	
	//creating more acounts
	BankAccount acc2(5678,3000.0);
	BankAccount acc3(5678,4000.0);
	int count=acc.call_accountCount();
	cout<<"total number of accounts created: "<<count<<endl;
	return 0;
	}
