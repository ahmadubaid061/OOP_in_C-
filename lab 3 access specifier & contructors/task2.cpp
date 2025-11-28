#include <iostream>

using namespace std;
class Book{
	private:
	string title;
	string Author;
	int price;
	int BookId;
	int pages;
	public:
	Book(string t,string a,int pa,int p,int id){
		title=t;
		Author=a;
		pages=pa;
		price=p;
		BookId=id;
		
	}
	
	void display(){
		cout<<"  title is: "<<title<<endl;
		cout<<"  Author is: "<<Author<<endl;
		cout<<"  pages are: "<<pages<<endl;
		cout<<"  price is: "<<price<<endl;
		cout<<"  BookId is: "<<BookId<<endl;
		cout<<"\n"<<endl;
	}
};
int main(){
	Book s[10]={
	Book("OOp","Ubaid",500,1000,1111),
	Book("Pf","Ubaid",500,1000,1112),
	Book("Calculus","Ubaid",500,1000,1113),
	Book("math","Ubaid",500,1000,1114),
	Book("english","Ubaid",500,1000,1115),
	Book("urdu","Ubaid",500,1000,1116),
	Book("Pak study","Ubaid",500,1000,1117),
	Book("islamyat","Ubaid",500,1000,1118),
	Book("Ethics","Ubaid",500,1000,1119),
	Book("OS","abc",500,1000,1110),
	};
	for(int i=0;i<10;i++){
		cout<<"******************************Book : "<<i+1<<endl;
		s[i].display();
		
	}
}
