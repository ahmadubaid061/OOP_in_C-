#include <iostream>
using namespace std;
class Matrix{
	int arr1[3][3];
	int arr2[3][3];
	public:
	    Matrix(int a[3][3],int b[3][3]){
	    	for(int i=0;i<3;i++){
	    		for(int j=0;j<3;j++){
	    			arr1[i][j]=a[i][j];
	    			arr2[i][j]=b[i][j];
				}
			}
	    	
		}
		friend class Modify;
};
class Modify{
	public:
		int arr3[3][3];
		void add(Matrix &m){
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					arr3[i][j]=m.arr1[i][j]+m.arr2[i][j];
				}
			}
		}
		void display(){
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<arr3[i][j]<<" ";
				}
				cout<<endl;
			}
			
		}
		
		void transpose() {
	        int newArr[3][3];
	        for (int i = 0; i < 3; i++) {
	            for (int j = 0; j < 3; j++) {
	                newArr[i][j] = arr3[j][i]; 
	            }
	        }
	        //now storing the result again in arr3
	        for (int i = 0; i < 3; i++) {
	            for (int j = 0; j < 3; j++) {
	                arr3[i][j]=newArr[i][j];
	            }
	        }
   		}
		
};
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3]={{11,12,13},{14,15,16},{17,18,19}};
	Matrix m(a,b);
	Modify x;
	x.add(m);
	cout<<"\nSum of two arrays is!\n"<<endl;
	x.display();
	x.transpose();
	cout<<"\nAfter transpose!\n"<<endl;
	x.display();
	return 0;
}
