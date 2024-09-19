//Create a class 'Student' with three data members which are name, age and address. The constructor of the
//class assigns default values to name as "unknown", age as '0' and address as "not available". It has two
//functions with the same name 'setInfo'. First function has two parameters for name and age and assigns
//the same whereas the second function takes has three parameters which are assigned to name, age and
//address respectively. Print the name, age and address of 10 students.
// Use array of objects.

#include<iostream>
using namespace std;

class student{
	private:
		string name;
		int age;
		string address;
		
	public:
		student(){
			this->name="unknown";
			this->age=0;
			this->address="not available";
		}
	    void setInfo(string name,int age){
			this->name=name;
			this->age=age;
		
		}
		void setInfo(string name,int age,string address){
			this->name=name;
			this->age=age;
			this->address=address;
		}
		
		void get(){
			cout<<"\nName of student is: "<<name<<"\nage of student is: "<<age<<"\nAdress of student is: "<<address;
			cout<<"\n============================";
		}
		
		
};
int main(){
student s[10];

s[1].setInfo("Akshay",22);
s[2].setInfo("xyz",22,"Pune");
s[3].setInfo("pratik",24,"nashik");
s[4].setInfo("ABC",25);
s[5].setInfo("EFG",26,"jalgoan");
s[6].setInfo("HIJ",27);
s[7].setInfo("KLM",28,"indapur");
s[8].setInfo("OPQ",29,"Baramati");
s[9].setInfo("STV",21,"Nahvi");
s[10].setInfo("WUV",22,"Loni");



	for(int i=1;i<=10;i++){
		cout<<"\nStudent "<<i<<" Data";
		s[i].get();
		
	}
	
	
	
}