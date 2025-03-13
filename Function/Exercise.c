// #include<stdio.h>
// #include<stdlib.h>
// // global variable
// int code,quantity;
// char name[20];
// float price,riel,total,payment,tax,discount;

// void InputItem(){
//     printf("========================[Input Items]=============================\n");
//     printf("Enter Code     : ");scanf("%d",&code);
//     printf("Enter Name     : ");scanf("%s",&name);
//     printf("Enter Price    : ");scanf("%f",&price);
//     printf("Enter Quantity : ");scanf("%d",&quantity);

// }

// float TotalItem(){
//     return price * quantity;
// }

// float DiscountItem(){
//     total = TotalItem();
//     discount = (total > 1   && total <= 100) ? 0.1 :
//                (total > 100 && total <= 200) ? 0.2 :
//                (total > 200 && total <= 300) ? 0.3 :
//                (total > 300 && total <= 400) ? 0.4 :
//                (total > 400 && total <= 500) ? 0.5 :
//                (total > 500 )                ? 0.6 :
//                0.0;
//     return total * discount;
// }

// float TaxItem(){
//     total = TotalItem();
//     return total * 0.05;
// }

// float PaymentItem(){
//     return TotalItem() + TaxItem() - DiscountItem();
// }

// void Display(){
//     total = TotalItem();
//     tax = TaxItem();
//     printf("=======================[Display]==============================================================\n");
//     printf("\nCode\tName\tPrice\tQuantity\tTotal\t\tTax\tDiscount\tPayment\n");
//     printf("%d\t%s\t%.2f\t%d\t\t%.2f\t%.2f\t%.2f\t\t%.2f\n",code,name,price,quantity,total,tax,DiscountItem(),PaymentItem());
//     printf("==============================================================================================\n");

// }

// void DisplayRiel(){
//     total = TotalItem();
//     tax = TaxItem();
//     riel = total * 4000.00;
//     printf("==============================[Display Riel]=================================================\n");
//     printf("\nCode\tName\tPrice\tQuantity\tTotal\t\tTax\tDiscount\tPayment\n");
//     printf("%d\t%s\t%.2f\t%d\t\t%.2f\t%.2f\t%.2f\t\t%.2f\n",code,name,price,quantity,total,tax,DiscountItem(),riel);
//     printf("==============================================================================================\n");

// }

// void DisplayDollar(){
//     Display();

// }
// int main(){
//     system("clear");
//     int options;
//     do{
//         printf("======================================[Menu]==============================================\n");
//         printf("1. Input Item.\n");
//         printf("2. Display Item.\n");
//         printf("3. Display Riel.\n");
//         printf("4. Display Dollar.\n");
//         printf("5. Exit [0].\n");
//         printf("Enter your option for choosing :");scanf("%d",&options);
//         switch(options){
//             case 0 : {
//                 printf("=============================[Quit Program]================================\n");
//                 break;
//             }
//             case 1 :{
//                 InputItem();
//                 break;
//             }
//             case 2 :{
//                 Display();
//                 break;
//             }
//             case 3 :{
//                 DisplayRiel();
//                 break;
//             }
//             case 4 :{
//                 DisplayDollar();
//                 break;
//             }
//             default : {
//                 printf("Invalid Option.Try Again\n");
//                 break;
//             }
//         }

//     }while(options != 0);


//     return 0;
// }



// syntax 

// DataType FunctionName(Parameter1,Paramter2 ,...){
//  Code Block;
//     return ...;
// }



// #include <stdio.h>


// float Sum(int a,int b){// Paramenter

//     return a + b;
// }

// int main(){
//     system("clear");
//     float a,b;
//     printf("Enter value a :");
//     scanf("%f",&a);
//     printf("Enter value b :");
//     scanf("%f",&b);

//     float result = Sum(a,b);// Argument

//     printf("Result %.2f\n",result);

//     return 0;
// }




/*
Create a program for store product in stock
code
name
qty
price

1. Input
2. Display
3. Payment in riel
4. Payment in dollar
*/

#include<stdio.h>
int code[20],qty[20],n;
char name[20][20];
float price[20],total;
void InputProduct(){
    printf("=====================[Input Product]====================================\n");
    printf("Enter product for store in stock : ");scanf(" %d",&n);
    for (int i =0;i<n;i++){
        printf("=======================[Product %d ]====================================\n",i);
        printf("Enter product code : ");scanf("%d",&code[i]);
        printf("Enter product name : ");scanf("%s",&name[i]);
        printf("Enter product price : ");scanf("%f",&price[i]);
        printf("Enter product quantity : ");scanf("%d",&qty[i]);
        printf("\n");
    }
    printf("=========================[Input Product Complete]========================\n");
}

void DisplayProduct(){
    printf("=========================[Display Product]========================\n");
    printf("Code\tName\tPrice\tQuantity\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%.2f\t%d\n",code[i],name[i],price[i],qty[i]);
    }
    printf("====================[Display Product Complete]====================\n");
}

float TotalPrice(){
    total = 0;// ?
    for (int i=0;i<n;i++){
        total += price[i] * qty[i];
    }
    return total;
}

float PaymentInRiel(){
    total = TotalPrice();
    float riel = 4000.00;
    printf("====================[Payment In Riel]====================\n");
    printf("Payment In Riel: %.2f\n",total * riel);
    printf("================[Payment In Riel Complete]===============\n");
}

int main(){
    system("clear");
    int option;
    do{
        printf("=====================[Menu]===========================\n");
        printf("1.Exit\n");
        printf("2.Input product.\n");
        printf("3. Display product.\n");
        printf("4. Payment in riel.\n");
        printf("5. Payment in dollar.\n");
        printf("Enter your option : ");scanf("%d",&option);
        switch(option){
            case 1 :{
                printf("=========================[Thank you for using our program]========================\n");
                break;
            }
            case 2 :{
                // Input 
                InputProduct();
                break;
            }
            case 3 :{
                DisplayProduct();
                break;
            }
            case 4 :{
                PaymentInRiel();
                break;
            }
        }
    }while(option != 1);


    return 0;
}
