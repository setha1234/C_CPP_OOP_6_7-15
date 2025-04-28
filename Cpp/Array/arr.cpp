// DataType ArrayName[SizeArray]

#include<iostream>
#include<iomanip>
using namespace std;

struct Book{
    string title[100],author[100],genre[100],publiccationYear[100],language[100];
    int pagecount[100],size_book,id[100];
    float rate[100],price[100];
    bool check;
};

void Create_Book(Book &b){
    cout<<"==================Create Book==================="<<endl;
    cout<<"Enter the size of Book to create : ";cin>>b.size_book;
    for(int i=0;i<b.size_book;i++){
        cout<<"Book : "<<i+1<<endl;
        cout<<"Enter id of book               : ";cin>>b.id[i];
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
        <<setw(12)<<"ID"
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
        <<setw(12)<<c.id[i]
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

void Update_Book(Book &u){
    string answer,u_name;
    int u_id;
    cout<<"Before Update what you want to update."<<endl;
    cout<<"By title or id ?"<<endl;
    cout<<"Please choose [title/id]: ";cin>>answer;
    if(answer == "title" || answer == "TITLE"){
        cout<<"Please enter title for update : ";cin>>u_name;
        for(int i=0;i<u.size_book;i++){
            if(u.title[i] == u_name){
                cout<<"I found it.Please Update Detail Book."<<endl;
                cout<<"Book : "<<i+1<<endl;
                cout<<"Enter New title of book            : ";cin.ignore();getline(cin,u.title[i]);
                cout<<"Enter New author of book           : ";getline(cin,u.author[i]);
                cout<<"Enter New genre of book            : ";getline(cin,u.genre[i]);
                cout<<"Enter New publiccationYear of book : ";getline(cin,u.publiccationYear[i]);
                cout<<"Enter New language of book         : ";getline(cin,u.language[i]);
                cout<<"Enter New pagecount of book        : ";cin>>u.pagecount[i];
                cout<<"Enter New rate of book             : ";cin>>u.rate[i];
                cout<<"Enter New price of book            : ";cin>>u.price[i];
                cout<<endl;

            }else{
                cout<<"I can't find it.Sorry Please try again."<<endl;
                
            }
        }

    }else if(answer == "id" || answer == "ID"){
        cout<<"Please enter id for update : ";cin>>u_id;
        for(int i=0;i<u.size_book;i++){
            if(u.id[i] == u_id){
                cout<<"I found it.Please Update Detail Book."<<endl;
                cout<<"Book : "<<i+1<<endl;
                cout<<"Enter New id of book               : ";cin>>u.id[i];
                cout<<"Enter New title of book            : ";cin.ignore();getline(cin,u.title[i]);
                cout<<"Enter New author of book           : ";getline(cin,u.author[i]);
                cout<<"Enter New genre of book            : ";getline(cin,u.genre[i]);
                cout<<"Enter New publiccationYear of book : ";getline(cin,u.publiccationYear[i]);
                cout<<"Enter New language of book         : ";getline(cin,u.language[i]);
                cout<<"Enter New pagecount of book        : ";cin>>u.pagecount[i];
                cout<<"Enter New rate of book             : ";cin>>u.rate[i];
                cout<<"Enter New price of book            : ";cin>>u.price[i];
                cout<<endl;

            }else{
                cout<<"I can't find it.Sorry Please try again."<<endl;
                
            }
        }

    }else{
        cout<<"Invalid Answer!"<<endl;
    }

}

void Delete_Book(Book &d){
    int answer;
    string d_name;
    d.check = false;
    cout<<"What you want to delete?"<<endl;
    cout<<"1 . By Name."<<endl;
    cout<<"2 . By Id."<<endl;
    cout<<"Please input the answer : ";cin>>answer;
    if(answer == 1){
        cout<<"Enter name for delete : ";cin>>d_name;
        for(int i=0;i<d.size_book;i++){
            if(d.title[i] == d_name){
                for(int j=i;j<d.size_book-1;j++){
                    d.author[i] = d.author[j+1];
                    d.id[i] = d.id[j+1];
                    d.title[i] = d.title[j+1];
                    d.genre[i] = d.genre[j+1];
                    d.pagecount[i] = d.pagecount[j+1];
                    d.price[i] = d.price[j+1];
                    d.publiccationYear[i] = d.publiccationYear[j+1];
                    d.rate[i] = d.rate[j+1];
                    d.language[i] = d.language[j+1];
                    d.check = true;
                }
                d.size_book--;
            }
        }
        if(!d.check){
            cout<<"Delete Not Complate"<<endl;
        }
    }
}

void Search_Book(Book &s){

}

void Add_Book(Book &a){

}

void Sort_Book(Book &s){
    
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
            case 3 : {
                Update_Book(book);
                break;
            }
            case 4 :{
                Delete_Book(book);
                break;
            }
            case 5 : {

                break;
            }
            case 6 : {

                break;
            }
            case 7 : {

                break;
            }
            case 0 : {
                cout<<"=========================================="<<endl;
                cout<<"              Exit Program                "<<endl;
                cout<<"=========================================="<<endl;
            }
        }
    }while(choice!=0);
    return 0;
}