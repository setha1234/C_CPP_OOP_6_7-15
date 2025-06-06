// #include<iostream>
// using namespace std;
// class Area{
//     private :
//         float width,height;
//     public : 
//         // default constructor
//         Area(){
//             width = 10;
//             height = 20;
//         }
//         // constructor
//         Area(int w,int h){
//             width = w;
//             height = h;
//         }
//         Area(float w,float h){
//             width = w;
//             height = h;
//         }
//         Area(double w,double h){
//             width = w;
//             height = h;
            
//         }
//         Area(long w,long h){
//             width = w;
//             height = h;
//         }
//         void Display(){
//             cout<<"Width : "<<width<<endl;
//             cout<<"Height : "<<height<<endl;
//             cout<<"Width * Height = "<<width*height<<endl;
//         }
// };  
// int main(){
//     Area a,a1(2,4),a2(3.14f,5.28f),a3(34.23,4345.34),a4(234l,345l);

//     cout<<"Result 1 : "<<endl;
//     a.Display();
//     cout<<"Result 2 : "<<endl;
//     a1.Display();
//     cout<<"Result 3 : "<<endl;
//     a2.Display();
//     cout<<"Result 4 : "<<endl;
//     a3.Display();
//     cout<<"Result 5 : "<<endl;
//     a4.Display();

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Person{
//     private : 
//         string name;
//         char gender;
//         int id;
//         float salary;
//     public : 
//         void Input(){
//             cout<<"Enter name : ";cin>>name;
//             cout<<"Enter id : ";cin>>id;
//             cout<<"Enter gender : ";cin>>gender;
//             cout<<"Enter salary : ";cin>>salary;
//         }
//         void Input(int i){
//             cout<<"Enter name : ";cin>>name;
//             id = i;
//             cout<<"Enter gender : ";cin>>gender;
//             cout<<"Enter salary : ";cin>>salary;
//         }
//         void Input(float s){
//             cout<<"Enter name : ";cin>>name;
//             cout<<"Enter id : ";cin>>id;
//             cout<<"Enter gender : ";cin>>gender;
//             salary = s;
//         }
//         void Input(string n){
//             name = n;
//             cout<<"Enter id : ";cin>>id;
//             cout<<"Enter gender : ";cin>>gender;
//             cout<<"Enter salary : ";cin>>salary;
//         }
//         void Input(char g){
//             cout<<"Enter name : ";cin>>name;
//             cout<<"Enter id : ";cin>>id;
//             gender = g;
//             cout<<"Enter salary : ";cin>>salary;
//         }
//         void Input(string n,int i,float s,char g){
//             name = n;
//             id = i;
//             salary = s;
//             gender = g;
//         }
//         void Display(){
//             cout<<"Name : "<<name<<endl;
//             cout<<"Gender : "<<gender<<endl;
//             cout<<"Salary : "<<salary<<endl;
//             cout<<"ID    : "<<id<<endl;
//         }
// };

// int main(){
//     Person s;
//     cout<<"Result #1 "<<endl;
//     s.Input();
//     s.Display();
//     cout<<"Result #2 "<<endl;
//     s.Input(123);
//     s.Display();
//     cout<<"Result #3 "<<endl;
//     s.Input("Koko");
//     s.Display();
//     cout<<"Result #4 "<<endl;
//     s.Input(1000.4f);
//     s.Display();
//     cout<<"Result #5 "<<endl;
//     s.Input('F');
//     s.Display();
//     cout<<"Result #1 "<<endl;
//     s.Input("Setha Sith",1,100,'M');
//     s.Display();
// }

// #include <iostream>
// using namespace std;
// class Person{
//     public :
//         void make_work(){
//             cout<<"I am working"<<endl;
//         }
//         // overloading function
//         void make_work(int i){
//             cout<<"id : "<<endl;
//         }
// };
// class Employee:public Person{
//     public : 
//         // override jenh pi base class
//         void make_work(){
//             cout<<"Employee working"<<endl;
//         }      
// };
// int main(){
//     Employee e;
//     e.make_work();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// template<typename T>

// // temple with function
// T sum(T a, T b){
//     return a*b;
// }
// int main(){
//     float a=10;
//     float b = 20;
//     cout<<"Sum = "<<sum(a,b)<<endl;
//     int x=40,y=345;
//     cout<<"Sum ="<<sum(x,y)<<endl;
//     return 0;
// }



// template class


#include<iostream>
using namespace std;
template<class F,class S>
class Person{
    // data members : variables
    // method members : functions
    private :
        S name;
        F id;
        F salary;
    public : 
        void Input(){
            cout<<"Enter name : ";cin>>name;
            cout<<"Enter id : ";cin>>id;
            cout<<"Enter salary  : ";cin>>salary;
        }
        F getID(){
            return id;
        }
        F getSalary(){
            return salary;
        }
        void Display(){
            cout<<"Name : "<<name<<endl;
            cout<<"ID  : "<<id<<endl;
            cout<<"Salary : "<<salary<<endl;
        }
};

int main(){
    Person<float,string> obj;
    obj.Input();
    obj.Display();

}