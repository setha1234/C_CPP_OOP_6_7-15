#include<iostream>
using namespace std;
// structure
// constructor - 
class Person{
	private : 
		string name,gender;
		int id;
	public : 
	// Default Constructor
		Person(){
			name = "Unknow";
			gender = "Unknowed Gender";
			id = 0;	
		}
	// Constructor with Parameter is 
		Person(string n,int i){
			name = n;
			id = i;
		}
		// create a constructor with parameter for me
		void SetData(string u_name,int u_id){
			this->name = u_name;
			this->id   = u_id;
		}
		string getSetName(){
			return name;
		}
	
		void Display(){
			cout<<"Name : "<<name<<endl;
			cout<<"ID   : "<<id <<endl;
		}

};
int main(){
	Person p,p1("Setha",101);
	p.Display(); // Display p
	p.SetData("Kaka",103); // Set p
	p1.Display(); // display p1
	p.Display(); // display p after set value
	return 0;
}