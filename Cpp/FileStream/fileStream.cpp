#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;
    int choose,id,size;
    string name;
    char gender;
    float salary;
    do{
        cout<<"============================================================"<<endl;
        cout<<"1. Create Data"<<endl;
        cout<<"2. Display Data"<<endl;
        cout<<"3. Add Data"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter the option : ";cin>>choose;
        switch(choose){
            case 1 : {
                cout<<"============================================================"<<endl;
                file.open("exercise.txt",ios::out);
                cout<<"Enter size for create : ";cin>>size;
                for(int i=1;i<=size;i++){
                    cout<<"Enter your id : ";cin>>id;
                    cout<<"Enter your name : ";cin>>name;
                    cout<<"Enter your gender :";cin>>gender;
                    cout<<"Enter your salary : ";cin>>salary;
                    cout<<endl;
                    file<<"\t"<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<salary<<endl;
                }
                cout<<"============================================================"<<endl;
                file.close();
                break;
            }
            case 2 : {
                file.open("exercise.txt",ios::in);
                cout<<"============================================================"<<endl;
                cout<<"\tID\tName\tGender\tSalary"<<endl;
                string line;
                while (getline(file,line))
                {
                    cout<<line<<endl;
                }
                file.close();
                break;
            }
            case 3 :{
                file.open("exercise.txt",ios::app);
                cout<<"Enter size for create : ";cin>>size;
                for(int i=1;i<=size;i++){
                    cout<<"Enter your id : ";cin>>id;
                    cout<<"Enter your name : ";cin>>name;
                    cout<<"Enter your gender :";cin>>gender;
                    cout<<"Enter your salary : ";cin>>salary;
                    cout<<endl;
                    file<<"\t"<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<salary<<endl;
                }
                cout<<"============================================================"<<endl;
                file.close();
                break;
            }
        }
    }while(choose != 0);
    


    return 0;
}
