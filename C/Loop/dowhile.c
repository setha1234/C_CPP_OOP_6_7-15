#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    system("cls");
    // int i=0;

    // do{
    //     printf("%d Hello World!\n",i);
    //     i++;
    // }while(i<10);


    // char answer[20];

    // do{
    //     printf("Do you Love me?[yes/no]");
    //     gets(answer);

    // }while(!(strcmp(answer, "yes")==0));

    // printf("I love you too!!!");



    int code,qty,op;
    char name[20];
    float price,tax,dis,total,pay,riel,dollar;


    do{
        printf("\t\t\t========================[ Menu ]=============================\n");
        printf("\t\t\t 1. Insert a product.\n");
        printf("\t\t\t 2. Display the product.\n");
        printf("\t\t\t 3. Display for payment in Riel.\n");
        printf("\t\t\t 4. Display for payment in Dollar.\n");
        printf("\t\t\t 5. Exit. ( 0 )\n");
        printf("\t\t\t Please choose an option :");
        scanf("%d", &op);
        switch(op){
            case 0 :{
                printf("\t\t\t====================={ Thank you for using our program }========================\n");
            }break;
            case 1 :{
                printf("\n\t\t\t========================[ Insert a product ]========================\n");
                printf("\t\t\tEnter product code : ");
                scanf("%d", &code);
                printf("\t\t\tEnter product name : ");
                scanf("%s", name);
                printf("\t\t\tEnter product price : ");
                scanf("%f", &price);
                printf("\t\t\tEnter product quantity : ");
                scanf("%d", &qty);
                printf("\t\t\t========================[ Product inserted successfully ]========================\n\n");
            }break;
            case 2 : {
                printf("\t\t\t========================[ Display the product ]========================\n");
                printf("\t\t\tCode\tName\tPrice\tQuantity\n");
                printf("\t\t\t%d\t%s\t%.2f\t%d\n\n",code,name,price,qty);
                printf("\t\t\t========================[ Product displayed successfully ]========================\n");
            }break;
            case 3 :{
                printf("\t\t\t========================[ Display the product ]========================\n");
                total = price  * qty;
                dis =   (total > 1 && total <= 100 ) ? 0.1 :
                        (total > 100 && total <= 200) ? 0.2 :
                        (total > 200 && total <= 300) ? 0.3 :
                        (total > 300 && total <= 400) ? 0.4 :
                        (total > 400 && total <= 500) ? 0.5 :
                        (total > 500) ? 0.6 :
                        0;
                tax = total * 0.05;
                pay = (total + tax - (total * dis)/100);
                riel = pay * 4000.00;
                printf("\n\t\t\tCode\tName\tPrice\tQuantity\tTotal Price\tDiscount\tTax\t Payment Riel\n");
                printf("\n\t\t\t%d\t%s\t%.2f\t%d\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",code,name,price,qty,total,dis,tax,riel);
                printf("\n\t\t\t========================[ Product displayed successfully ]========================\n");
            }break;
            case 4 : {
                printf("\t\t\t========================[ Display the product ]========================\n");
                total = price  * qty;
                dis =   (total > 1 && total <= 100 ) ? 0.1 :
                        (total > 100 && total <= 200) ? 0.2 :
                        (total > 200 && total <= 300) ? 0.3 :
                        (total > 300 && total <= 400) ? 0.4 :
                        (total > 400 && total <= 500) ? 0.5 :
                        (total > 500) ? 0.6 :
                        0;
                tax = total * 0.05;
                pay = (total + tax - (total * dis)/100);
                printf("\n\t\t\tCode\tName\tPrice\tQuantity\tTotal Price\tDiscount\tTax\t Payment Dollar\n");
                printf("\n\t\t\t%d\t%s\t%.2f\t%d\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",code,name,price,qty,total,dis,tax,pay);
                printf("\n\t\t\t========================[ Product displayed successfully ]========================\n");
            }break;
            default :{
                printf("\t\t\t========================[ Invalid option ]========================\n");
                printf("\t\t\tPlease try again.\n");
            }break;

        }

    }while(op != 0);



    return 0;
}