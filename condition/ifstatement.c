#include <stdio.h>

int main(){
    system("cls");
    char alphabet;
    printf("Enter value a : ");
    scanf("%c", &alphabet);

    if(alphabet >= 'a' && alphabet <= 'z'){
        printf("The alphabet %c is lowercase \n", alphabet);
    }
    if(alphabet >= 'A' && alphabet <= 'Z'){
        printf("The alphabet %c is uppercase \n", alphabet);
    }
   

    return 0;
}