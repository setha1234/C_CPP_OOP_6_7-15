// #include<iostream>
// using namespace std;
// // void FunctionName(parameter 1, p2 , p3, ...){
// //}
// // FunctionName(argument 1, a2 , a3, ...)
// void Input(int a,int b,string name){ // parameter
//     cout<<"Value a : "<<a<<endl;
//     cout<<"Value b : "<<b<<endl;
//     cout<<"Name    : "<<name<<endl;
// }
// //  Function non-return with non-parameter
// void FunName(){
//     // statement 
//     cout<<"Welcome to Etec Center!"<<endl;
//     cout<<"We are study in c++ course."<<endl;
// }
// int main(){
//     FunName();
//     Input(13,4.32,"Ksaka"); // argument
//     return 0;
// }


//  *  Return Function
//     Return with Non-Parameter

// #include<iostream>
// using namespace std;
// int setX(){
//     int x = 10;
//     return x; 
// }
// string Username(string name){
//     return name;
// }
// int main(){
//     system("cls");
//     int a = setX();
//     string username;
//     //  Calling function
//     cout<<"X = "<<setX()<<endl;
//     cout<<"A = "<<a<<endl;
//     cout<<"x + a = "<<setX()+a<<endl;
//     // input to function
//     cout<<"Please input username : ";cin>>username;
//     // calling with parameter
//     cout<<Username(username)<<endl;



//     return 0;
// }


// * Create a program for calculate a item 
// * Requirement 
// * Variable : name, price , quantity , discount, tax
// * dis : 0-100 = 0.01, 100-200 = 0.02, ... , 500 -> 0.05
// * tax = 0.05
/*
    case : create, display, total in riel, total in dollar
*/
#include<iostream>
using namespace std;
int main(){
    int choice;
    do{ 
        cout<<"=================[ Menu ]================="<<endl;
        cout<<"[ 1. Create a Product."<<endl;
        cout<<"[ 2. Display Product."<<endl;
        cout<<"[ 3. Total in Riel."<<endl;
        cout<<"[ 4. Total in Dollar."<<endl;
        cout<<"[ 0. Exit."<<endl;
        cout<<"[ => Please choose an option : ";cin>>choice;
        switch(choice){
            case 0 : {
                cout<<"=================[ Exit ]================="<<endl;
                break;
            }
            default : {
                cout<<"=================[ Error ]================"<<endl;
                break;
            }


        }
        

    }while(choice != 0);

    return 0;
}