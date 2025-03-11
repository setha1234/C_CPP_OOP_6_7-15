#include<stdio.h>
#include<stdlib.h>
// global variable
int code,quantity;
char name[20];
float price,riel,total,payment,tax,discount;

void InputItem(){
    printf("========================[Input Items]=============================\n");
    printf("Enter Code     : ");scanf("%d",&code);
    printf("Enter Name     : ");scanf("%s",&name);
    printf("Enter Price    : ");scanf("%f",&price);
    printf("Enter Quantity : ");scanf("%d",&quantity);

}

float TotalItem(){
    return price * quantity;
}

float DiscountItem(){
    total = TotalItem();
    discount = (total > 1   && total <= 100) ? 0.1 :
               (total > 100 && total <= 200) ? 0.2 :
               (total > 200 && total <= 300) ? 0.3 :
               (total > 300 && total <= 400) ? 0.4 :
               (total > 400 && total <= 500) ? 0.5 :
               (total > 500 )                ? 0.6 :
               0.0;
    return total * discount;
}

float TaxItem(){
    total = TotalItem();
    return total * 0.05;
}

float PaymentItem(){
    return TotalItem() + TaxItem() - DiscountItem();
}

void Display(){
    total = TotalItem();
    tax = TaxItem();
    printf("=======================[Display]==============================================================\n");
    printf("\nCode\tName\tPrice\tQuantity\tTotal\t\tTax\tDiscount\tPayment\n");
    printf("%d\t%s\t%.2f\t%d\t\t%.2f\t%.2f\t%.2f\t\t%.2f\n",code,name,price,quantity,total,tax,DiscountItem(),PaymentItem());
    printf("==============================================================================================\n");

}

void DisplayRiel(){
    total = TotalItem();
    tax = TaxItem();
    riel = total * 4000.00;
    printf("==============================[Display Riel]=================================================\n");
    printf("\nCode\tName\tPrice\tQuantity\tTotal\t\tTax\tDiscount\tPayment\n");
    printf("%d\t%s\t%.2f\t%d\t\t%.2f\t%.2f\t%.2f\t\t%.2f\n",code,name,price,quantity,total,tax,DiscountItem(),riel);
    printf("==============================================================================================\n");

}

void DisplayDollar(){
    Display();

}
int main(){
    system("clear");
    int options;
    do{
        printf("======================================[Menu]==============================================\n");
        printf("1. Input Item.\n");
        printf("2. Display Item.\n");
        printf("3. Display Riel.\n");
        printf("4. Display Dollar.\n");
        printf("5. Exit [0].\n");
        printf("Enter your option for choosing :");scanf("%d",&options);
        switch(options){
            case 0 : {
                printf("=============================[Quit Program]================================\n");
                break;
            }
            case 1 :{
                InputItem();
                break;
            }
            case 2 :{
                Display();
                break;
            }
            case 3 :{
                DisplayRiel();
                break;
            }
            case 4 :{
                DisplayDollar();
                break;
            }
            default : {
                printf("Invalid Option.Try Again\n");
                break;
            }
        }

    }while(options != 0);


    return 0;
}
