//Q.No. 2
//Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a
//class named 'Rectangle' with a function named 'Area' which returns the area. Length 

#include<iostream>
using namespace std;

class Rectangle{
	private:
		float length,width;
		
	public:
		void set(float length,float width){
			this->length=length;
			this->width=width;
		}
		float Area(){
			float result = length*width;

           return result;
		}
};
int main(){
	
	Rectangle r;
	r.set(4,5);
	cout<<"\nArea is "<<r.Area();
	r.set(5,8);
	cout<<"\nArea is "<<r.Area();
	
	return 0;
}