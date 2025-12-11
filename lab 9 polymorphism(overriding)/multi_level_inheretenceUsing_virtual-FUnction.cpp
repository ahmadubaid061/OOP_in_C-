#include <iostream>
using namespace std;
class employee{
	public:
		virtual float calculatePay()=0;
		
};
class salariedEmploye:public employee{
	float salary;
	public:
		salariedEmploye(int s){
			salary=s;
		}
		float calculatePay(){
			return salary;
		}
};
class hourlyEmploye:public employee{
	int rate_per_hour;
	int hours_worked;
	public:
		hourlyEmploye(int r,int h){
			rate_per_hour=r;
			hours_worked=h;
		}
		float calculatePay(){
			float salary=rate_per_hour*hours_worked;
			return salary;
		}
};
class CommissionEmploye:public employee{
	int basicSalary;
	int percentageOfsales;
	public:
		CommissionEmploye(int b,int percent){
			basicSalary=b;
			percentageOfsales=percent;
		}
		float calculatePay(){
			float total=basicSalary+percentageOfsales;
			return total;
		}
	
};
int main(){
	employee* base;
	salariedEmploye salaried(50000);
	
	hourlyEmploye hourly(5000,20); //hourly rate=5000   hours worked =20
	
	CommissionEmploye commissioned(25000,20);   //basic salary=25000   percentage of sales=20
	
	
	base=&salaried;
	float salary1=base->calculatePay();
	
	base=&hourly;
	float salary2=base->calculatePay();
	
	base=&commissioned;
	float salary3=base->calculatePay();
	
	cout<<"salary of salaried     employe: "<<salary1<<endl;
	cout<<"salary of hourly       employe: "<<salary2<<endl;
	cout<<"salary of commissioned employe: "<<salary3<<endl;
	
	return 0;
}
