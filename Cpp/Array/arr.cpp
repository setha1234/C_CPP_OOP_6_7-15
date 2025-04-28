// DataType ArrayName[SizeArray]

#include<iostream>
#include<iomanip>
using namespace std;

struct Book{
    string title[100],author[100],genre[100],publiccationYear[100],language[100];
    int pagecount[100],size_book;
    float rate[100],price[100];
};

void Create_Book(Book &b){
    cout<<"==================Create Book==================="<<endl;
    cout<<"Enter the size of Book to create : ";cin>>b.size_book;
    for(int i=0;i<b.size_book;i++){
        cout<<"Book : "<<i<<endl;
        cout<<"Enter title of book            : ";cin.ignore();getline(cin,b.title[i]);
        cout<<"Enter author of book           : ";getline(cin,b.author[i]);
        cout<<"Enter genre of book            : ";getline(cin,b.genre[i]);
        cout<<"Enter publiccationYear of book : ";getline(cin,b.publiccationYear[i]);
        cout<<"Enter language of book         : ";getline(cin,b.language[i]);
        cout<<"Enter pagecount of book        : ";cin>>b.pagecount[i];
        cout<<"Enter rate of book             : ";cin>>b.rate[i];
        cout<<"Enter price of book            : ";cin>>b.price[i];
        cout<<endl;

    }

}

void Display_Book(Book &c){
    int i=0;

    cout<<"==================Display Book==================="<<endl;
    cout<<"Title"
        <<setw(12)<<"Author"
        <<setw(12)<<"Genre"
        <<setw(12)<<"PCY"
        <<setw(12)<<"Language"
        <<setw(12)<<"PC"
        <<setw(12)<<"Rate"
        <<setw(12)<<"Price"
        <<endl;
    while(i<c.size_book){
        cout<<c.title[i]
        <<setw(12)<<c.author[i]
        <<setw(12)<<c.genre[i]
        <<setw(12)<<c.publiccationYear[i]
        <<setw(12)<<c.language[i]
        <<setw(12)<<c.pagecount[i]
        <<setw(12)<<c.rate[i]
        <<setw(12)<<c.price[i]
        <<endl;
        i++;
    }
    

}

int main(){
    system("clear");
    Book book;
    int choice;
    do{
        cout<<"==================[Menu]=================="<<endl;
        cout<<"1. Create Detail Book."<<endl;
        cout<<"2. Display all Book."<<endl;
        cout<<"3. Update Book."<<endl;
        cout<<"4. Delete Book."<<endl;
        cout<<"5. Search Book."<<endl;
        cout<<"6. Add Book."<<endl;
        cout<<"7. Sort Detail Book."<<endl;
        cout<<"0. Exit."<<endl;
        cout<<"==========================================="<<endl;
        cout<<"Please choose an option : ";cin>>choice;
        switch(choice){
            case 1 : {
                // calling 
                Create_Book(book);
                break;
            }
            case 2 : {
                Display_Book(book);
                break;
            }
        }
    }while(choice!=0);
    return 0;
}