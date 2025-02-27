#include <stdio.h>
#include<string.h>
int main(){
    /*
    Syntax while loop :
    start;
    while(condition){
        code block
        step;
    }
    
    */
    // int a;
    // a = 5;
    // while (a<=6){ //  1 1
    //     printf("Hello world!\n");
    //     a++;
    // }



    // char answer[20];

    // printf("Do you love me? : ");
    // gets(answer);

    // while(!(strcmp(answer,"yes")==0) && !(strcmp(answer,"Yes")==0) && !(strcmp(answer,"YeS")==0) && !(strcmp(answer,"YES")==0)){
    //     printf("Do you love me or not ? : ");
    //     gets(answer);
    // }

    // printf("Let's go to party!!!\n");

    char pass[20],username[20];

    printf("Enter username : ");
    gets(username);
    printf("Enter password : ");
    gets(pass);

    while(!(strcmp(username,"sethasith")==0) && !(strcmp(pass,"123")==0)){
        printf("Invalid username or password. Please try again.\n");
        printf("Enter username : ");
        gets(username);
        printf("Enter password : ");
        gets(pass);
    }
    
    printf("Log in successfully!!!!");


    return 0;
}