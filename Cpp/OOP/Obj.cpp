// #include<iostream>
// using namespace std;
// class Person{
//     private:
//         string name;
//         int id;
//     public: 
//         Person(){
//             name = "N/A";
//             id   = 0;
//         }
//         Person(string n,int i){
//             name = n;
//             id  = i;
//         }
//         void Input(string a,int b){
//             name = a;
//             id   = b;
//         }
//         string getName(){
//             return name;
//         }
//         int getID(){
//             return id;
//         }
//         void Display(){
//             cout<<"Name : "<<name<<endl;
//             cout<<"ID   : "<<id<<endl;
//         }

// };
// int main(){
//     Person obj[10];
//     string username;
//     int user_id;
//     obj[0].Input("Kaka",123);
//     obj[1].Input("Susa",987);
//     obj[2].Input("Xami",563);

//     for(int i=0;i<10;i++){
//         cout<<"Enter name : ";cin>>username;
//         cout<<"Enter id  : ";cin>>user_id;
//         obj[i].Input(username,user_id);
//     }

//     for(int i=0;i<10;i++){
//         cout<<"Name : "<<obj[i].getName()<<endl;
//         cout<<"ID   : "<<obj[i].getID()<<endl;
//     }

//     obj[0].Display();
//     obj[1].Display();
//     obj[2].Display();
//     return 0;
// }



#include<iostream>
using namespace std;
class Library{
    private: 
        int choose,code_book[100],quantity[100],book_size;
        string book_title[100],author[100];
    public : 
        void Create_the_book(){
                cout<<"|=============================================================|"<<endl;
                cout<<"|                      Create the books                       |"<<endl;
                cout<<"|=============================================================|"<<endl;
                cout<<"Enter size book to store it : ";cin>>book_size;
                if(book_size>100){
                    cout<<"we can not store.we can store only 100."<<endl;
                }else{
                    // loop for create book
                    cin.ignore();
                    for(int i=0;i<book_size;i++){
                        cout<<"|=============================================================|"<<endl;
                        cout<<"Book #"<<i+1<<endl;
                        cout<<"Enter the title book : ";getline(cin,book_title[i]);
                        cout<<"Enter the Author     : ";getline(cin,author[i]);
                        cout<<"Enter the Quantity   : ";cin>>quantity[i];
                        cout<<"Enter the Code Book  : ";cin>>code_book[i];
                        cin.ignore();
                    }
                }

        }
        void Menu(){
            do{
                cout<<"|=============================================================|"<<endl;
                cout<<"|                       Menu Library                          |"<<endl;
                cout<<"|=============================================================|"<<endl;
                cout<<"| 1. Create the books                                         |"<<endl;
                cout<<"| 2. Display all books                                        |"<<endl;
                cout<<"| 3. Search the books                                         |"<<endl;
                cout<<"| 4. Issued the books                                         |"<<endl;
                cout<<"| 5. Return the books                                         |"<<endl;
                cout<<"|=============================================================|"<<endl;
                cout<<"| => Choose an option : ";cin>>choose;
                switch(choose){
                    case 1 : {
                        Create_the_book();
                        break;
                    }

                }
            }while(choose!=0);
        }

};
int main(){
    Library book;
    book.Menu();
    return 0;
}