#include<stdio.h>
int main(){
    /*
        for loop
        syntax 1 :  

        for (start;stop;step){
            code block
        }

        syntax 2 :
        start;
        for (;stop;){
            code block;
            step;
        }
    
    */
    system("cls");
    // int a;

    /*
    for (a=1;a<=10;a++){
        printf("%d / I love you\n",a);
    }
    */

    // a = 10;
    // for(;a>=0;){
    //     printf("%d / I love you\n",a);
    //     a-=2;
    // }
    // int input,i;
    // printf("Enter for loop :");
    // scanf("%d",&input);

    // for (i=0;i<=input;i++){
    //     printf("%d / Pizza or Burgers.\n",i);
    // }

    int num,i;
    printf("Enter a number : ");
    scanf("%d",&num);
    for (i = 1; i<= 10; i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }





    return 0;
}