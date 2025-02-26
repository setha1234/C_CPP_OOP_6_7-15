#include<stdio.h>
int main(){
    system("cls");
    int op;
    float exchange,riel,dollar,baht,won,yen,yuan,euro,rupee,peso;
    
    label:
    printf("\n================[ Menu ]========================\n\n");
    printf("0. Exit Program\n");
    printf("1. Dollar to Riel\n");
    printf("2. Dollar to Baht\n");
    printf("3. Dollar to Won\n");
    printf("4. Dollar to Yen\n");
    printf("5. Dollar to Yuan\n");
    printf("6. Dollar to Euro\n");
    printf("7. Dollar to Rupee\n");
    printf("8. Dollar to Peso\n");
    printf("Please choose the option to exchange : "); scanf("%d",&op);

    switch(op){
        case 0 :{
            printf("=======================[ Thanks for using ours program ]===============================\n");
            break;
        }
        case 1 : {
            riel = 4000;
            printf("=========================================================================\n");
            printf("Enter the amount of dollars to convert to Riel: "); scanf("%f",&dollar);
            exchange = dollar * riel;
            printf("The amount in Riel is %.2f\n", exchange);
            printf("==========================================================================\n");
            goto label;
            break;
        }
        case 2 : {
            baht = 33.06;
            printf("=========================================================================\n");
            printf("Enter the amount of dollars to convert to Baht: "); scanf("%f",&dollar);
            exchange = dollar * baht;
            printf("The amount in Baht is %.2f\n", exchange);
            printf("==========================================================================\n");
            goto label;
            break;
        }
        case 3 :{
            won = 1404.54;
            printf("=========================================================================\n");
            printf("Enter the amount of dollars to convert to Won: "); scanf("%f",&dollar);
            exchange = dollar * won;
            printf("The amount in Won is %.2f\n", exchange);
            printf("==========================================================================\n");
            goto label;
            break;
        }
        case 4 :{
            yen = 150.18;
            printf("=========================================================================\n");
            printf("Enter the amount of dollars to convert to Yen: "); scanf("%f",&dollar);
            exchange = dollar * yen;
            printf("The amount in Yen is %.2f\n", exchange);
            printf("==========================================================================\n");
            goto label;
            break;
        }
        case 5 :{
            yuan = 7.15;
            printf("=========================================================================\n");
            printf("Enter the amount of dollars to convert to Yuan: "); scanf("%f",&dollar);
            exchange = dollar * yuan;
            printf("The amount in Yuan is %.2f\n", exchange);
            printf("==========================================================================\n");
            goto label;
            break;
        }
        case 6 :{
            euro = 0.94;
            printf("=========================================================================\n");
            printf("Enter the amount of dollars to convert to Euro: "); scanf("%f",&dollar);
            exchange = dollar * euro;
            printf("The amount in Euro is %.2f\n", exchange);
            printf("==========================================================================\n");
            goto label;
            break;
        }
        case 7 :{
            rupee = 278.20;
            printf("=========================================================================\n");
            printf("Enter the amount of dollars to convert to Rupee: "); scanf("%f",&dollar);
            exchange = dollar * rupee;
            printf("The amount in Rupee is %.2f\n", exchange);
            printf("==========================================================================\n");
            goto label;
            break;
        }
        case 8 :{
            peso = 57.79;
            printf("=========================================================================\n");
            printf("Enter the amount of dollars to convert to Peso: "); scanf("%f",&dollar);
            exchange = dollar * peso;
            printf("The amount in Peso is %.2f\n", exchange);
            printf("==========================================================================\n");
            goto label;
            break;
        }
        default : {
            printf("Invalid option! Please try again.\n");
            goto label;
            break;
        }
    }
    
    return 0;
}