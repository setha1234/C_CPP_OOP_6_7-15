//#include<iostream>
//using namespace std;
//class Book{
//    private : 
//        // data members
//        string name;
//        int id;
//        char author[20];
//        float price;
//    public : 
//    	// method members
//    	void Input(){
//    		cout<<"Enter Name : ";getline(cin,name);
//    		cout<<"Enter ID   : ";cin>>id;cin.ignore();
//    		cout<<"Enter Author: ";cin.getline(author,20);
//    		cout<<"Enter Price : ";cin>>price;
//		}
//		void Display(){
//			cout<<"Title  : "<<name<<endl;
//			cout<<"ID     : "<<id<<endl;
//			cout<<"Author : "<<author<<endl;
//			cout<<"Pirce  : "<<price<<endl;
//		}
//};
//int main(){
//    Book book1;
//    book1.Input();
//    book1.Display();
//    return 0;
//}

#include<iostream>
using namespace std;
class Student{
	private : 
		string name;
		string gender;
		int id;
	public : 
		// setter is function with parameter but don't return
		// getter is function with Return but don't parameter
		void SetName(string n){ // n = input
			this->name = n; // name = n = input
		}
		void setGender(string g){
			this->gender = g;
		}
		void SetID(int i){
			this->id = i;
		}
		string GetName(){
			return name;
		}
		int GetID(){
			return id;
		}
		string GetGender(){
			return gender;
		}		
};
int main(){
	Student stu1;
	string name,gender;
	int id;
	cout<<"-------------------------------------"<<endl;
	cout<<"Enter name   : ";cin>>name;
	cout<<"Enter gender : ";cin>>gender;
	cout<<"Enter id     : ";cin>>id;
	cout<<"-------------------------------------"<<endl;
	stu1.SetName(name);
	stu1.setGender(gender);
	stu1.SetID(id);
	cout<<"-------------------------------------"<<endl;
	cout<<"Name   : "<<stu1.GetName()<<endl;
	cout<<"Gender : "<<stu1.GetGender()<<endl;
	cout<<"id     : "<<stu1.GetID()<<endl;
	cout<<"-------------------------------------"<<endl;
	return 0;
}