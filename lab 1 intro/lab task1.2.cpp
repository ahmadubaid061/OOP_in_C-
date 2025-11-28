#include <iostream>
using namespace std;
class Shape{
	public:
	string Color;
	string ShapeName;
	double length;
	double width;
	

    void getData(){
    	cout<<"Enter the shape Name :  ";
    	cin>>this->ShapeName;
    	cout<<"Enter the shape color:  ";
    	cin>>this->Color;
    	cout<<"Enter the shape length: ";
    	cin>>this->length;
    	cout<<"Enter the shape width:  ";
    	cin>>this->width;
    	
	}
    double Area(){
    	double area;
    	if(this->ShapeName=="square"){
    		area=this->length*this->length;
    		
		}
		else if(this->ShapeName=="rectangle"){
			area=this->length*this->width;
		}
		else if(this->ShapeName=="circle"){
			area=3.14*(this->length*this->length);
		}
		else{
			cout<<"the shape is invalid!"<<endl;
		}
		return area;
	}
};
int main(){
	Shape s1;
	s1.getData();
	double area=s1.Area(); 
	cout<<"Area of the "<<s1.ShapeName<<"is: "<<area<<endl;
	return 0;
}
