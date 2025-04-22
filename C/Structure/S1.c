// #include<stdio.h>
// struct  Person
// {
//     /* data-member */
//     int age;
//     char name[50];
//     float height;
//     char gender[10];
// };

// int main(){
//     // * Structures is an optional dataType member
//     struct Person person1;
//     struct Person person2;
//     // * Initialize the structure members
//     printf("================================\n");
//     printf("Enter person 1 name: ");scanf("%s",&person1.name);
//     printf("Enter person 1 age: ");scanf("%d",&person1.age);
//     printf("Enter person 1 height: ");scanf("%f",&person1.height);
//     printf("Enter person 1 gender: ");scanf("%s",&person1.gender);
//     printf("\n");
//     printf("================================\n");
//     printf("Enter person 2 name: ");scanf("%s",&person2.name);
//     printf("Enter person 2 age: ");scanf("%d",&person2.age);
//     printf("Enter person 2 height: ");scanf("%f",&person2.height);
//     printf("Enter person 2 gender: ");scanf("%s",&person2.gender);
//     printf("\n");
//     printf("================================\n");
//     printf("Person's information:\n");
//     printf("Name: %s\n",person1.name);
//     printf("Age: %d\n",person1.age);
//     printf("Height: %.2f\n",person1.height);
//     printf("Gender: %s\n",person1.gender);



//     return 0;
// }



// #include<stdio.h>
// struct Book
// {
//     /* data */
//     char title[100];
//     int create;
//     char author[50];
//     float price;
//     int quantity;

// }book1,book2;

// int main(){
//     printf("================================\n");
//     printf("Enter book's title: ");scanf("%s",&book1.title);
//     printf("Enter book's creation year: ");scanf("%d",&book1.create);
//     printf("Enter book's author: ");scanf("%s",&book1.author);
//     printf("Enter book's price: ");scanf("%f",&book1.price);
//     printf("Enter book's quantity: ");scanf("%d",&book1.quantity);
//     printf("\n");
//     printf("================================\n");
//     printf("Book's information:\n");
//     printf("Title: %s\n",book1.title);
//     printf("Creation Year: %d\n",book1.create);
//     printf("Author: %s\n",book1.author);
//     printf("Price: %.2f\n",book1.price);
//     printf("Quantity: %d\n",book1.quantity);
//     printf("\n");
//     printf("================================\n");
//     printf("Enter book's title: ");scanf("%s",&book2.title);
//     printf("Enter book's creation year: ");scanf("%d",&book2.create);
//     printf("Enter book's author: ");scanf("%s",&book2.author);
//     printf("Enter book's price: ");scanf("%f",&book2.price);
//     printf("Enter book's quantity: ");scanf("%d",&book2.quantity);
//     printf("\n");
//     printf("================================\n");
//     printf("Book's information:\n");
//     printf("Title: %s\n",book2.title);
//     printf("Creation Year: %d\n",book2.create);
//     printf("Author: %s\n",book2.author);
//     printf("Price: %.2f\n",book2.price);
//     printf("Quantity: %d\n",book2.quantity);
//     printf("\n");
//     return 0;
// }


// * Structure with functions

#include<stdio.h>
#include<string.h>
struct student
{
    /* data */
    int id;
    char name[50];
    float grade;
    char address[100];
    int age;
    char gender[10];
    char course[50];
    int year;

};

// * Create a new student object

struct student createStudent(int id, char name[], float grade, char address[], int age, char gender[], char course[], int year){
    struct student newStudent;
    newStudent.id = id;
    strcpy(newStudent.name,name);
    newStudent.grade = grade;
    strcpy(newStudent.address,address);
    newStudent.age = age;
    strcpy(newStudent.gender,gender);
    strcpy(newStudent.course,course);
    newStudent.year = year;
    return newStudent;
}

// * Print student information

void printStudent(struct student student){
    printf("================================\n");
    printf("ID: %d\n",student.id);
    printf("Name: %s\n",student.name);
    printf("Grade: %.2f\n",student.grade);
    printf("Address: %s\n",student.address);
    printf("Age: %d\n",student.age);
    printf("Gender: %s\n",student.gender);
    printf("Course: %s\n",student.course);
    printf("Year: %d\n",student.year);
    printf("================================\n");
}

int main(){
    struct student student1 = createStudent(1, "John Doe", 8.5, "123 Main St", 20, "Male", "Computer Science", 2);
    printStudent(student1);
    return 0;
}
