// Control Statement - Condition Statement
/*
    if statement
    if else statement
    if else if statement
    switch case 
*/

#include<iostream>
using namespace std;
int main(){
    system("clear");
    // int age;
    
    // cout<<"Please input your age : ";
    // cin>>age;
    // // strcmp -  string compare

    // if(age<18){
    //     cout<<"You are to young"<<endl;
    // }else if(age>18){
    //     cout<<"You are older than 18"<<endl;
    // }else if(age == 18){
    //     cout<<"You are 18 year old."<<endl;
    // }
    // else{
    //     cout<<"You are alien"<<endl;
    // }

    // string username;
    // int password;
    // cout<<"Enter your username : ";cin>>username;
    // cout<<"Enter your password : ";cin>>password;

    // if(username == "setha"){
    //     cout<<"Your user is correct."<<endl;
    //     if(password == 123){
    //         cout<<"Log in successfully!"<<endl;
    //     }else{
    //         cout<<"Your password is incorrect!"<<endl;
    //     }
    // }else{
    //     cout<<"Your username is incorrect!"<<endl;
    // }

    // char week;
    // // switch - using only with int char
    // lebal:
    // cout<<"Please input number [1-7] : ";cin>>week;
    // switch(week){
    //     case '1' : {
    //         cout<<"Today is Monday."<<endl;
    //         goto lebal;
    //         break;
    //     }
    //     case '2' : {
    //         cout<<"Today is Tuesday."<<endl;
    //         break;
    //     }
    //     case '3' :{
    //         cout<<"Today is Wednesday."<<endl;
    //         break;
    //     }
    //     case '4' : cout<<"Today is Thursday."<<endl;    break;
    //     case '5' : cout<<"Today is Friday."<<endl;      break;
    //     case '6' : cout<<"Today is Satureday."<<endl;   break;
    //     case '7' : cout<<"Today is Sunday."<<endl;      break;
    //     default  : cout<<"Invalid Day !"<<endl;         break;
    // }

    
    // for (int i = 1;i<=count;i++){
    //     cout<<"B somtus "<<i<<"."<<endl;
    // }
    // int i = 1;// start
    // while(i<=count){// stop 
    //     cout<<"B somtus "<<i<<"."<<endl;
    //     i++; // step
    // }
    int count;
    int i = 1;
    cout<<"Please input for sorry : ";cin>>count;
    do{
        cout<<"B somtus "<<i<<"."<<endl;
        i++;
    }while(i<=count);



    return 0;
}




