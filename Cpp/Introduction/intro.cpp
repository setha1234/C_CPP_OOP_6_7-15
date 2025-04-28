// #include<iostream>
// #include <iomanip> // header for using setw
// using namespace std;
// int main(){
//     system("clear");
//     // cout<<"Information"<<endl;
//     // cout<<"Name   : Setha Sith"<<endl;
//     // cout<<"ID     : 65-23-02-16"<<endl;
//     // cout<<"Gender : Male"<<endl;
//     // cout<<"Major  : Cs"<<endl;
//     // cout<<"Tel    : +855 123 456 789"<<endl;
//     // cout<<"Year   : 3rd "<<endl;


//     // cout<<"\t Hello! My Name is Jack.\n";
//     // cout<<"Cute Babie"<<setw(19)<<"Nice to meet you!!"<<"Hi"<<endl;

//     cout<<"\t\t\t Information \n\n";
//     cout<<"Name : Yaya"<<setw(30)<<"Gender : Female"<<setw(16)<<"Age : 23"<<endl<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    system("clear");
    // output - cout <<
    // input -  cin  >>
    // * DataType Number
    // int age;
    // float weight;
    // long   height;
    // double  tel;
    // * dataType Charactor
    // char gender;
    // char name[50];
    // string address;
    // Input Detail
    // cout<<"===========[Input]==========="<<endl;
    // cout<<"Enter Age    : ";cin>>age;
    // cout<<"Enter Weight : ";cin>>weight;
    // cout<<"Enter Height : ";cin>>height;
    // cout<<"Enter Tel    : ";cin>>tel;
    // cout<<"Enter Gender : ";cin>>gender;
    // cout<<"Enter Name   : ";cin>>name;
    // cout<<"Enter Address: ";cin>>address;
    // // Output Detail
    // cout<<"===========[Output]==========="<<endl;
    // cout<<"Name   : "<<name<<endl;
    // cout<<"Gender : "<<gender<<endl;
    // cout<<"Age    : "<<age<<endl;
    // cout<<"Height : "<<height<<endl;
    // cout<<"Weight : "<<weight<<endl;
    // cout<<"Tel    : "<<tel<<endl;
    // cout<<"Address: "<<address<<endl;
    // Data Charator
    int id;
    char name[20];
    string address;
    cout<<"Enter your id   : ";cin>>id;
    cout<<"Enter your name : ";cin.ignore();
    cin.getline(name,50); 
    cout<<"Enter your address :";
    getline(cin,address);

    cout<<"Name :"<<name<<endl;
    cout<<"Address :"<<address<<endl;
    
    return  0;
}


//  Create The Detail of book And Show Detail of Book
/*
    Title
    Author
    Subject
    Create at
    Price
    Stock
*/