#include <iostream>
using namespace std;
class Vector3D{
	int x;
	int y;
	int z;
	int magnitude;
	public:
		Vector3D(){
			x=0;
			y=0;
			z=0;
		}
		Vector3D(int a,int b,int c){
			x=a;
			y=b;
			z=c;
			
		}
		void Magnitude(){
			magnitude=(x*x+y*y+z*z);
		}
	    void Magnitude(int a,int b,int c){
			magnitude=(a*a+b*b+c*c);
		}
		Vector3D operator+(Vector3D &v){
			Vector3D resultant;
			resultant.x=this->x+v.x;
			resultant.y=this->y+v.y;
			resultant.z=this->z+v.z;
			resultant.magnitude=this->magnitude+v.magnitude;
			
			return resultant;
		}
		bool operator==(Vector3D &v){
			return magnitude==v.magnitude;
		}
		
		void display(){
			cout<<"x = "<<x<<"| y = "<<y<<"| z = "<<z<<"| magnitude = the square root of ("<<magnitude<<")"<<endl;
		}
};
int main(){
	Vector3D v1(2,3,4);
	Vector3D v2(5,3,2);
	v1.Magnitude();
	v2.Magnitude(6,7,4);
	cout<<"-------------------------------------------vector #1\n"<<endl;
	v1.display();
	cout<<"\n-------------------------------------------vector #2\n"<<endl;
	v2.display();
	
	Vector3D v3=v1+v2;
	cout<<"\n-------------------------------------------vector #3 before calculating its real magnitude\n"<<endl;
	v3.display();
	
	v3.Magnitude();
	cout<<"\n-------------------------------------------vector #3 After calculating its real magnitude\n "<<endl;
	v3.display();
	
	if(v1==v2){
		cout<<"\nvector 1 is equals to vector 2"<<endl;
	}else{
		cout<<"\nvector 1 is not equals to vector 2"<<endl;
	}
	return 0;
}
