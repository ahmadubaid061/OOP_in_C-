#include <iostream>
using namespace std;
class ride{
	public:
};
class CarRide:public ride{
	public:
		void startRide(){
			cout<<"starting Car......"<<endl;
		}	
		void endRide(){
			cout<<"stoping the car!"<<endl;
		}
};
class BikeRide:public ride{
	bool helmet_verification;
	public:
		void startRide(){
			cout<<"starting Bike......"<<endl;
		}		
		void checkHelmet(){
			int x;
			cout<<"if driver is wearing helmet enter : 1 ,,Else enter :0  ";
			cin>>x;
			helmet_verification=x;
		}
		void endRide(){
			if(helmet_verification){
				cout<<"ok stop the bike"<<endl;
			}
			else{
				cout<<"wait! wear helmet first"<<endl;
			}
		}
};
int main(){
	BikeRide b;
	b.startRide();
	b.checkHelmet();
	b.endRide();
	
	CarRide c;
	c.startRide();
	c.endRide();
	
	return 0;
}
