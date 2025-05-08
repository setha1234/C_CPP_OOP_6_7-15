#include<iostream>
using namespace std;
// * Syntax Single Inheritance 
//  class sub_class_name : access_modifier base_class_name{};
// Base class
// class Animal{
//     public :
//         string name;
//         void AnimalSound(){
//             cout<<"Sound of Animal ... "<<endl;
//         }
//         void Hello(){
//             cout<<"Hello world"<<endl;
//         }
// };
// // sub class
// class Dog : public Animal{
//     public : 
//         void AnimalSound(){
//             name = "Poppy";
//             cout<<"Name of Dog : "<<name<<endl;
//             cout<<"Woof Woof"<<endl;
//         }      
// };
// // sub class
// class Cat : public Animal{
//     public : 
//         void AnimalSound(){
//             name = "Kitty";
//             cout<<"Name : "<<name<<endl;
//         }

// };
// int main(){
//     Animal a;
//     a.AnimalSound();
//     Dog d;
//     d.AnimalSound();

//     Cat c;
//     c.Hello();
//     c.AnimalSound();
//     c.name = "Hoho"; 
//     return 0;
// }


// Mutiple Inheritance
// * Syntax = sub_class : public base_class_1, public base_class_2{};
// * Base class 2, name yg name crush 
// * sub Create Display
class MengHean{
    public :
        string name;
        int house;
};
class Dane{
    public : 
        float money;
};
class Son:public MengHean,public Dane{
    public :   
        void Input(){
            cout<<"Enter name of son : ";cin>>name;
            cout<<"Enter house to son : ";cin>>house;
            cout<<"Enter the money to son : ";cin>>money;
        }
        void Display(){
            cout<<"Son Name : "<<name<<endl;
            cout<<"House : "<<house<<endl;
            cout<<"Money : "<<money<<endl;
        }
};

int main()
{
    Son s;
    s.Input();
    s.Display();
}