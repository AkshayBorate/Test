//Q.No 1
//Student Database Management System
//File handling has been effectively used for each feature of this project
//Operation
//1. Add Records
//2. List Records
//3. Modify Records
//4. Delete Records\

#include<iostream>
#include<fstream>
using namespace std;

class fileHandle{
	private:
		string str,file,read;
		
		public:
			void createData(){
				cout<<"Enter the file name : ";
				getline(cin,file);
				ofstream obj;
				obj.open(file+".txt",ios::app);
				cout<<"\ngive exit to stop witing data ";
				cout<<"\nEnter student name, roll & age ";
				while(true){
					getline(cin,str);
					if(str=="exit"){
						break;
					}
					obj<<str<<endl;
				}
				obj.close();				
			}
			void readdata(){
				string remove;
				ifstream in;
				cout<<"\nEnter file name to read data ";
				getline(cin,read);
				in.open(read+".txt");
				while(getline(in,str)){
					cout<<"\n"<<str;
				}
				in.close();
			}
			
			
			void Removedata(){
				string rem;
				cout<<"\nEnter the file name to delete ";
				cin>>rem;
            if(remove((rem+".txt").c_str()==0){
            	cout<<"\nData deleted sucessfully! ";
            	
			}else{
				cout<<"\nNot deleted ! ";
			}
                 
                  
	
			}
};

int main(){
	fileHandle f;
	f.createData();
	f.readdata();
	f.Removedata();
	return 0;
}