#include<stdio.h>
int main(){
    system("cls");
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    (age >= 18) ? printf("%d can voted", age) :
    (age < 18 && age > 10) ? printf("%d can't voted", age) :
    (age > 0 && age <=10) ? printf("%d to young", age) :
    printf("Invalid age");
            



    return 0;
}