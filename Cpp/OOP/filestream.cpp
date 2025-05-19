#include<iostream> // header file cpp
#include<fstream> // header file for file stream
using namespace std;
int main(){
    // ofstream file; // of stream write to example // create
    // file.open("example.txt"); // open file 
    
    // string name;

    // cout<<"Enter you name : ";cin>>name;

    // cout<<"NAme : "<<name;

    // file<<name;
    // file.close(); // close file


    // ifstream file; // read file display
    // file.open("example.txt");
    // string line;
    // while(getline(file,line)){
    //     cout<<line<<endl;
    // }
    
    // file.close();

    fstream obj; // class is use for read/write
    // ios::app,ate,in,out

    obj.open("example.txt",ios::out);// display read

    obj<<"Baby Mama"<<endl;

    obj.close();


    return 0;
}