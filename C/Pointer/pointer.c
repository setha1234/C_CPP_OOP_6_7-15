#include<stdio.h>
//* Pointer is a variable that stores the address of another variable.
// *  Pointer [ * ]

// int main(){
//     system("cls");
//     // int a = 10;
//     // int b = 10;
//     // int *ptr; // pointer variable
//     // ptr = &a; // pointer variable stores the address of variable a
//     // printf("Value of Variable : %d",a);
//     // printf("\nAddress of Variable : %d", &a);
//     // printf("\nValue of Pointer : %d", ptr); // pointer variable stores the address of variable a
//     // printf("\nValue of Pointer : %d", *ptr); // pointer variable stores the value of variable a
//     // printf("\nAddress of Pointer : %d", &ptr); // pointer variable stores the address of variable a
//     // printf("\nAddress of B : %d",&b);

//     // ptr = 20;

//     // printf("\nValue of Pointer : %d", ptr); // pointer variable stores the value of variable a
    
//     // * Calculate value by pointer (+,-,*,/,%)
//     int a = 10;
//     int b = 20;
//     int *ptr1=&a;
//     int *ptr2=&b;


//     printf("Sum : %d");
    

    
    
// }

// * Pointer with Function 


void swap(int *a, int *b) {
    
    int temp = *a;  
    *a = *b;        
    *b = temp;      

    printf("After swap \n");
    printf("Value of a = %d \t", *a);
    printf("Value of b = %d \n", *b);
}

int main() {
    int a = 10, b = 20;
    printf("Before swap function: a = %d, b = %d\n", a, b);
    
    swap(&a, &b);  

    printf("After swap function: a = %d, b = %d\n", a, b);

    return 0;
}