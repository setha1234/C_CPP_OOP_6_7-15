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

/*

#include<iostream>
using namespace std;
class Employee{
    private : // access modifier
        // data member
        int code;
        string name;
        char sex;
        float salary;
    public :
        // method members
        void Input(){
            cout<<"Enter your code : ";cin>>code;
            cout<<"Enter your name : ";cin>>name;
            cout<<"Enter your salary : ";cin>>salary;
            cout<<"Enter your gender : ";cin>>sex;
        }
        void Output(){
            cout<<"Name : "<<name<<endl;
            cout<<"Gender : "<<sex<<endl;
            cout<<"Salary : "<<salary<<endl;
            cout<<"Code   : "<<code<<endl;
        }
};
int main(){
    system("cls");
    Employee obj;
    obj.Input();
    obj.Output();
    return 0;
}

*/

#include <iostream>
#include <iomanip>
using namespace std;
class Library
{
private:
    int choose, code_book[100], quantity[100], book_size, issued[100], qty_issued,total_issued;
    string book_title[100], author[100], search_title, issued_title;
    bool check = false;

public:
    Library()
    {
        for (int i = 0; i < 100; i++)
        {
            code_book[i] = 0;
            book_title[i] = "N/A";
            author[i] = "N/A";
            quantity[i] = 0;
            issued[i] = 0;
        }
    }
    void Create_the_book()
    {
        cout << "|=============================================================|" << endl;
        cout << "|                      Create the books                       |" << endl;
        cout << "|=============================================================|" << endl;
        cout << "Enter size book to store it : ";
        cin >> book_size;
        if (book_size > 100)
        {
            cout << "we can not store.we can store only 100." << endl;
        }
        else
        {
            // loop for create book
            cin.ignore();
            for (int i = 0; i < book_size; i++)
            {
                cout << "|=============================================================|" << endl;
                cout << "Book #" << i + 1 << endl;
                cout << "Enter the title book : ";
                getline(cin, book_title[i]);
                cout << "Enter the Author     : ";
                getline(cin, author[i]);
                cout << "Enter the Quantity   : ";
                cin >> quantity[i];
                cout << "Enter the Code Book  : ";
                cin >> code_book[i];
                cin.ignore();
            }
        }
    }
    void Display_the_book()
    {
        cout << "|=============================================================|" << endl;
        cout << "|                     Display the books                       |" << endl;
        cout << "|=============================================================|" << endl;
        cout << "| Code" << setw(16) << "Title" << setw(12) << "Author" << setw(12) << "Quantity" << setw(12) << "Issued" << endl;
        cout << "|=============================================================|" << endl;
        for (int i = 0; i < book_size; i++)
        {
            cout << "| " << code_book[i] << setw(16) << book_title[i] << setw(12) << author[i] << setw(12) << quantity[i] << setw(12) << issued[i] << endl;
            cout << "---------------------------------------------------------------" << endl;
        }
    }

    void Search_book()
    {
        cout << "|=======================[Search Book]=========================|" << endl;
        cout << "| => Please enter the title of book for search : ";
        cin >> search_title;
        for (int i = 0; i < book_size; i++)
        {
            if (book_title[i] == search_title)
            {
                cout << "| Code Book  : " << code_book[i] << endl;
                cout << "| Title Book : " << book_title[i] << endl;
                cout << "| Author     : " << author[i] << endl;
                cout << "| Quantity   : " << quantity[i] << endl;
                check = true;
            }
        }
        if (check == false)
        {
            cout << "| Book not found!" << endl;
        }
        cout << "|=============================================================|" << endl;
    }

    void Issued_Book()
    {
        cout << "Enter the title for issued : ";
        cin >> issued_title;
        for (int i = 0; i < book_size; i++)
        {
            if (issued_title == book_title[i])
            {
                if (issued[i] > quantity[i])
                {
                    cout << "Too much for borrow." << endl;
                }
                else
                {
                    cout << "Enter quantity for issued : ";
                    cin >> qty_issued;
                    total_issued = issued[i] + qty_issued;
                    if (total_issued > quantity[i])
                    {
                        cout << "We don't have enough book." << endl;
                        cout << "We have " << quantity[i] << " Books." << endl;
                    }
                    else
                    {
                        cout << "You can borrow it." << endl;
                        issued[i] += qty_issued;
                    }
                }
            }
        }
    }
    void Menu()
    {
        do
        {
            system("pause");
            system("cls");
            cout << "|=============================================================|" << endl;
            cout << "|                       Menu Library                          |" << endl;
            cout << "|=============================================================|" << endl;
            cout << "| 1. Create the books                                         |" << endl;
            cout << "| 2. Display all books                                        |" << endl;
            cout << "| 3. Search the books                                         |" << endl;
            cout << "| 4. Issued the books                                         |" << endl;
            cout << "| 5. Return the books                                         |" << endl;
            cout << "|=============================================================|" << endl;
            cout << "| => Choose an option : ";
            cin >> choose;
            switch (choose)
            {
            case 1:
            {
                Create_the_book();

                break;
            }
            case 2:
            {
                Display_the_book();
                break;
            }
            case 3:
                Search_book();
                break;
            case 4:
                Issued_Book();
                break;
            }
        } while (choose != 0);
    }
};
int main()
{
    system("cls");
    Library book;
    book.Menu();
    return 0;
}
