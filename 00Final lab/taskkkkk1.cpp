#include <iostream>
using namespace std;
class package{
	int weight;
	double cost_per_ounce;
	string sender_name;
	string reciever_name;
	string sender_address;
	string reciever_address;
	string sender_city;
	string reciever_city;
	string sender_state;
	string reciever_state;
	int sender_zip;
	int reciever_zip;
	public:
		package(int w,double cost,string sn,string rn,string sa,string ra,string sc,string rc,string ss,string rs,int sz,int rz){
		    
			//for weight to check if positive or not
			if(w>0){
		    	weight=w;
			}
			else{
				weight=0;
			}
			//for cost to check positive or not
			if(cost>0){
		       cost_per_ounce=cost;
			}
			else{
			   cost_per_ounce=0;
			}
			
			
			sender_name=sn;
			reciever_name=rn;
			sender_address=sa;
			reciever_address=ra;
			sender_city=sc;
			reciever_city=rc;
			sender_state=ss;
			reciever_state=rs;
			sender_zip=sz;
		    reciever_zip=rz;	
		}
		
		double calculate_cost(){
			return weight*cost_per_ounce;
		}
		
		void print_sender_reciever(){
			cout<<"Sender is: "<<sender_name<<" reciever is: "<<reciever_name<<endl;
		}
};
class twoDayPackage:public package{
	int flat_fee;
	public:
		twoDayPackage(int ff,int w,double cost,string sn,string rn,string sa,string ra,string sc,string rc,string ss,string rs,int sz,int rz):package(w,cost,sn,rn,sa,ra,sc,rc,ss,rs,sz,rz){
		     flat_fee=ff;
		
		}
		double calculate_cost(){
			int total_cost=package::calculate_cost();
			return total_cost+flat_fee;
		}
		
		void print_sender_reciever(){
			package::print_sender_reciever();
		}
};
class overNightPackage:public package{
	int additional_fee_per_ounce;
	public:
		overNightPackage(int addfee,int w,double cost,string sn,string rn,string sa,string ra,string sc,string rc,string ss,string rs,int sz,int rz):package(w,cost,sn,rn,sa,ra,sc,rc,ss,rs,sz,rz){
		     additional_fee_per_ounce=addfee;
		
		}
		double calculate_cost(){
		    int total_cost=package::calculate_cost();
			return total_cost+additional_fee_per_ounce;
		}
		void print_sender_reciever(){
			package::print_sender_reciever();
		}
};
int main(){
	package p1(10,50,"Ubaid","Ahmad","b17","G12","Islamabad","Islamabad","Pakistan","pakistan",2912,1245);
	twoDayPackage p2(30,15,100,"Ali","Didar","Saddar","G12","Rawalpindi","Islamabad","Pakistan","pakistan",1425,1245);
	overNightPackage p3(50,20,60,"Umar","bakhti","phase1","phase2","Peshawar","Peshawar","Pakistan","pakistan",5673,6783);
	
	cout<<"==============object 1 ============"<<endl;
	p1.print_sender_reciever();
	cout<<"Total Cost is: ";
	double cost1=p1.calculate_cost();
	cout<<cost1<<endl;
	cout<<"\n==============object 2 ============"<<endl;
	p2.print_sender_reciever();
	cout<<"Total Cost is: ";
	double cost2=p2.calculate_cost();
	cout<<cost2<<endl;
	cout<<"\n==============object 3 ============"<<endl;
	p3.print_sender_reciever();
	cout<<"Total Cost is: ";
	double cost3=p3.calculate_cost();
	cout<<cost3<<endl;
	
	return 0;
	
}
