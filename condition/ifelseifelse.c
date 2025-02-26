#include<stdio.h>
int main(){
    /* Syntax 
    if(condition 1){
        code block 1
    }else if(condition 2){
        code block 2
    } else if(condition n){
        code block n
    }else {
        code block else
    }
       
    */
    int age;
    age = 65;
    if(age >=18 && age < 65){
        printf("You are eligible to vote.\n");
    }else if(age >10 && age < 18){
        printf("You are not eligible to vote.\n");
    }else if(age >=65){
        printf("You are not eligible for vote. because %d year old \n",age);
    }else if(age > 0 && age <=10){
        printf("You are to young ");
    }else{
        printf("Invalid age.\n");
    }

    



    return 0;
}



