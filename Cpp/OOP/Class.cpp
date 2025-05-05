#include<iostream>
using namespace std;
class Person{
    public : // access specifier
        // data members
        string name;
        int id;
        char gender;
        float salary;
        // method members
        void InputDetail(){
            // input values of data members by user
            cout<<"==================Input Person in to data use by object==================="<<endl;
            cout<<"Enter name   : ";getline(cin,name);
            cout<<"Enter id     : ";cin>>id;
            cout<<"Enter Gender : ";cin>>gender;
            cout<<"Enter Salary : ";cin>>salary;
        }
        void DisplayDetail(){
            cout<<"==================Display Person==================="<<endl;
            cout<<"Name   : "<<name<<endl;
            cout<<"ID     : "<<id<<endl;
            cout<<"Gender : "<<gender<<endl;
            cout<<"Salary : "<<salary<<endl;
        }
};

int  main(){
    Person obj,obj1,obj2; // object of class Person
    // assigning values to data members 
    // obj.name   = "Kaka";
    // obj.id     = 101;
    // obj.gender = 'M';
    // obj.salary = 1000.50;

    obj.InputDetail();
    obj.DisplayDetail();

    
    return 0;
}