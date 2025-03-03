// * Control Statement or Condition Statement


// *  1. If statement
/*
syntax :
    if (condition) {
        statement;
    }
*/

// *  2. If-else statement

/*
syntax :
    if (condition) {
        statement;
    } else {
        statement;
    }
    
*/

// *  3. If-else if-else statement

/*
syntax :
    if (condition1) {
        statement1;
    } else if (condition2) {
        statement2;
    } else if (condition3) {
        statement3;
    } else {
        statement4;
    }

*/

// *  4. Switch Case statement

/*
syntax :
    switch (expression) {
        case constant1:
            statement1;
            break;
            
        case constant2:
            statement2;
            break;
        
        case constant3:
            statement3;
            break;
        
        default:
            statement4;
            break;
    }

*/

// *  5. Ternary operator

/*
syntax :
    (condition)? statement1 : statement2;

*/

// * Example Conditions :

// * 1. IF Statement -

/*
#include <stdio.h>

int main() {
    int a = 10;
    if (a == 10) {
        printf("a is equal to 10\n");
    }
    return 0;
}

*/


// * 2. If-else Statement -

/*
#include <stdio.h>

int main() {
    int a = 10;
    if (a == 10) {
        printf("a is equal to 10\n");
    } else {
        printf("a is not equal to 10\n");
    }
        
    return 0;

}

*/


// * 3. If-else if-else Statement -

/*
#include <stdio.h>

int main() {
    int a = 10;
    if (a == 10) {
        printf("a is equal to 10\n");
    } else if (a == 20) {
        printf("a is equal to 20\n");
    } else {
        printf("a is not equal to 10 or 20\n");
    }
        
    return 0;

}

*/

// *  4. Switch Case Statement

/*
#include <stdio.h>

int main() {
    int op;

    printf("Enter an operator [1-3]: ");
    scanf("%d", &op);
    
    switch (op) {
    case 1:
        printf("You are Select Option 1.");
        break;
    case 2:
        printf("You are Select Option 2.");
        break;
    case 3:
        printf("You are Select Option 3.");
        default:
    default :
        printf("You have made an invalid selection.");
    }
        
    return 0;
}
    
*/

// * 5. Ternary operator

/*
#include <stdio.h>

int main() {
    int a = 10;
    int result = (a == 10)? printf("a is equal to 10\n") : printf("a is not equal to 10\n");
    return 0;
}

*/

// Exercise condition 


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

